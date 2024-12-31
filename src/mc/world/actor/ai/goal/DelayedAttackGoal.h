#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MeleeAttackGoal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseGameVersion;
class Mob;
// clang-format on

class DelayedAttackGoal : public ::MeleeAttackGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd1bfcf;
    ::ll::UntypedStorage<4, 4> mUnk411d70;
    ::ll::UntypedStorage<4, 4> mUnkf4e0a0;
    ::ll::UntypedStorage<4, 4> mUnk2ad552;
    ::ll::UntypedStorage<4, 4> mUnk10be41;
    // NOLINTEND

public:
    // prevent constructor by default
    DelayedAttackGoal& operator=(DelayedAttackGoal const&);
    DelayedAttackGoal(DelayedAttackGoal const&);
    DelayedAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~DelayedAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DelayedAttackGoal(::Mob& mob);

    MCAPI void _attemptStartAttacking(::Actor* target) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isTargetInLineOfSightLegacy(::Mob const& mob, ::Actor const& target);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& mMinLineOfSightFixVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
