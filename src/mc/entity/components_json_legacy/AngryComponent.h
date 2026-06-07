#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class AngryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 mDuration;
    ::ll::TypedStorage<1, 1, bool>                mHasTicked;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastAnger;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastOnAttack;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastOnBeingAttacked;
    ::ll::TypedStorage<1, 1, bool>                mBroadcastAngerWhenDying;
    ::ll::TypedStorage<4, 4, int>                 mBroadcastRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mBroadcastFilter;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mSubjectFilter;
    ::ll::TypedStorage<8, 8, ::Tick>              mNextSoundEventTick;
    // NOLINTEND

public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AngryComponent();

    MCAPI AngryComponent(::AngryComponent&&);

    MCAPI AngryComponent(::AngryComponent const&);

    MCAPI bool canGetAngry(::Mob& owner, ::Mob* testMob, ::Actor* target, bool allowInvulnerable, bool mustSee) const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent const getAngrySound(::Mob const& mob) const;

    MCFOLD bool getBroadcastAnger() const;

    MCFOLD bool getBroadcastAngerOnAttack() const;

    MCFOLD bool getBroadcastAngerOnBeingAttacked() const;

    MCFOLD bool getBroadcastAngerWhenDying() const;

    MCFOLD ::ActorFilterGroup const& getBroadcastFilter() const;

    MCFOLD int getBroadcastRange() const;

    MCFOLD bool getHasTicked() const;

    MCFOLD ::Tick const getNextSoundEventTick() const;

    MCAPI void restartTimer(::Mob& owner);

    MCAPI void setAngry(::Mob& owner, bool value);

    MCAPI void setHasTicked(bool hasTicked);

    MCAPI void setNextSoundEventTick(::Mob const& mob);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(::AngryComponent&&);

    MCFOLD void* $ctor(::AngryComponent const&);
    // NOLINTEND
};
