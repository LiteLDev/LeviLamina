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
    // vIndex: 0
    virtual ~IPathBlockSource() = default;

    // vIndex: 1
    virtual bool isInWater() const = 0;

    // vIndex: 2
    virtual bool isInLava() const = 0;

    // vIndex: 3
    virtual bool isWaterBlock(::BlockPos const&) const = 0;

    // vIndex: 4
    virtual bool isLavaBlock(::BlockPos const&) const = 0;

    // vIndex: 5
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
