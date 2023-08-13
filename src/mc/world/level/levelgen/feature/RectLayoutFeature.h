#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class RectLayoutFeature : public ::IFeature {
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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?place\@RectLayoutFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    /**
     * @vftbl 2
     * @symbol
     * ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_tryPlaceFeature\@RectLayoutFeature\@\@AEBA?AV?$optional\@UFeatureArea\@RectLayoutFeature\@\@\@std\@\@AEBVVec2\@\@HAEBV?$array\@V?$array\@E$0BA\@\@std\@\@$0BA\@\@3\@\@Z
     */
    MCAPI std::optional<struct RectLayoutFeature::FeatureArea>
          _tryPlaceFeature(class Vec2 const&, int, std::array<std::array<unsigned char, 16>, 16> const&) const;
    // NOLINTEND
};
