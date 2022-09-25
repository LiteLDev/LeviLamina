/**
 * @file  ResourcePackListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackListener.
 *
 */
class ResourcePackListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKLISTENER
public:
    class ResourcePackListener& operator=(class ResourcePackListener const &) = delete;
    ResourcePackListener(class ResourcePackListener const &) = delete;
    ResourcePackListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKLISTENER
    /**
     * @hash   -2112513848
     * @symbol ?onBaseGamePackDownloadComplete@ResourcePackListener@@UEAAXXZ
     */
    MCVAPI void onBaseGamePackDownloadComplete();
    /**
     * @hash   -1193187166
     * @symbol ?onFullPackStackInvalid@ResourcePackListener@@UEAAXXZ
     */
    MCVAPI void onFullPackStackInvalid();
    /**
     * @hash   589889167
     * @symbol ?onLanguageSubpacksChanged@ResourcePackListener@@UEAAXXZ
     */
    MCVAPI void onLanguageSubpacksChanged();
    /**
     * @hash   -1213750911
     * @symbol ?onResourceManagerDestroyed@ResourcePackListener@@UEAAXAEAVResourcePackManager@@@Z
     */
    MCVAPI void onResourceManagerDestroyed(class ResourcePackManager &);
#endif

};