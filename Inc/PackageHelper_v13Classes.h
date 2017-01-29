/*===========================================================================
    C++ class definitions exported from UnrealScript.
    This is automatically generated by the tools.
    DO NOT modify this manually! Edit the corresponding .uc files instead!
===========================================================================*/
#if _MSC_VER
#pragma pack (push,4)
#endif

#ifndef PACKAGEHELPER_V13_API
#define PACKAGEHELPER_V13_API DLL_IMPORT
#endif

#ifndef NAMES_ONLY
#define AUTOGENERATE_NAME(name) extern PACKAGEHELPER_V13_API FName PACKAGEHELPER_V13_##name;
#define AUTOGENERATE_FUNCTION(cls,idx,name)
#endif


#ifndef NAMES_ONLY


class PACKAGEHELPER_V13_API APHActor : public AActor
{
public:
    class AActor* TargetActor;
    INT BinaryArc;
    FStringNoInit FinalName;
    DECLARE_FUNCTION(execFindImports);
    DECLARE_FUNCTION(execHasEmbeddedCode);
    DECLARE_FUNCTION(execIsInPackageMap);
    DECLARE_FUNCTION(execCloseBinaryLog);
    DECLARE_FUNCTION(execLogBinary);
    DECLARE_FUNCTION(execOpenBinaryLog);
    DECLARE_FUNCTION(execFileExists);
    DECLARE_FUNCTION(execLoadDefsFile);
    DECLARE_FUNCTION(execMoveDefsFile);
    DECLARE_FUNCTION(execGetFileInfo);
    DECLARE_FUNCTION(execGetLoaderMD5);
    DECLARE_FUNCTION(execSavePackageInfo);
    DECLARE_FUNCTION(execSetPackageInfo);
    DECLARE_FUNCTION(execGetPackageInfo);
    DECLARE_CLASS(APHActor,AActor,0,PackageHelper_v13)
    NO_DEFAULT_CONSTRUCTOR(APHActor)
};

#endif

AUTOGENERATE_FUNCTION(APHActor,-1,execFindImports);
AUTOGENERATE_FUNCTION(APHActor,-1,execHasEmbeddedCode);
AUTOGENERATE_FUNCTION(APHActor,-1,execIsInPackageMap);
AUTOGENERATE_FUNCTION(APHActor,-1,execCloseBinaryLog);
AUTOGENERATE_FUNCTION(APHActor,-1,execLogBinary);
AUTOGENERATE_FUNCTION(APHActor,-1,execOpenBinaryLog);
AUTOGENERATE_FUNCTION(APHActor,-1,execFileExists);
AUTOGENERATE_FUNCTION(APHActor,-1,execLoadDefsFile);
AUTOGENERATE_FUNCTION(APHActor,-1,execMoveDefsFile);
AUTOGENERATE_FUNCTION(APHActor,-1,execGetFileInfo);
AUTOGENERATE_FUNCTION(APHActor,-1,execGetLoaderMD5);
AUTOGENERATE_FUNCTION(APHActor,-1,execSavePackageInfo);
AUTOGENERATE_FUNCTION(APHActor,-1,execSetPackageInfo);
AUTOGENERATE_FUNCTION(APHActor,-1,execGetPackageInfo);

#ifndef NAMES_ONLY
#undef AUTOGENERATE_NAME
#undef AUTOGENERATE_FUNCTION
#endif NAMES_ONLY

#if _MSC_VER
#pragma pack (pop)
#endif
