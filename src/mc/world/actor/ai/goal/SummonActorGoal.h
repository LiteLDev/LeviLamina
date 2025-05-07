#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
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
    ::ll::TypedStorage<8, 8, ::Mob&>                            mCaster;
    ::ll::TypedStorage<8, 24, ::std::vector<::SummonSpellData>> mSpells;
    ::ll::TypedStorage<4, 4, int>                               mCurrentTick;
    ::ll::TypedStorage<4, 4, int>                               mCastTicksRemaining;
    ::ll::TypedStorage<4, 4, int>                               mCurrentSpellIndex;
    ::ll::TypedStorage<4, 4, int>                               mCurrentSpellStage;
    ::ll::TypedStorage<4, 4, int>                               mCurrentSummonCount;
    ::ll::TypedStorage<8, 8, uint64>                            mCooldownStopTick;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mTargetPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mCasterPos;
    // NOLINTEND

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
    MCNAPI void
    _createSpellEntity(float x, float z, float minY, float maxY, float lifespan, int summonType, ::ActorDefinitionIdentifier summonEvent, ::std::string const&)
        const;

    MCNAPI int _selectBestSpell(::Actor& target) const;
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
