#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class ScatterFeature : public ::IFeature {
public:
    // prevent constructor by default
    ScatterFeature& operator=(ScatterFeature const&);
    ScatterFeature(ScatterFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScatterFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI ScatterFeature();

    // NOLINTEND
};
