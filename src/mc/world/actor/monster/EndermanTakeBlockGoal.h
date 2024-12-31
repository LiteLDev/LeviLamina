#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class EnderMan;
class Vec3;
// clang-format on

class EndermanTakeBlockGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2848f9;
    // NOLINTEND

public:
    // prevent constructor by default
    EndermanTakeBlockGoal& operator=(EndermanTakeBlockGoal const&);
    EndermanTakeBlockGoal(EndermanTakeBlockGoal const&);
    EndermanTakeBlockGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 10
    virtual ::BlockPos getRandomNearbyBlockPos(::Vec3 const& centerPos) const;

    // vIndex: 0
    virtual ~EndermanTakeBlockGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EndermanTakeBlockGoal(::EnderMan& enderman);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EnderMan& enderman);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI ::BlockPos $getRandomNearbyBlockPos(::Vec3 const& centerPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
