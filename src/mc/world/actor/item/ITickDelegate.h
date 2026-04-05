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
    virtual ~ITickDelegate() = default;

    virtual void onLand(::FallingBlock const& block, ::IBlockSource& region, ::BlockPos const& pos) = 0;

    virtual void breakBlock(::FallingBlockActor& fallingBlock) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
