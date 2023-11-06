#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ActorEventListener.h"
#include "mc/world/events/EventResult.h"

class CombatRegenerationListener : public ::ActorEventListener {
public:
    // prevent constructor by default
    CombatRegenerationListener& operator=(CombatRegenerationListener const&);
    CombatRegenerationListener(CombatRegenerationListener const&);
    CombatRegenerationListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~CombatRegenerationListener();

    // vIndex: 1, symbol: ?onEvent@CombatRegenerationListener@@UEAA?AW4EventResult@@AEBUActorNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ActorNotificationEvent const&);

    // NOLINTEND
};
