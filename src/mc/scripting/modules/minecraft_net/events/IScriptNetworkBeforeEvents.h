#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

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
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~IScriptNetworkBeforeEvents() = default;
#else // LL_PLAT_C
    virtual ~IScriptNetworkBeforeEvents();
#endif

    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketReceiveBeforeEvent>>
    onBeforePacketReceive(::IncomingPacketEvent const& packetEvent) = 0;

    virtual ::std::optional<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent>>
    onBeforePacketSend(::OutgoingPacketEvent const& packetEvent) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
