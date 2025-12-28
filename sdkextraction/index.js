
const fs = require('fs');
const path = require('path');

function getFilesInDirectory(dirPath) {
    try {
        // Check if directory exists
        if (!fs.existsSync(dirPath)) {
            throw new Error(`Directory not found: ${dirPath}`);
        }

        // Read all items in the directory
        const items = fs.readdirSync(dirPath);

        // Filter only files (exclude directories)
        const files = items.filter(item => {
            const fullPath = path.join(dirPath, item);
            return fs.statSync(fullPath).isFile();
        });

        return files;
    } catch (err) {
        console.error(`Error reading directory: ${err.message}`);
        return [];
    }
}

// Example usage
const folderPath = './c1'; // Change to your folder path
const files = getFilesInDirectory(folderPath);
files.forEach(file => {
    var newPath = file.replaceAll('_','\\') ;
    const lastIndex = newPath.lastIndexOf("\\");
    if (lastIndex === -1) return newPath; 
        newPath =  'output\\'+newPath.substring(0, lastIndex) + "." + newPath.substring(lastIndex + 1);
        const targetPath = path.dirname(newPath);
        fs.mkdirSync(targetPath, { recursive: true });
        console.log('made directory ' + targetPath);
    fs.copyFile(path.join(folderPath, file), path.join(newPath), (err) => {
        if (err) throw err;
        console.log(`Copied: ${file} to ${newPath}`);
    });
});

console.log(`Files in "${folderPath}":`);

