#pragma once

#define LITELOADER_PRE_RELEASE_ALPHA 0
#define LITELOADER_PRE_RELEASE_BETA  1
#define LITELOADER_PRE_RELEASE_NONE  255

#define LITELOADER_VERSION_MAJOR          3
#define LITELOADER_VERSION_MINOR          0
#define LITELOADER_VERSION_PATCH          0
#define LITELOADER_VERSION_PRE_RELEASE    LITELOADER_PRE_RELEASE_ALPHA
#define LITELOADER_VERSION_PRE_RELEASE_ID 0

#define TARGET_BDS_PROTOCOL_VERSION 568

#define LL_VERSION_TO_STRING_INNER(ver) #ver
#define LL_VERSION_TO_STRING(ver)       LL_VERSION_TO_STRING_INNER(ver)

// Used in LiteLoader.rc or ScriptEngine.rc
#if LITELOADER_VERSION_PRE_RELEASE == LITELOADER_PRE_RELEASE_ALPHA
#define LITELOADER_FILE_VERSION_FLAG VS_FF_DEBUG
#define LITELOADER_FILE_VERSION_STRING                                                                                 \
    LL_VERSION_TO_STRING(LITELOADER_VERSION_MAJOR)                                                                     \
    "." LL_VERSION_TO_STRING(LITELOADER_VERSION_MINOR) "." LL_VERSION_TO_STRING(LITELOADER_VERSION_PATCH               \
    ) "-alpha." LL_VERSION_TO_STRING(LITELOADER_VERSION_PRE_RELEASE_ID                                                 \
    ) "+" LL_VERSION_TO_STRING(LITELOADER_VERSION_COMMIT_SHA)
#elif LITELOADER_VERSION_PRE_RELEASE == LITELOADER_PRE_RELEASE_BETA
#define LITELOADER_FILE_VERSION_FLAG VS_FF_DEBUG
#define LITELOADER_FILE_VERSION_STRING                                                                                 \
    LL_VERSION_TO_STRING(LITELOADER_VERSION_MAJOR)                                                                     \
    "." LL_VERSION_TO_STRING(LITELOADER_VERSION_MINOR) "." LL_VERSION_TO_STRING(LITELOADER_VERSION_PATCH               \
    ) "-beta." LL_VERSION_TO_STRING(LITELOADER_VERSION_PRE_RELEASE_ID                                                  \
    ) "+" LL_VERSION_TO_STRING(LITELOADER_VERSION_COMMIT_SHA)

#else
#define LITELOADER_FILE_VERSION_FLAG 0x00000000L
#define LITELOADER_FILE_VERSION_STRING                                                                                 \
    LL_VERSION_TO_STRING(LITELOADER_VERSION_MAJOR)                                                                     \
    "." LL_VERSION_TO_STRING(LITELOADER_VERSION_MINOR) "." LL_VERSION_TO_STRING(LITELOADER_VERSION_PATCH               \
    ) "+" LL_VERSION_TO_STRING(LITELOADER_VERSION_COMMIT_SHA)
#endif
