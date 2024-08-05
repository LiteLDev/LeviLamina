#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFeature {
public:
    // prevent constructor by default
    IFeature& operator=(IFeature const&);
    IFeature(IFeature const&);
    IFeature();

public:
    // NOLINTBEGIN
    MCVAPI bool isValidPlacement(std::string const&);

    MCAPI bool setBlockSafe(class IBlockWorldGenAPI&, class BlockPos const&, class Block const&, int) const;

    // NOLINTEND
};
