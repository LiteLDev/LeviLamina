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
    ::ll::UntypedStorage<8, 32> mUnkcdc6a8;
    ::ll::UntypedStorage<8, 32> mUnka6ad66;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetworkBeforeEvents& operator=(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents(ScriptNetworkBeforeEvents const&);
    ScriptNetworkBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptNetworkBeforeEvents() /*override*/;

    // vIndex: 1
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    onBeforePacketReceive(::IncomingPacketEvent const& packetEvent) /*override*/;

    // vIndex: 2
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    onBeforePacketSend(::OutgoingPacketEvent const& packetEvent) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptNetworkBeforeEvents(::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&&);

    MCAPI ::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&
    operator=(::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraftNet::ScriptNetworkBeforeEvents&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    $onBeforePacketReceive(::IncomingPacketEvent const& packetEvent);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    $onBeforePacketSend(::OutgoingPacketEvent const& packetEvent);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
