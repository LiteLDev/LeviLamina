#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyTreeFeature {
public:
    // LegacyTreeFeature inner types declare
    // clang-format off

    // clang-format on

    // LegacyTreeFeature inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYTREEFEATURE
public:
    LegacyTreeFeature& operator=(LegacyTreeFeature const&) = delete;
    LegacyTreeFeature(LegacyTreeFeature const&)            = delete;
    LegacyTreeFeature()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@LegacyTreeFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0LegacyTreeFeature\@\@QEAA\@W4Type\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyTreeFeature(enum class LegacyTreeFeature::Type, class FeatureRegistry&);
};
