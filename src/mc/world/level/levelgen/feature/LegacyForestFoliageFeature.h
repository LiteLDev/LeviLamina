#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestFoliageFeature : public ::Feature {
public:
    // LegacyForestFoliageFeature inner types declare
    // clang-format off

    // clang-format on

    // LegacyForestFoliageFeature inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFORESTFOLIAGEFEATURE
public:
    LegacyForestFoliageFeature& operator=(LegacyForestFoliageFeature const&) = delete;
    LegacyForestFoliageFeature(LegacyForestFoliageFeature const&)            = delete;
    LegacyForestFoliageFeature()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol ?place\@LegacyForestFoliageFeature\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;
    /**
     * @symbol ??0LegacyForestFoliageFeature\@\@QEAA\@W4Type\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyForestFoliageFeature(enum class LegacyForestFoliageFeature::Type, class FeatureRegistry&);
};
