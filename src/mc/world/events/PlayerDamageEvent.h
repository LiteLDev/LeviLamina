#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

struct PlayerDamageEvent {
public:
    // prevent constructor by default
    PlayerDamageEvent& operator=(PlayerDamageEvent const&);
    PlayerDamageEvent(PlayerDamageEvent const&);
    PlayerDamageEvent();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0PlayerDamageEvent@@QEAA@V?$WeakRef@VEntityContext@@@@V?$unique_ptr@VActorDamageSource@@U?$default_delete@VActorDamageSource@@@std@@@std@@@Z
    MCAPI PlayerDamageEvent(class WeakRef<class EntityContext>, std::unique_ptr<class ActorDamageSource>);

    // symbol: ??1PlayerDamageEvent@@QEAA@XZ
    MCAPI ~PlayerDamageEvent();

    // NOLINTEND
};
