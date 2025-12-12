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
    virtual ~RamGoalItemDropperInterface() = default;

    virtual void tryDropHorn(::Vec3) const = 0;

    virtual void checkForHornDropOnCollision(::Vec3) = 0;

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
