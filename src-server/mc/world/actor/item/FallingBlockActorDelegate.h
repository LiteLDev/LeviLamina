#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/ITickDelegate.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

class FallingBlockActorDelegate : public ::ITickDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void onLand(::FallingBlock const&, ::IBlockSource&, ::BlockPos const&) /*override*/;

    // vIndex: 2
    virtual void breakBlock(::FallingBlockActor&) /*override*/;

    // vIndex: 0
    virtual ~FallingBlockActorDelegate() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
