/*
 * Summary: interface for all global variables of the library
 * Description: all the global variables and thread handling for
 *              those variables is handled by this module.
 *
 * The bottom of this file is automatically generated by build_glob.py
 * based on the description file global.data
 *
 * Copy: See Copyright for the status of this software.
 *
 * Author: Gary Pennington <Gary.Pennington@uk.sun.com>, Daniel Veillard
 */

#ifndef __XML_GLOBALS_H
#define __XML_GLOBALS_H

#include "Libxml2_xmlmemory.h"
#include "Libxml2_SAX.h"
#include "Libxml2_SAX2.h"

#include "Libxml2_chvalid.h"

#ifdef XMLENGINE_XSLT
#include <libxslt/numbersInternals.h>
#include "XmlEnglibxslt/xsltutils.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _xmlGlobalState xmlGlobalState;
typedef xmlGlobalState *xmlGlobalStatePtr;
//defines a linear address type
typedef unsigned int xmlLinAddress;

XMLPUBFUN void XMLCALL xeSetTLS(void* ptr);
XMLPUBFUN xmlGlobalStatePtr XMLCALL xeGetTLS();
XMLPUBFUN void XMLCALL xecleanTLS();

//#if defined (XMLENGINE_USE_DOMSTRINGARGUMENT)
XMLPUBFUN void XMLCALL xeCleanupDOMStringConverter();
//#endif
XMLPUBFUN int  XMLCALL xmlOOMFlag();
XMLPUBFUN void XMLCALL xmlSetOOM();
XMLPUBFUN void XMLCALL xmlResetOOM();

#define snprintf symbian_snprintf
#define vsnprintf symbian_vsnprintf

XMLPUBFUN int XMLCALL symbian_vsnprintf(char *str, size_t size, const char *format, va_list ap);
XMLPUBFUN int XMLCALL symbian_snprintf(char *str, size_t size, const char *format, ...);
//#endif

#ifdef LIBXML_XPATH_ENABLED
#   include "XmlEngtriodef.h"
#   include "XmlEngtrionan.h"
#   include "Libxml2_xpathInternals.h"
#endif

#include "Libxml2_chvalid.h"

#ifdef LIBXML_CATALOG_ENABLED
#include <catalog.h>
#endif

#ifdef XMLENGINE_XMLSCHEMA_DATATYPES
#include "Libxml2_xmlschemasGlobals.h"
#endif


void* malloc_impl(size_t size);
#ifdef XMLENGINE_MEM_DEBUG
void  free_debug(void* mem);
#endif

typedef struct _xmlCharEncodingAlias xmlCharEncodingAlias;
typedef xmlCharEncodingAlias *xmlCharEncodingAliasPtr;
struct _xmlCharEncodingAlias {
    const char *name;
    const char *alias;
};

typedef struct _xmlInputCallback {
    xmlInputMatchCallback matchcallback;
    xmlInputOpenCallback opencallback;
    xmlInputReadCallback readcallback;
    xmlInputCloseCallback closecallback;
} xmlInputCallback;
#define MAX_INPUT_CALLBACK 15

#ifdef LIBXML_OUTPUT_ENABLED
typedef struct _xmlOutputCallback {
    xmlOutputMatchCallback matchcallback;
    xmlOutputOpenCallback opencallback;
    xmlOutputWriteCallback writecallback;
    xmlOutputCloseCallback closecallback;
} xmlOutputCallback;
#define MAX_OUTPUT_CALLBACK 15
#endif /* LIBXML_OUTPUT_ENABLED */

XMLPUBFUN xmlParserInputPtr XMLCALL
xmlDefaultExternalEntityLoader(const char *URL, const char *ID, xmlParserCtxtPtr ctxt);

#define xmlThrDefMutex NULL
#define xmlInitGlobals()
#define xmlCleanupGlobals()



/*
 * Externally global symbols which need to be protected for backwards
 * compatibility support.
 */

