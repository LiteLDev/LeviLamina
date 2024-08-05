#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class VegetationPatchFeature : public ::IFeature {
public:
    // prevent constructor by default
    VegetationPatchFeature& operator=(VegetationPatchFeature const&);
    VegetationPatchFeature(VegetationPatchFeature const&);
    VegetationPatchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VegetationPatchFeature() = default;

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
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI& target, class BlockPos const& pos, uchar direction) const;

    MCAPI std::vector<class BlockPos>
    _placeGroundPatch(class IBlockWorldGenAPI& target, class Random& random, class BlockPos const& origin, int, int)
        const;

    // NOLINTEND
};
