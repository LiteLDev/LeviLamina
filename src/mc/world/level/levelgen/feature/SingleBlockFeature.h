#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

class SingleBlockFeature : public ::IFeature {
public:
    // prevent constructor by default
    SingleBlockFeature& operator=(SingleBlockFeature const&);
    SingleBlockFeature(SingleBlockFeature const&);
    SingleBlockFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SingleBlockFeature() = default;

    // vIndex: 1
    virtual std::optional<class BlockPos>
    place(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&) const;

    // vIndex: 2
    virtual bool isValidPlacement(std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Block const* _mayAttach(class IBlockWorldGenAPI& target, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isValidPlacement$(std::string const&);

    MCAPI std::optional<class BlockPos>
          place$(class IBlockWorldGenAPI& target, class BlockPos const& pos, class Random&, class RenderParams&) const;

    // NOLINTEND
};
