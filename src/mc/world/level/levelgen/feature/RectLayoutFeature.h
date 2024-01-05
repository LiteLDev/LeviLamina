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
        FeatureArea& operator=(FeatureArea const&);
        FeatureArea(FeatureArea const&);
        FeatureArea();
    };

public:
    // prevent constructor by default
    RectLayoutFeature& operator=(RectLayoutFeature const&);
    RectLayoutFeature(RectLayoutFeature const&);
    RectLayoutFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RectLayoutFeature@@UEAA@XZ
    virtual ~RectLayoutFeature() = default;

    // vIndex: 1, symbol:
    // ?place@RectLayoutFeature@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@AEAVRenderParams@@@Z
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2, symbol:
    // ?isValidPlacement@IFeature@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_tryPlaceFeature@RectLayoutFeature@@AEBA?AV?$optional@UFeatureArea@RectLayoutFeature@@@std@@AEBVVec2@@HAEBV?$array@V?$array@E$0BA@@std@@$0BA@@3@@Z
    MCAPI std::optional<struct RectLayoutFeature::FeatureArea>
          _tryPlaceFeature(class Vec2 const&, int, std::array<std::array<uchar, 16>, 16> const&) const;

    // NOLINTEND
};
