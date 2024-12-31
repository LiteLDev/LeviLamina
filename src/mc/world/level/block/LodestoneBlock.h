#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class BlockPos;
class BlockSource;
class LodestoneBlockActor;
class Material;
// clang-format on

class LodestoneBlock : public ::ActorBlockBase<::BlockLegacy> {
public:
    // prevent constructor by default
    LodestoneBlock& operator=(LodestoneBlock const&);
    LodestoneBlock(LodestoneBlock const&);
    LodestoneBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LodestoneBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LodestoneBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::LodestoneBlockActor* getBlockActor(::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
