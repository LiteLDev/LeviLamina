#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackListener {

public:
    // prevent constructor by default
    ResourcePackListener& operator=(ResourcePackListener const&) = delete;
    ResourcePackListener(ResourcePackListener const&)            = delete;
    ResourcePackListener()                                       = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKLISTENER
    /**
     * @symbol ?onBaseGamePackDownloadComplete\@ResourcePackListener\@\@UEAAXXZ
     */
    MCVAPI void onBaseGamePackDownloadComplete(); // NOLINT
    /**
     * @symbol ?onFullPackStackInvalid\@ResourcePackListener\@\@UEAAXXZ
     */
    MCVAPI void onFullPackStackInvalid(); // NOLINT
    /**
     * @symbol ?onLanguageSubpacksChanged\@ResourcePackListener\@\@UEAAXXZ
     */
    MCVAPI void onLanguageSubpacksChanged(); // NOLINT
    /**
     * @symbol ?onResourceManagerDestroyed\@ResourcePackListener\@\@UEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCVAPI void onResourceManagerDestroyed(class ResourcePackManager&); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackListener(); // NOLINT
#endif
};
