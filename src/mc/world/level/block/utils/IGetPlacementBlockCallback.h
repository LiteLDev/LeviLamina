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
    // vIndex: 0, symbol: __gen_??1IGetPlacementBlockCallback@BlockTrait@@UEAA@XZ
    virtual ~IGetPlacementBlockCallback() = default;

    // vIndex: 1, symbol:
    // ?getPlacementBlock@UpdateCardinalGetPlacementBlockCallback@PlacementDirection@BlockTrait@@UEBA?AV?$not_null@PEBVBlock@@@gsl@@V45@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual gsl::not_null<class Block const*> getPlacementBlock(
        gsl::not_null<class Block const*>,
        class Actor const&,
        class BlockPos const&,
        uchar,
        class Vec3 const&,
        int
    ) const = 0;

    // NOLINTEND
};

}; // namespace BlockTrait
