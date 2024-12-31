#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct IncomingPacketEvent;
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraftNet { struct ScriptPacketReceiveBeforeEvent; }
namespace ScriptModuleMinecraftNet { struct ScriptPacketSendBeforeEvent; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class IScriptNetworkBeforeEvents {
public:
    // prevent constructor by default
    IScriptNetworkBeforeEvents& operator=(IScriptNetworkBeforeEvents const&);
    IScriptNetworkBeforeEvents(IScriptNetworkBeforeEvents const&);
    IScriptNetworkBeforeEvents();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptNetworkBeforeEvents() = default;

    // vIndex: 1
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    onBeforePacketReceive(::IncomingPacketEvent const&) = 0;

    // vIndex: 2
    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    onBeforePacketSend(::OutgoingPacketEvent const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
