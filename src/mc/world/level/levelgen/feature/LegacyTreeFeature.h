#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyTreeFeature {
public:
    // LegacyTreeFeature inner types define
    enum class Type {};

public:
    // prevent constructor by default
    LegacyTreeFeature& operator=(LegacyTreeFeature const&) = delete;
    LegacyTreeFeature(LegacyTreeFeature const&)            = delete;
    LegacyTreeFeature()                                    = delete;

public:
    // NOLINTBEGIN
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
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @symbol ??0LegacyTreeFeature\@\@QEAA\@W4Type\@0\@AEAVFeatureRegistry\@\@\@Z
     */
    MCAPI LegacyTreeFeature(enum class LegacyTreeFeature::Type, class FeatureRegistry&);
    // NOLINTEND
};
