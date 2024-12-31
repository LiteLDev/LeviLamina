#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
struct SendEventData;
// clang-format on

class SendEventGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2d6c75;
    ::ll::UntypedStorage<8, 40> mUnk61ca85;
    ::ll::UntypedStorage<8, 24> mUnk1f9da1;
    ::ll::UntypedStorage<4, 4>  mUnkd1efb7;
    ::ll::UntypedStorage<4, 4>  mUnkdf07dc;
    ::ll::UntypedStorage<4, 4>  mUnke7a4b6;
    ::ll::UntypedStorage<4, 4>  mUnk39fc55;
    ::ll::UntypedStorage<8, 8>  mUnk84812a;
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
    virtual ~SendEventGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SendEventGoal(::Mob& caster, ::std::vector<::SendEventData> const& spellTypes);

    MCAPI int _selectBestSpell();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& caster, ::std::vector<::SendEventData> const& spellTypes);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
