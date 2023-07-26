#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldTemplatePackManifest {

public:
    // prevent constructor by default
    WorldTemplatePackManifest& operator=(WorldTemplatePackManifest const&) = delete;
    WorldTemplatePackManifest(WorldTemplatePackManifest const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?clone\@WorldTemplatePackManifest\@\@UEBA?AV?$unique_ptr\@VPackManifest\@\@U?$default_delete\@VPackManifest\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class PackManifest> clone() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WORLDTEMPLATEPACKMANIFEST
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WorldTemplatePackManifest(); // NOLINT
#endif
    /**
     * @symbol ??0WorldTemplatePackManifest\@\@QEAA\@XZ
     */
    MCAPI WorldTemplatePackManifest(); // NOLINT
    /**
     * @symbol ?getGameType\@WorldTemplatePackManifest\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const; // NOLINT
};