#undef  docbDefaultSAXHandler
#undef  htmlDefaultSAXHandler
#undef  xmlBufferAllocScheme
#undef  xmlDefaultBufferSize
#undef  xmlDefaultSAXHandler
#undef  xmlDefaultSAXLocator
#undef  xmlDoValidityCheckingDefaultValue
#undef  xmlFree
#undef  xmlGenericError
#undef  xmlStructuredError
#undef  xmlGenericErrorContext
#undef  xmlGetWarningsDefaultValue
#undef  xmlIndentTreeOutput
#undef  xmlTreeIndentString
#undef  xmlKeepBlanksDefaultValue
#undef  xmlLineNumbersDefaultValue
#undef  xmlLoadExtDtdDefaultValue
#undef  xmlMalloc
#undef  xmlMallocAtomic
#undef  xmlMemStrdup
#undef  xmlParserDebugEntities
#undef  xmlParserVersion
#undef  xmlPedanticParserDefaultValue
#undef  xmlRealloc
#undef  xmlSaveNoEmptyTags
#undef  xmlSubstituteEntitiesDefaultValue
#undef  xmlRegisterNodeDefaultValue
#undef  xmlDeregisterNodeDefaultValue
#undef  xmlLastError
#undef  xmlOOM
#undef  xeUserCount

#undef  htmlStartCloseIndex
#undef  htmlStartCloseIndexinitialized

/* XMLENGINE_XSLT */
#undef calibration
#undef default_token
#undef xsltExtensionsHash
#undef xsltFunctionsHash
#undef xsltElementsHash
#undef xsltTopLevelsHash
#undef xsltDebuggerCurrentCallbacks

typedef void (*xmlRegisterNodeFunc) (xmlNodePtr node);
typedef void (*xmlDeregisterNodeFunc) (xmlNodePtr node);


struct _xmlGlobalState
{
    //const
    char *xmlParserVersion;

    xmlSAXLocator   xmlDefaultSAXLocator;
    xmlSAXHandlerV1 xmlDefaultSAXHandler;
    xmlSAXHandlerV1 docbDefaultSAXHandler;
    xmlSAXHandlerV1 htmlDefaultSAXHandler;

    xmlFreeFunc xmlFreeFn;
    xmlMallocFunc xmlMallocFn;
    xmlStrdupFunc xmlMemStrdupFn;
    xmlReallocFunc xmlReallocFn;

    xmlGenericErrorFunc xmlGenericError;
    xmlStructuredErrorFunc xmlStructuredError;
    void *xmlGenericErrorContext;

    xmlBufferAllocationScheme xmlBufferAllocScheme;
    int xmlDefaultBufferSize;

    int xmlSubstituteEntitiesDefaultValue;
    int xmlDoValidityCheckingDefaultValue;
    int xmlGetWarningsDefaultValue;
    int xmlKeepBlanksDefaultValue;

#ifdef LIBXML_ENABLE_NODE_LINEINFO
    int xmlLineNumbersDefaultValue;
#endif // LIBXML_ENABLE_NODE_LINEINFO

    int xmlLoadExtDtdDefaultValue;
    int xmlParserDebugEntities;
    int xmlPedanticParserDefaultValue;

    int xmlSaveNoEmptyTags;
    int xmlIndentTreeOutput;
    //const
    char *xmlTreeIndentString;

    xmlRegisterNodeFunc xmlRegisterNodeDefaultValue;
    xmlDeregisterNodeFunc xmlDeregisterNodeDefaultValue;

    xmlMallocFunc xmlMallocAtomicFn;
    xmlError xmlLastError;

    /* encoding */
    xmlCharEncodingHandlerPtr   xmlUTF16LEHandler;
    xmlCharEncodingHandlerPtr   xmlUTF16BEHandler;
    xmlCharEncodingAliasPtr     xmlCharEncodingAliases;
    int     xmlCharEncodingAliasesNb;
    int     xmlCharEncodingAliasesMax;
    int     xmlLittleEndian;
    xmlCharEncodingHandlerPtr *handlers;
    int     nbCharEncodingHandler;
    xmlCharEncodingHandlerPtr xmlDefaultCharEncodingHandler;

    /* error */
    int had_info; /* internal */

    /* parserInternals */
    int xmlInputStreamId; /* internal: renamed from "id" to prevent namespace collisions */

    /* parser */
    unsigned int xmlParserMaxDepth;
    const char *xmlW3CPIs [2];
    int xmlParserInitialized;
    
    /* thread's stack info */
    unsigned int xeStackLimit;

    /* SAX2 */
    int xmlSAX2DefaultVersionValue;

    /* xmlio */
    xmlInputCallback xmlInputCallbackTable[MAX_INPUT_CALLBACK];
    int xmlInputCallbackNr;
    int xmlInputCallbackInitialized;

#ifdef LIBXML_HTML_ENABLED
    /*HTML parser*/
    const char** htmlStartCloseIndex[100];
    int htmlStartCloseIndexinitialized;
#endif

#ifdef LIBXML_OUTPUT_ENABLED
    xmlOutputCallback xmlOutputCallbackTable[MAX_OUTPUT_CALLBACK];
    int xmlOutputCallbackNr;
    int xmlOutputCallbackInitialized;
#endif /* LIBXML_OUTPUT_ENABLED */

