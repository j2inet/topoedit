

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Mon Jan 18 22:14:07 2038
 */
/* Compiler settings for tedutil.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0628 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "tedutil.h"

#define TYPE_FORMAT_STRING_SIZE   3                                 
#define PROC_FORMAT_STRING_SIZE   1                                 
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _tedutil_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } tedutil_MIDL_TYPE_FORMAT_STRING;

typedef struct _tedutil_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } tedutil_MIDL_PROC_FORMAT_STRING;

typedef struct _tedutil_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } tedutil_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif


extern const tedutil_MIDL_TYPE_FORMAT_STRING tedutil__MIDL_TypeFormatString;
extern const tedutil_MIDL_PROC_FORMAT_STRING tedutil__MIDL_ProcFormatString;
extern const tedutil_MIDL_EXPR_FORMAT_STRING tedutil__MIDL_ExprFormatString;



#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const tedutil_MIDL_PROC_FORMAT_STRING tedutil__MIDL_ProcFormatString =
    {
        0,
        {

			0x0
        }
    };

static const tedutil_MIDL_TYPE_FORMAT_STRING tedutil__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_tedutil_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITedVideoWindowHandler, ver. 0.0,
   GUID={0x72D92BD9,0xCA59,0x4bc7,{0x9F,0x40,0x2E,0x60,0x64,0x82,0x60,0x98}} */


/* Object interface: ITedTopoEventHandler, ver. 0.0,
   GUID={0xC2C3A379,0x3D36,0x4566,{0xAC,0x1B,0xA5,0x62,0x46,0x6C,0x02,0x1F}} */


/* Object interface: ITedPropertyInfo, ver. 0.0,
   GUID={0xC311E957,0xD926,0x4dd8,{0xBC,0xDE,0x6F,0x31,0xB4,0xDD,0xB1,0xAD}} */


/* Object interface: ITedPropertyController, ver. 0.0,
   GUID={0xD3903C3E,0xD5DF,0x43c1,{0xA0,0x99,0xAB,0xF7,0x4A,0x53,0x67,0x70}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: ITedTopoView, ver. 0.0,
   GUID={0x4C086376,0x9583,0x4906,{0xA0,0x6D,0xAA,0x57,0x04,0x24,0x07,0xDA}} */


/* Standard interface: __MIDL_itf_tedutil_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: ITedDataSaver, ver. 0.0,
   GUID={0xAAEB0E96,0x0214,0x42c4,{0x80,0xF1,0x3B,0xAD,0x06,0xF5,0x4F,0x58}} */


/* Object interface: ITedDataLoader, ver. 0.0,
   GUID={0x892FADFF,0x90BB,0x4189,{0x99,0x10,0x3F,0xBF,0x58,0xDA,0xA1,0xE8}} */

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    tedutil__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _tedutil_ProxyVtblList[] = 
{
    0
};

const CInterfaceStubVtbl * const _tedutil_StubVtblList[] = 
{
    0
};

PCInterfaceName const _tedutil_InterfaceNamesList[] = 
{
    0
};


#define _tedutil_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _tedutil, pIID, n)

int __stdcall _tedutil_IID_Lookup( const IID * pIID, int * pIndex )
{
    UNREFERENCED_PARAMETER(pIID);
    UNREFERENCED_PARAMETER(pIndex);
    return 0;
}

EXTERN_C const ExtendedProxyFileInfo tedutil_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _tedutil_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _tedutil_StubVtblList,
    (const PCInterfaceName * ) & _tedutil_InterfaceNamesList,
    0, /* no delegation */
    & _tedutil_IID_Lookup, 
    0,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

