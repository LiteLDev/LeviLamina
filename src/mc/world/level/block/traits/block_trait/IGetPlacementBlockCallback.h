#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class Vec3;
// clang-format on

namespace BlockTrait {

class IGetPlacementBlockCallback {
public:
    // prevent constructor by default
    IGetPlacementBlockCallback& operator=(IGetPlacementBlockCallback const&);
    IGetPlacementBlockCallback(IGetPlacementBlockCallback const&);
    IGetPlacementBlockCallback();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGetPlacementBlockCallback() = default;

    // vIndex: 1
    virtual gsl::not_null<class Block const*> getPlacementBlock(
        gsl::not_null<class Block const*> block,
        class Actor const&                by,
        class BlockPos const&,
        uchar,
        class Vec3 const&,
        int
    ) const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace BlockTrait
