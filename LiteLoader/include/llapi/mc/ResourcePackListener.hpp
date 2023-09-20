/**
 * @file  ResourcePackListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onActiveResourcePacksChanged\@VanillaWorldChecker\@DebugEndPoint\@\@UEAAXAEAVResourcePackManager\@\@\@Z
     */
    virtual void onActiveResourcePacksChanged(class ResourcePackManager &) = 0;
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?onResourceManagerDestroyed\@ResourcePackListener\@\@UEAAXAEAVResourcePackManager\@\@\@Z
     */
    virtual void onResourceManagerDestroyed(class ResourcePackManager &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RESOURCEPACKLISTENER
    /**
     * @symbol ?onBaseGamePackDownloadComplete\@ResourcePackListener\@\@UEAAXXZ
     */
    MCVAPI void onBaseGamePackDownloadComplete();
    /**
     * @symbol ?onFullPackStackInvalid\@ResourcePackListener\@\@UEAAXXZ
     */
    MCVAPI void onFullPackStackInvalid();
    /**
     * @symbol ?onLanguageSubpacksChanged\@ResourcePackListener\@\@UEAAXXZ
     */
    MCVAPI void onLanguageSubpacksChanged();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ResourcePackListener();
#endif

};
