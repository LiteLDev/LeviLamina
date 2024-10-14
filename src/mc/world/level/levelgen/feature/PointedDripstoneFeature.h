#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class PointedDripstoneFeature : public ::IFeature {
public:
    // prevent constructor by default
    PointedDripstoneFeature& operator=(PointedDripstoneFeature const&);
    PointedDripstoneFeature(PointedDripstoneFeature const&);
    PointedDripstoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PointedDripstoneFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _createBaseDripstonePatch(class IBlockWorldGenAPI& target, class Random& random, class BlockPos const& rootPos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos>
    place$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random& random, class RenderParams&) const;

    // NOLINTEND
};
