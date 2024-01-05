#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelSoundEvent.h"

class AngryComponent {
public:
    // prevent constructor by default
    AngryComponent& operator=(AngryComponent const&);
    AngryComponent(AngryComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0AngryComponent@@QEAA@XZ
    MCAPI AngryComponent();

    // symbol: ??0AngryComponent@@QEAA@$$QEAV0@@Z
    MCAPI AngryComponent(class AngryComponent&&);

    // symbol: ?canGetAngry@AngryComponent@@QEBA_NAEAVMob@@PEAV2@PEAVActor@@_N3@Z
    MCAPI bool
    canGetAngry(class Mob& owner, class Mob* testMob, class Actor* target, bool allowInvulnerable, bool mustSee) const;

    // symbol: ?getAngrySound@AngryComponent@@QEBA?BW4LevelSoundEvent@Legacy@Puv@@AEBVMob@@@Z
    MCAPI ::Puv::Legacy::LevelSoundEvent const getAngrySound(class Mob const& mob) const;

    // symbol: ?getBroadcastAnger@AngryComponent@@QEBA_NXZ
    MCAPI bool getBroadcastAnger() const;

    // symbol: ?getBroadcastAngerOnAttack@AngryComponent@@QEBA_NXZ
    MCAPI bool getBroadcastAngerOnAttack() const;

    // symbol: ?getBroadcastAngerOnBeingAttacked@AngryComponent@@QEBA_NXZ
    MCAPI bool getBroadcastAngerOnBeingAttacked() const;

    // symbol: ?getBroadcastFilter@AngryComponent@@QEBAAEBVActorFilterGroup@@XZ
    MCAPI class ActorFilterGroup const& getBroadcastFilter() const;

    // symbol: ?getBroadcastRange@AngryComponent@@QEBAHXZ
    MCAPI int getBroadcastRange() const;

    // symbol: ?getHasTicked@AngryComponent@@QEBA_NXZ
    MCAPI bool getHasTicked() const;

    // symbol: ?getNextSoundEventTick@AngryComponent@@QEBA?BUTick@@XZ
    MCAPI struct Tick const getNextSoundEventTick() const;

    // symbol: ??4AngryComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class AngryComponent& operator=(class AngryComponent&&);

    // symbol: ?restartTimer@AngryComponent@@QEAAXAEAVMob@@@Z
    MCAPI void restartTimer(class Mob& owner);

    // symbol: ?setAngry@AngryComponent@@QEAAXAEAVMob@@_N@Z
    MCAPI void setAngry(class Mob& owner, bool value);

    // symbol: ?setHasTicked@AngryComponent@@QEAAX_N@Z
    MCAPI void setHasTicked(bool hasTicked);

    // symbol: ?setNextSoundEventTick@AngryComponent@@QEAAXAEBVMob@@@Z
    MCAPI void setNextSoundEventTick(class Mob const& mob);

    // symbol: ??1AngryComponent@@QEAA@XZ
    MCAPI ~AngryComponent();

    // NOLINTEND
};
