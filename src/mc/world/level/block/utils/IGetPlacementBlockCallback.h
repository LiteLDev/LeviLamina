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
    IGetPlacementBlockCallback& operator=(IGetPlacementBlockCallback const&) = delete;
    IGetPlacementBlockCallback(IGetPlacementBlockCallback const&)            = delete;
    IGetPlacementBlockCallback()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?getPlacementBlock\@UpdateFacingGetPlacementBlockCallback\@PlacementDirection\@BlockTrait\@\@UEBA?AV?$not_null\@PEBVBlock\@\@\@gsl\@\@V45\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class gsl::not_null<class Block const*> getPlacementBlock(
        class gsl::not_null<class Block const*>,
        class Actor const&,
        class BlockPos const&,
        unsigned char,
        class Vec3 const&,
        int
    ) const = 0;
    // NOLINTEND
};

}; // namespace BlockTrait
