#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/FurnaceBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class BlastFurnaceBlockActor : public ::FurnaceBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 26
    virtual ::std::string getName() const /*override*/;

    // vIndex: 0
    virtual ~BlastFurnaceBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlastFurnaceBlockActor(::BlockPos const& blockPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& blockPos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForBlockActor();

    MCAPI static void** $vftableForContainer();
    // NOLINTEND
};
