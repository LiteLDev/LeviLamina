#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IConstBlockSource;
class Vec3;
// clang-format on

struct UpdateEntityAfterFallOnInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateEntityAfterFallOnInterface() = default;

    // vIndex: 1
    virtual ::Vec3& getPosDeltaNonConst() = 0;

    // vIndex: 2
    virtual bool isSneaking() const = 0;

    // vIndex: 3
    virtual void onBounceStarted(::BlockPos const&, ::Block const&) = 0;

    // vIndex: 4
    virtual ::Vec3 getPosition() const = 0;

    // vIndex: 5
    virtual ::IConstBlockSource const& getDimensionBlockSource() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
