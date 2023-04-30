/**
 * @file  WorldTemplatePackManifest.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldTemplatePackManifest.
 *
 */
class WorldTemplatePackManifest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDTEMPLATEPACKMANIFEST
public:
    class WorldTemplatePackManifest& operator=(class WorldTemplatePackManifest const &) = delete;
    WorldTemplatePackManifest(class WorldTemplatePackManifest const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clone\@WorldTemplatePackManifest\@\@UEBA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEPACKMANIFEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldTemplatePackManifest();
#endif
    /**
     * @symbol ??0WorldTemplatePackManifest\@\@QEAA\@XZ
     */
    MCAPI WorldTemplatePackManifest();
    /**
     * @symbol ?getGameType\@WorldTemplatePackManifest\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;

};
