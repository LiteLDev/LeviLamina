#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RectLayoutFeature {
public:
    // RectLayoutFeature inner types declare
    // clang-format off
    struct FeatureArea;
    // clang-format on

    // RectLayoutFeature inner types define
    struct FeatureArea {

    public:
        // prevent constructor by default
        FeatureArea& operator=(FeatureArea const&) = delete;
        FeatureArea(FeatureArea const&)            = delete;
        FeatureArea()                              = delete;
    };

public:
    // prevent constructor by default
    RectLayoutFeature& operator=(RectLayoutFeature const&) = delete;
    RectLayoutFeature(RectLayoutFeature const&)            = delete;
    RectLayoutFeature()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?place\@RectLayoutFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const; // NOLINT

    // private:
    /**
     * @symbol
     * ?_tryPlaceFeature\@RectLayoutFeature\@\@AEBA?AV?$optional\@UFeatureArea\@RectLayoutFeature\@\@\@std\@\@AEBVVec2\@\@HAEBV?$array\@V?$array\@E$0BA\@\@std\@\@$0BA\@\@3\@\@Z
     */
    MCAPI class std::optional<struct RectLayoutFeature::FeatureArea>
    _tryPlaceFeature(class Vec2 const&, int, class std::array<class std::array<unsigned char, 16>, 16> const&)
        const; // NOLINT

private:
};
