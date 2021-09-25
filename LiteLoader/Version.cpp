#include "pch.h"

LIAPI std::string loaderapi::getLoaderVersion() {
    return LITELOADER_VERSION;
}
LIAPI unsigned short loaderapi::getLoaderVersionNum() {
    return LITELOADER_VERSION_NUMBER;
}
LIAPI std::string loaderapi::getServerVersion() {
    return SymCall(
        "?getGameVersionStringNet@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$"
        "allocator@D@2@@std@@XZ",
        std::string)();
}

THook(std::string,
      "?getServerVersionString@Common@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
      "@std@@XZ") {
#ifdef LITELOADER_VERSION_GITHUB
    return original() + " with LiteLoaderBDS " + LITELOADER_VERSION_GITHUB;
#else
    return original() + " with LiteLoaderBDS " + LITELOADER_VERSION;
#endif
}