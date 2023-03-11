#pragma once

#define LITELOADER_VERSION_DEV     0
#define LITELOADER_VERSION_BETA    1
#define LITELOADER_VERSION_RELEASE 2

#define LITELOADER_VERSION_MAJOR          2
#define LITELOADER_VERSION_MINOR          11
#define LITELOADER_VERSION_REVISION       0
#define LITELOADER_VERSION_COMMIT_SHA     UNKNOWN
#define LITELOADER_VERSION_STATUS         LITELOADER_VERSION_DEV
#define LITELOADER_VERSION_STATUS_VERSION 0

#define TARGET_BDS_PROTOCOL_VERSION 568

#define LITELOADER_VERSION ll::getLoaderVersion()


#define LL_VERSION_TO_STRING_INNER(ver) #ver
#define LL_VERSION_TO_STRING(ver)       LL_VERSION_TO_STRING_INNER(ver)

// Used in LiteLoader.rc or ScriptEngine.rc
#if LITELOADER_VERSION_STATUS == LITELOADER_VERSION_BETA
#define LITELOADER_FILE_VERSION_FLAG VS_FF_DEBUG
#define LITELOADER_FILE_VERSION_STRING                                                                                 \
    LL_VERSION_TO_STRING(LITELOADER_VERSION_MAJOR)                                                                     \
    "." LL_VERSION_TO_STRING(LITELOADER_VERSION_MINOR) "." LL_VERSION_TO_STRING(LITELOADER_VERSION_REVISION            \
    ) "-beta." LL_VERSION_TO_STRING(LITELOADER_VERSION_STATUS_VERSION                                                  \
    ) "+" LL_VERSION_TO_STRING(LITELOADER_VERSION_COMMIT_SHA)
#elif LITELOADER_VERSION_STATUS == LITELOADER_VERSION_DEV
#define LITELOADER_FILE_VERSION_FLAG VS_FF_PRIVATEBUILD
#define LITELOADER_FILE_VERSION_STRING                                                                                 \
    LL_VERSION_TO_STRING(LITELOADER_VERSION_MAJOR)                                                                     \
    "." LL_VERSION_TO_STRING(LITELOADER_VERSION_MINOR) "." LL_VERSION_TO_STRING(LITELOADER_VERSION_REVISION            \
    ) "-dev." LL_VERSION_TO_STRING(LITELOADER_VERSION_STATUS_VERSION                                                   \
    ) "+" LL_VERSION_TO_STRING(LITELOADER_VERSION_COMMIT_SHA)

#else
#define LITELOADER_FILE_VERSION_FLAG 0x00000000L
#define LITELOADER_FILE_VERSION_STRING                                                                                 \
    LL_VERSION_TO_STRING(LITELOADER_VERSION_MAJOR)                                                                     \
    "." LL_VERSION_TO_STRING(LITELOADER_VERSION_MINOR) "." LL_VERSION_TO_STRING(LITELOADER_VERSION_REVISION            \
    ) "+" LL_VERSION_TO_STRING(LITELOADER_VERSION_COMMIT_SHA)
#endif
