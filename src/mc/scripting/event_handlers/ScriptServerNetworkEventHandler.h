#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/ServerNetworkEventHandler.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraftNet { class IScriptNetworkBeforeEvents; }
// clang-format on

class ScriptServerNetworkEventHandler
: public ::EventHandlerDispatcher<::ServerNetworkEventHandler>,
  public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents>,
  public ::ScriptEventHandler<::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ChatEvent& chatEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::IncomingPacketEvent& packetEvent) /*override*/;

    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::OutgoingPacketEvent& packetEvent) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ChatEvent& chatEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::IncomingPacketEvent& packetEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::OutgoingPacketEvent& packetEvent);


    // NOLINTEND
};
