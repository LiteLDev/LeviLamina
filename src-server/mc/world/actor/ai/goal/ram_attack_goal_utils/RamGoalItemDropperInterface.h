#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalItemDropperInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RamGoalItemDropperInterface() = default;

    // vIndex: 1
    virtual void tryDropHorn(::Vec3) const = 0;

    // vIndex: 2
    virtual void checkForHornDropOnCollision(::Vec3) = 0;

    // vIndex: 3
    virtual void dontDropHorn() = 0;
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

} // namespace RamAttackGoalUtils
