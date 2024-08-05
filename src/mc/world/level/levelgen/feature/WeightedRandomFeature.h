#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class WeightedRandomFeature : public ::IFeature {
public:
    // prevent constructor by default
    WeightedRandomFeature& operator=(WeightedRandomFeature const&);
    WeightedRandomFeature(WeightedRandomFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeightedRandomFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI WeightedRandomFeature();

    // NOLINTEND
};
