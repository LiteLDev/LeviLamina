#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"

class AngryComponent {
public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&);
    AngryComponent(AngryComponent const&);

public:
    // NOLINTBEGIN
    MCAPI AngryComponent();

    MCAPI AngryComponent(class AngryComponent&&);

    MCAPI bool
    canGetAngry(class Mob& owner, class Mob* testMob, class Actor* target, bool allowInvulnerable, bool mustSee) const;

    MCAPI ::Puv::Legacy::LevelSoundEvent const getAngrySound(class Mob const& mob) const;

    MCAPI bool getBroadcastAnger() const;

    MCAPI bool getBroadcastAngerOnAttack() const;

    MCAPI bool getBroadcastAngerOnBeingAttacked() const;

    MCAPI class ActorFilterGroup const& getBroadcastFilter() const;

    MCAPI int getBroadcastRange() const;

    MCAPI bool getHasTicked() const;

    MCAPI struct Tick const getNextSoundEventTick() const;

    MCAPI class AngryComponent& operator=(class AngryComponent&&);

    MCAPI void restartTimer(class Mob& owner);

    MCAPI void setAngry(class Mob& owner, bool value);

    MCAPI void setHasTicked(bool hasTicked);

    MCAPI void setNextSoundEventTick(class Mob const& mob);

    MCAPI ~AngryComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
