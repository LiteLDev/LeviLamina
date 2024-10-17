#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class GeodeFeature : public ::IFeature {
public:
    // prevent constructor by default
    GeodeFeature& operator=(GeodeFeature const&);
    GeodeFeature(GeodeFeature const&);
    GeodeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GeodeFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    origin,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    MCAPI static bool canSupportGeode(class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    origin,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
