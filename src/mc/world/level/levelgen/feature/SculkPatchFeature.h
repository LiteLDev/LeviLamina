#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SculkPatchFeature : public ::IFeature {
public:
    // prevent constructor by default
    SculkPatchFeature& operator=(SculkPatchFeature const&);
    SculkPatchFeature(SculkPatchFeature const&);
    SculkPatchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkPatchFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos>
    place$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // NOLINTEND
};
