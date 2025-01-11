#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SleepGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf6df97;
    ::ll::UntypedStorage<4, 40> mUnk29e565;
    ::ll::UntypedStorage<4, 12> mUnkf54053;
    ::ll::UntypedStorage<4, 12> mUnkbc004b;
    ::ll::UntypedStorage<4, 12> mUnkdbcb99;
    ::ll::UntypedStorage<4, 12> mUnkc1740b;
    ::ll::UntypedStorage<4, 12> mUnkbf7052;
    ::ll::UntypedStorage<4, 4>  mUnk559658;
    ::ll::UntypedStorage<4, 4>  mUnk9cc626;
    ::ll::UntypedStorage<4, 4>  mUnka993fb;
    ::ll::UntypedStorage<4, 4>  mUnk4b60d8;
    ::ll::UntypedStorage<4, 4>  mUnk7f22a4;
    ::ll::UntypedStorage<1, 1>  mUnkd6a436;
    ::ll::UntypedStorage<8, 8>  mUnkfad98f;
    ::ll::UntypedStorage<8, 8>  mUnk73dba8;
    ::ll::UntypedStorage<1, 1>  mUnk6e59b5;
    ::ll::UntypedStorage<1, 1>  mUnkab98bf;
    // NOLINTEND

public:
    // prevent constructor by default
    SleepGoal& operator=(SleepGoal const&);
    SleepGoal(SleepGoal const&);
    SleepGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 16
    virtual uint64 _getRepathTime() const /*override*/;

    // vIndex: 0
    virtual ~SleepGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SleepGoal(
        ::Mob& mob,
        float  walkSpeed,
        float  sleepColliderHeight,
        float  sleepColliderWidth,
        bool   canSleepWhileRiding,
        float  sleepYOffset,
        int    cooldown,
        float  cooldownTimeout
    );

    MCAPI void _wakeUp();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob& mob,
        float  walkSpeed,
        float  sleepColliderHeight,
        float  sleepColliderWidth,
        bool   canSleepWhileRiding,
        float  sleepYOffset,
        int    cooldown,
        float  cooldownTimeout
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCFOLD uint64 $_getRepathTime() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
