#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class OcelotAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk650508;
    ::ll::UntypedStorage<4, 4> mUnka99c90;
    ::ll::UntypedStorage<4, 4> mUnk500ba0;
    ::ll::UntypedStorage<4, 4> mUnk908c2c;
    ::ll::UntypedStorage<4, 4> mUnk93d2e5;
    ::ll::UntypedStorage<4, 4> mUnk950de3;
    ::ll::UntypedStorage<4, 4> mUnk5e97f7;
    ::ll::UntypedStorage<4, 4> mUnk192d6f;
    ::ll::UntypedStorage<4, 4> mUnk8d67a7;
    ::ll::UntypedStorage<4, 4> mUnk519fe3;
    ::ll::UntypedStorage<4, 4> mUnk7fa0d3;
    ::ll::UntypedStorage<4, 4> mUnkcefd78;
    // NOLINTEND

public:
    // prevent constructor by default
    OcelotAttackGoal& operator=(OcelotAttackGoal const&);
    OcelotAttackGoal(OcelotAttackGoal const&);
    OcelotAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~OcelotAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OcelotAttackGoal(::Mob& mob);
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
