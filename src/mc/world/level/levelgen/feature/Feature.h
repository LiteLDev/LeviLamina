#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class Feature : public ::IFeature {
public:
    // prevent constructor by default
    Feature& operator=(Feature const&);
    Feature(Feature const&);
    Feature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Feature();

    // vIndex: 1
    virtual std::optional<class BlockPos> place(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const = 0;

    MCAPI explicit Feature(class Actor* placer);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _placeBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI void _setManuallyPlaced(class Actor* placer);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Actor* placer);

    MCAPI void dtor$();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos> place$(
        class IBlockWorldGenAPI& target,
        class BlockPos const&    pos,
        class Random&            random,
        class RenderParams&      renderParams
    ) const;

    // NOLINTEND
};
