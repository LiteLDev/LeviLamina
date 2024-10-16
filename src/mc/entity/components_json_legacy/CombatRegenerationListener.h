#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayCorrectionResult.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
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
    // vIndex: 0
    virtual ~CombatRegenerationListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(struct ActorNotificationEvent const& event);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::EventResult onEvent$(struct ActorNotificationEvent const& event);

    // NOLINTEND
};
