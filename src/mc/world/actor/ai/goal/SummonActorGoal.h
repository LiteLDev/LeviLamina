#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
struct ActorDefinitionIdentifier;
struct SummonSpellData;
// clang-format on

class SummonActorGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb28d85;
    ::ll::UntypedStorage<8, 24> mUnkd143ea;
    ::ll::UntypedStorage<4, 4>  mUnk8f7480;
    ::ll::UntypedStorage<4, 4>  mUnk805e10;
    ::ll::UntypedStorage<4, 4>  mUnkf29a82;
    ::ll::UntypedStorage<4, 4>  mUnke3bf05;
    ::ll::UntypedStorage<4, 4>  mUnk26f7b2;
    ::ll::UntypedStorage<8, 8>  mUnk915b14;
    ::ll::UntypedStorage<4, 12> mUnk22a024;
    ::ll::UntypedStorage<4, 12> mUnkc66e0d;
    // NOLINTEND

public:
    // prevent constructor by default
    SummonActorGoal& operator=(SummonActorGoal const&);
    SummonActorGoal(SummonActorGoal const&);
    SummonActorGoal();

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
    virtual ~SummonActorGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SummonActorGoal(::Mob& caster, ::std::vector<::SummonSpellData> const& spellTypes);

    MCAPI void _createSpellEntity(
        float x,
        float z,
        float minY,
        float maxY,
        float,
        int                         lifespan,
        ::ActorDefinitionIdentifier summonType,
        ::std::string const&        summonEvent
    ) const;

    MCAPI int _selectBestSpell(::Actor& target) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& caster, ::std::vector<::SummonSpellData> const& spellTypes);
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
