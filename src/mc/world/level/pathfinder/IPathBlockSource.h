#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class IPathBlockSource {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPathBlockSource() = default;

    virtual bool isInWater() const = 0;

    virtual bool isInLava() const = 0;

    virtual bool isWaterBlock(::BlockPos const&) const = 0;

    virtual bool isLavaBlock(::BlockPos const&) const = 0;

    virtual bool isSolidBlock(::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
