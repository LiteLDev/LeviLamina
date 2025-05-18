#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct SendEventData;
// clang-format on

class SendEventGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                          mCaster;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>            mTarget;
    ::ll::TypedStorage<8, 24, ::std::vector<::SendEventData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                             mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                             mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                             mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                             mCurrentSpellStage;
    ::ll::TypedStorage<8, 8, uint64>                          mCooldownStopTick;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventGoal& operator=(SendEventGoal const&);
    SendEventGoal(SendEventGoal const&);
    SendEventGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

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

    // vIndex: 0
    virtual ~SendEventGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _selectBestSpell();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
