#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct MessageEvent;
struct ServerNetworkGameplayNotificationEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptServerNetworkEventListener {
public:
    // prevent constructor by default
    ScriptServerNetworkEventListener& operator=(ScriptServerNetworkEventListener const&);
    ScriptServerNetworkEventListener(ScriptServerNetworkEventListener const&);
    ScriptServerNetworkEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptServerNetworkEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const& event);

    // vIndex: 2
    virtual ::EventResult onMessage(struct MessageEvent const& messageEvent);

    // vIndex: 3
    virtual ::EventResult onEvent(struct ChatEvent const& chatEvent);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::EventResult onEvent$(struct ServerNetworkGameplayNotificationEvent const& event);

    MCAPI ::EventResult onEvent$(struct ChatEvent const& chatEvent);

    MCAPI ::EventResult onMessage$(struct MessageEvent const& messageEvent);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
