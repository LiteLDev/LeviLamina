#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class NoSurfaceOreFeature : public ::IFeature {
public:
    // prevent constructor by default
    NoSurfaceOreFeature& operator=(NoSurfaceOreFeature const&);
    NoSurfaceOreFeature(NoSurfaceOreFeature const&);
    NoSurfaceOreFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NoSurfaceOreFeature() = default;

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