    xmlExternalEntityLoader xmlCurrentExternalEntityLoader;

    /* xmlmemory */
    int xmlMemInitialized;
    unsigned long  debugMemSize;
    unsigned long  debugMaxMemSize;
//  xmlMutexPtr xmlMemMutex;
    unsigned int block;
    unsigned int xmlMemStopAtBlock;
    void *xmlMemTraceBlockAt;

//#ifdef LIBXML_TREE_ENABLED
    int __xmlRegisterCallbacks;
//#endif

#ifdef LIBXML_TREE_ENABLED
    int xmlCompressMode;
    int xmlCheckDTD;
#endif

#ifdef LIBXML_CATALOG_ENABLED
    int xmlDebugCatalogs;
    xmlCatalogAllow xmlCatalogDefaultAllow;
    xmlCatalogPrefer xmlCatalogDefaultPrefer;
    xmlHashTablePtr xmlCatalogXMLFiles;
    xmlCatalogPtr xmlDefaultCatalog;
//  xmlRMutexPtr xmlCatalogMutex;
    int xmlCatalogInitialized;
#endif

#ifdef LIBXML_XPATH_ENABLED
    /* xpath */
    double xmlXPathNAN;
    double xmlXPathPINF;
    double xmlXPathNINF;
    double xmlXPathNZERO;
    int xmlXPathInitialized;

#ifndef LIBXML_THREAD_ENABLED
    int xmlXPathDisableOptimizer;
#endif
#endif

#ifdef LIBXML_XPTR_ENABLED
    xlinkHandlerPtr xlinkDefaultHandler;
    xlinkNodeDetectFunc xlinkDefaultDetect;
#endif

#if defined (XMLENGINE_USE_DOMSTRINGARGUMENT)
    DOMStringConverterData xeStringArgs;
#endif

#ifdef XMLENGINE_XMLSCHEMA_DATATYPES
    xmlSchemaTypesGlobalDataPtr xmlSchemaTypesGlobals;
    int xmlSchemaTypesInitialized;
#endif

#ifdef LIBXML_XPATH_ENABLED
#   ifdef XMLENGINE_XPATH_FUNC_HASH_OPTIMIZED
    int xmlXPathDefineExtensionFunctionsGlobally;
    xmlHashTablePtr xmlXPathDefaultFunctionsHash;
    xmlHashTablePtr xmlXPathIntermediaryExtensionFunctionsHash;
#   endif
#endif

#ifdef XMLENGINE_XSLT
    long calibration;
    xsltFormatToken default_token;
    xmlHashTablePtr xsltTopLevelsHash;
#ifdef XSLT_EXTENSION
    xmlHashTablePtr xsltExtensionsHash;
    xmlHashTablePtr xsltFunctionsHash;
    xmlHashTablePtr xsltElementsHash;
#endif
    xsltDebuggerCallbacks xsltDebuggerCurrentCallbacks;
#endif /*end of XMLENGINE_XSLT*/

    int xmlOOM;
    int xeUserCount;
#ifdef XMLENGINE_MEM_DEBUG
    int allocCount;
#endif
}; // end of struct _xmlGlobalState

#ifdef __cplusplus
}
#endif

#include "Libxml2_threads.h"

