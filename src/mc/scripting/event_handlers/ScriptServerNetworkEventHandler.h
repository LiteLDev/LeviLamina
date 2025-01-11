#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/EventHandlerDispatcher.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/scripting/event_handlers/ScriptEventHandler.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkEventHandler;
struct ChatEvent;
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace ScriptModuleMinecraftNet { class IScriptNetworkBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptServerNetworkEventHandler
: public ::EventHandlerDispatcher<::ServerNetworkEventHandler>,
  public ::ScriptEventHandler<::ScriptModuleMinecraft::IScriptWorldBeforeEvents>,
  public ::ScriptEventHandler<::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::ChatEvent& chatEvent) /*override*/;

    // vIndex: 3
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::IncomingPacketEvent& packetEvent) /*override*/;

    // vIndex: 2
    virtual ::GameplayHandlerResult<::CoordinatorResult> handleEvent(::OutgoingPacketEvent& packetEvent) /*override*/;

    // vIndex: 0
    virtual ~ScriptServerNetworkEventHandler() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _handleChat(
        ::ChatEvent&                                                                      chatEvent,
        ::Scripting::WeakLifetimeScope const&                                             scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraft::IScriptWorldBeforeEvents> eventHandler
    ) const;

    MCAPI bool _handleIncomingPacket(
        ::IncomingPacketEvent&                                                                 packetEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> eventHandler
    ) const;

    MCAPI bool _handleOutgoingPacket(
        ::OutgoingPacketEvent&                                                                 packetEvent,
        ::Scripting::WeakLifetimeScope const&                                                  scope,
        ::Scripting::TypedObjectHandle<::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents> eventHandler
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::ChatEvent& chatEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::IncomingPacketEvent& packetEvent);

    MCAPI ::GameplayHandlerResult<::CoordinatorResult> $handleEvent(::OutgoingPacketEvent& packetEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
