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
    // vIndex: 0
    virtual ~RectLayoutFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<struct RectLayoutFeature::FeatureArea> _tryPlaceFeature(
        class Vec2 const&                            areaStartingPoint,
        int                                          featureIndex,
        std::array<std::array<uchar, 16>, 16> const& placementOccupancyGrid
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
