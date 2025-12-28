# TopoEdit Source and Binaries

## Acknowledgements

I don't own this code. That is to say, it isn't my intelectual property. This source code in a form very similar to what I present 
here can be found in the Windows 7 SDK. Though you might run into challenges installing or extracting the code from that SDK on a
modern computer. The Windows 7 SDK isn't going to install on Windows 11. 

## What is in this Repository

* [B]Source Code[/B] - You will find the source code to TopoEdit with some modifications for compatibility for more recent C/C++ versions. 
* [B]Binaries[/B] - The Debug and Release versions of the Binaries are available within this repository. 

## Extraction

Extraction of the code from the SDK installation was done in the following manner. 

I downloaded the ISO for the Windows 7 SDK from https://www.microsoft.com/en-us/download/details.aspx?id=8442&msockid=1e55fd886ad86b6a3304ee446bf46af0. After downloading
the SDK, I mounted it. The ISO has a `Samples` section in the path `\Setup\WinSDKSamples_amd64`. It contains three `cab` files. I copied
those to my computer. The contents of each `cab` file were unpacked to the same folder using the `expand` command. 

`expand example.cab -F:* C:\ExtractedFiles`

The extracted files are not organized in their file folder hierarchy. The output is flat, with what had been previously foldernames
being prepended on the names of the file, separated by an underscore. File names look like the following examples. 

```
winsdk_samples_winui_uiautomation_uiafragmentprovider_cpp_customcontrol_cpp
winsdk_samples_winui_uiautomation_simpleuiaprovider_cpp_uiasimpleprovider_vcproj
winsdk_samples_winui_uiautomation_uiafragmentprovider_cpp_uiafragmentprovider_cpp
```

To transform these files names to their real file names, the underscores must be replaced with backslashes. However, the last
underscore must be converted to a period. We must also create the folders in which the final files will reside. I wrote a NodeJS
script to perform this change for me. You can find this script in the `sdkextraction` folder. 

## Other Changes

When I converted the original solution to a more modern Visual Studio solution, I also updated the C/C++ standards that it targets. 
When I did, I got compilation errors about initialization being bypassed for some variables because of `goto` statements. I addressed
this by moving the declarations of some variables to a place higher in the code and assigning initial values, even if those values
were NULL. If you would like to see those specific changes, you can view them in this commit. 

https://github.com/j2inet/topoedit/commit/73a83999ce7f4ec38650b367a2b0208a1ebbf05f



