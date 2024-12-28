#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class Mob;
// clang-format on

class NapGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb23e58;
    ::ll::UntypedStorage<8, 8>  mUnk25817f;
    ::ll::UntypedStorage<8, 8>  mUnk9139a1;
    ::ll::UntypedStorage<1, 1>  mUnk1b9754;
    ::ll::UntypedStorage<4, 4>  mUnk3f6f7b;
    ::ll::UntypedStorage<4, 4>  mUnkaf9fae;
    ::ll::UntypedStorage<4, 12> mUnk3a2039;
    ::ll::UntypedStorage<8, 64> mUnk695ccc;
    ::ll::UntypedStorage<8, 64> mUnka070a1;
    // NOLINTEND

public:
    // prevent constructor by default
    NapGoal& operator=(NapGoal const&);
    NapGoal(NapGoal const&);
    NapGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~NapGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NapGoal(
        ::Mob&                    mob,
        float                     cooldownTimeMin,
        float                     cooldownTimeMax,
        float                     detectMobDistXZ,
        float                     detectMobDistY,
        ::ActorFilterGroup const& canNapFilters,
        ::ActorFilterGroup const& wakeMobExceptions
    );

    MCAPI bool _detectsMobs() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& MOB_DETECT_TIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Mob&                    mob,
        float                     cooldownTimeMin,
        float                     cooldownTimeMax,
        float                     detectMobDistXZ,
        float                     detectMobDistY,
        ::ActorFilterGroup const& canNapFilters,
        ::ActorFilterGroup const& wakeMobExceptions
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canContinueToUse();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
