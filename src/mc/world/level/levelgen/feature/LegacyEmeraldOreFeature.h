#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyEmeraldOreFeature : public ::Feature {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYEMERALDOREFEATURE
public:
    LegacyEmeraldOreFeature& operator=(LegacyEmeraldOreFeature const&) = delete;
    LegacyEmeraldOreFeature(LegacyEmeraldOreFeature const&)            = delete;
    LegacyEmeraldOreFeature()                                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyEmeraldOreFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
};
