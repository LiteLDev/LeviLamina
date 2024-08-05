#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class MultifaceFeature : public ::IFeature {
public:
    // prevent constructor by default
    MultifaceFeature& operator=(MultifaceFeature const&);
    MultifaceFeature(MultifaceFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultifaceFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI&, class BlockPos const& pos, class Random& random, class RenderParams& renderParams)
        const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI MultifaceFeature();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class BlockPos>
    _placeBlockIfPossible(class BlockSource& region, class BlockPos const& pos, class Random& random, std::vector<uchar> const&)
        const;

    MCAPI static std::vector<uchar> _getShuffledDirections(std::vector<uchar> faces);

    // NOLINTEND
};
