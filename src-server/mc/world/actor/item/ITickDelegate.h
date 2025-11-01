#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class FallingBlock;
class FallingBlockActor;
class IBlockSource;
// clang-format on

class ITickDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITickDelegate() = default;

    // vIndex: 1
    virtual void onLand(::FallingBlock const&, ::IBlockSource&, ::BlockPos const&) = 0;

    // vIndex: 2
    virtual void breakBlock(::FallingBlockActor&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