#ifdef __cplusplus
extern "C" {
#endif

XMLPUBVAR const char* const xmlTreeIndentString;
XMLPUBVAR const char* const xmlParserVersion;

XMLPUBFUN void                  XMLCALL xmlInitializeGlobalState(xmlGlobalStatePtr gs, xmlLinAddress stackLimit);
XMLPUBFUN xmlRegisterNodeFunc   XMLCALL xmlRegisterNodeDefault  (xmlRegisterNodeFunc func);
XMLPUBFUN xmlDeregisterNodeFunc XMLCALL xmlDeregisterNodeDefault(xmlDeregisterNodeFunc func);

#define xmlFree xmlGetGlobalState()->xmlFreeFn
#define xmlMalloc xmlGetGlobalState()->xmlMallocFn
#define xmlMallocAtomic xmlGetGlobalState()->xmlMallocFn
#define xmlRealloc xmlGetGlobalState()->xmlReallocFn
#define xmlMemStrdup xmlGetGlobalState()->xmlMemStrdupFn

#define xmlLastError (xmlGetGlobalState()->xmlLastError)
#define xmlBufferAllocScheme (xmlGetGlobalState()->xmlBufferAllocScheme)
#define xmlDefaultBufferSize (xmlGetGlobalState()->xmlDefaultBufferSize)

#ifdef LIBXML_SAX1_ENABLED
#define xmlDefaultSAXHandler (xmlGetGlobalState()->xmlDefaultSAXHandler)
#endif /* LIBXML_SAX1_ENABLED */

#define xmlDefaultSAXLocator (xmlGetGlobalState()->xmlDefaultSAXLocator)

#define xmlDoValidityCheckingDefaultValue (xmlGetGlobalState()->xmlDoValidityCheckingDefaultValue)
#define xmlGenericError (xmlGetGlobalState()->xmlGenericError)
#define xmlStructuredError (xmlGetGlobalState()->xmlStructuredError)
#define xmlGenericErrorContext (xmlGetGlobalState()->xmlGenericErrorContext)
#define xmlGetWarningsDefaultValue (xmlGetGlobalState()->xmlGetWarningsDefaultValue)
#define xmlIndentTreeOutput (xmlGetGlobalState()->xmlIndentTreeOutput)
#define xmlKeepBlanksDefaultValue (xmlGetGlobalState()->xmlKeepBlanksDefaultValue)
#define xmlLineNumbersDefaultValue (xmlGetGlobalState()->xmlLineNumbersDefaultValue)
#define xmlLoadExtDtdDefaultValue (xmlGetGlobalState()->xmlLoadExtDtdDefaultValue)
#define xmlParserDebugEntities (xmlGetGlobalState()->xmlParserDebugEntities)
#define xmlPedanticParserDefaultValue (xmlGetGlobalState()->xmlPedanticParserDefaultValue)
#define xmlSaveNoEmptyTags (xmlGetGlobalState()->xmlSaveNoEmptyTags)
#define xmlSubstituteEntitiesDefaultValue (xmlGetGlobalState()->xmlSubstituteEntitiesDefaultValue)
#define xmlRegisterNodeDefaultValue (xmlGetGlobalState()->xmlRegisterNodeDefaultValue)
#define xmlDeregisterNodeDefaultValue (xmlGetGlobalState()->xmlDeregisterNodeDefaultValue)

/* Static Globals */
#define xmlLibraryLock NULL

#define had_info (xmlGetGlobalState()->had_info)
#define xmlInputStreamId (xmlGetGlobalState()->xmlInputStreamId)

#define xmlUTF16LEHandler (xmlGetGlobalState()->xmlUTF16LEHandler)
#define xmlUTF16BEHandler (xmlGetGlobalState()->xmlUTF16BEHandler)
#define xmlCharEncodingAliases (xmlGetGlobalState()->xmlCharEncodingAliases)
#define xmlCharEncodingAliasesNb (xmlGetGlobalState()->xmlCharEncodingAliasesNb)
#define xmlCharEncodingAliasesMax (xmlGetGlobalState()->xmlCharEncodingAliasesMax)
#define xmlLittleEndian (xmlGetGlobalState()->xmlLittleEndian)
#define handlers (xmlGetGlobalState()->handlers)
#define nbCharEncodingHandler (xmlGetGlobalState()->nbCharEncodingHandler)
#define xmlDefaultCharEncodingHandler (xmlGetGlobalState()->xmlDefaultCharEncodingHandler)

#define xmlParserMaxDepth (xmlGetGlobalState()->xmlParserMaxDepth)
#define xmlW3CPIs (xmlGetGlobalState()->xmlW3CPIs)
#define xmlParserInitialized (xmlGetGlobalState()->xmlParserInitialized)
#define xeStackLimit (xmlGetGlobalState()->xeStackLimit)

#define xmlSAX2DefaultVersionValue (xmlGetGlobalState()->xmlSAX2DefaultVersionValue)

#define xmlInputCallbackTable (xmlGetGlobalState()->xmlInputCallbackTable)
#define xmlInputCallbackNr (xmlGetGlobalState()->xmlInputCallbackNr)
#define xmlInputCallbackInitialized (xmlGetGlobalState()->xmlInputCallbackInitialized)
#define xmlOutputCallbackTable (xmlGetGlobalState()->xmlOutputCallbackTable)
#define xmlOutputCallbackNr (xmlGetGlobalState()->xmlOutputCallbackNr)
#define xmlOutputCallbackInitialized (xmlGetGlobalState()->xmlOutputCallbackInitialized)
#define xmlCurrentExternalEntityLoader (xmlGetGlobalState()->xmlCurrentExternalEntityLoader)

#define xmlMemInitialized (xmlGetGlobalState()->xmlMemInitialized)
#define debugMemSize (xmlGetGlobalState()->debugMemSize)
#define debugMaxMemSize (xmlGetGlobalState()->debugMaxMemSize)
//#define   xmlMemMutex (xmlGetGlobalState->xmlMemMutex)
#define xmlMemMutex NULL
#define block (xmlGetGlobalState()->block)
#define xmlMemStopAtBlock (xmlGetGlobalState()->xmlMemStopAtBlock)
#define xmlMemTraceBlockAt (xmlGetGlobalState()->xmlMemTraceBlockAt)

#define __xmlRegisterCallbacks (xmlGetGlobalState()->__xmlRegisterCallbacks)

#ifdef LIBXML_TREE_ENABLED
#   define xmlCompressMode (xmlGetGlobalState()->xmlCompressMode)
#   define xmlCheckDTD (xmlGetGlobalState()->xmlCheckDTD)
#endif

#ifdef LIBXML_CATALOG_ENABLED
#   define xmlDebugCatalogs (xmlGetGlobalState()->xmlDebugCatalogs)
#   define  xmlCatalogDefaultAllow (xmlGetGlobalState()->xmlCatalogDefaultAllow)
#   define xmlCatalogDefaultPrefer (xmlGetGlobalState()->xmlCatalogDefaultPrefer)
#   define  xmlCatalogXMLFiles (xmlGetGlobalState()->xmlCatalogXMLFiles)
#   define  xmlDefaultCatalog (xmlGetGlobalState()->xmlDefaultCatalog)
//#define   xmlCatalogMutex  (xmlGetGlobalState()->xmlCatalogMutex)
#   define  xmlCatalogMutex NULL
#   define  xmlCatalogInitialized (xmlGetGlobalState()->xmlCatalogInitialized)
#endif

#ifdef LIBXML_HTML_ENABLED
#define htmlStartCloseIndex (xmlGetGlobalState()->htmlStartCloseIndex)
#define htmlStartCloseIndexinitialized (xmlGetGlobalState()->htmlStartCloseIndexinitialized)
#define htmlDefaultSAXHandler (xmlGetGlobalState()->htmlDefaultSAXHandler)
#endif

#ifdef LIBXML_XPATH_ENABLED
#   define xmlXPathNAN (xmlGetGlobalState()->xmlXPathNAN)
#   define xmlXPathPINF (xmlGetGlobalState()->xmlXPathPINF)
#   define xmlXPathNINF (xmlGetGlobalState()->xmlXPathNINF)
#   define xmlXPathNZERO (xmlGetGlobalState()->xmlXPathNZERO)
#   define xmlXPathInitialized (xmlGetGlobalState()->xmlXPathInitialized)
#   ifndef LIBXML_THREAD_ENABLED
#       define xmlXPathDisableOptimizer (xmlGetGlobalState()->xmlXPathDisableOptimizer)
#   endif
#   ifdef XMLENGINE_XPATH_FUNC_HASH_OPTIMIZED
#       define xmlXPathDefineExtensionFunctionsGlobally (xmlGetGlobalState()->xmlXPathDefineExtensionFunctionsGlobally)
#       define xmlXPathDefaultFunctionsHash (xmlGetGlobalState()->xmlXPathDefaultFunctionsHash)
#       define xmlXPathIntermediaryExtensionFunctionsHash (xmlGetGlobalState()->xmlXPathIntermediaryExtensionFunctionsHash)
#   endif
#endif

#ifdef LIBXML_XPTR_ENABLED
#   define xlinkDefaultHandler (xmlGetGlobalState()->xlinkDefaultHandler)
#   define xlinkDefaultDetect (xmlGetGlobalState()->xlinkDefaultDetect)
#endif

#define xmlOOM      (xmlGetGlobalState()->xmlOOM)
#define xeUserCount (xmlGetGlobalState()->xeUserCount)

#ifdef XMLENGINE_XMLSCHEMA_DATATYPES
#   define xmlSchemaTypesGlobals (xmlGetGlobalState()->xmlSchemaTypesGlobals)
#   define xmlSchemaTypesInitialized (xmlGetGlobalState()->xmlSchemaTypesInitialized)
#endif

#ifdef __cplusplus
}
#endif
#endif /* __XML_GLOBALS_H */

