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
    virtual ~UpdateEntityAfterFallOnInterface() = default;

    virtual ::Vec3& getPosDeltaNonConst() = 0;

    virtual bool isSneaking() const = 0;

    virtual void onBounceStarted(::BlockPos const&, ::Block const&) = 0;

    virtual ::Vec3 getPosition() const = 0;

    virtual ::IConstBlockSource const& getDimensionBlockSource() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
