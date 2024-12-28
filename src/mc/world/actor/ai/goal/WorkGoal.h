#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/MoveToPOIGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class WorkGoal : public ::MoveToPOIGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk1c844c;
    ::ll::UntypedStorage<8, 184> mUnkd525e0;
    ::ll::UntypedStorage<4, 4>   mUnk90fd15;
    ::ll::UntypedStorage<4, 4>   mUnkd820c4;
    ::ll::UntypedStorage<4, 4>   mUnk216e37;
    ::ll::UntypedStorage<4, 4>   mUnk64c332;
    ::ll::UntypedStorage<1, 1>   mUnk5f6614;
    ::ll::UntypedStorage<4, 4>   mUnk57c6cd;
    ::ll::UntypedStorage<8, 104> mUnke5cf53;
    ::ll::UntypedStorage<1, 1>   mUnk6c9449;
    ::ll::UntypedStorage<4, 4>   mUnk18f6ad;
    // NOLINTEND

public:
    // prevent constructor by default
    WorkGoal& operator=(WorkGoal const&);
    WorkGoal(WorkGoal const&);
    WorkGoal();

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

    // vIndex: 18
    virtual void useWorkstation();

    // vIndex: 0
    virtual ~WorkGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorkGoal(::Mob& mob);

    MCAPI bool _isInsideOrIsNotRaining();

    MCAPI void playPOISoundEvent() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& RAIN_CHECK_MAX_COOLDOWN();

    MCAPI static int const& WORK_TIMESTAMP_UPDATE_INVERVAL();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $useWorkstation();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
