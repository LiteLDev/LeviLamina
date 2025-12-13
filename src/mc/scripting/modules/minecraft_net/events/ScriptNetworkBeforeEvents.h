#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft_net/events/IScriptNetworkBeforeEvents.h"

// auto generated forward declare list
// clang-format off
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraftNet { struct ScriptPacketReceiveBeforeEvent; }
namespace ScriptModuleMinecraftNet { struct ScriptPacketSendBeforeEvent; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptNetworkBeforeEvents
: public ::ScriptModuleMinecraftNet::IScriptNetworkBeforeEvents,
  public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka62ae6;
    ::ll::UntypedStorage<8, 8>  mUnk3f8513;
    ::ll::UntypedStorage<8, 16> mUnk6a86ea;
    ::ll::UntypedStorage<8, 32> mUnk6ff13e;
    ::ll::UntypedStorage<8, 32> mUnka9ad96;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetworkBeforeEvents& operator=(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptNetworkBeforeEvents() /*override*/;

    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    onBeforePacketReceive(::IncomingPacketEvent const& packetEvent) /*override*/;

    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    onBeforePacketSend(::OutgoingPacketEvent const& packetEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetworkBeforeEvents(::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&&);

    MCNAPI ::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&
    operator=(::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    $onBeforePacketReceive(::IncomingPacketEvent const& packetEvent);

    MCNAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    $onBeforePacketSend(::OutgoingPacketEvent const& packetEvent);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
