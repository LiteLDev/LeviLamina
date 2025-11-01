#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class LeapAtTargetGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mTarget;
    ::ll::TypedStorage<4, 4, float> mYd;
    ::ll::TypedStorage<1, 1, bool> mMustBeOnGround;
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<1, 1, bool> mSetPersistent;
    // NOLINTEND

public:
    // prevent constructor by default
    LeapAtTargetGoal& operator=(LeapAtTargetGoal const&);
    LeapAtTargetGoal(LeapAtTargetGoal const&);
    LeapAtTargetGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~LeapAtTargetGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
