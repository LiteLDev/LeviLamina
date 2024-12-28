#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
struct OutgoingPacketEvent;
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptPacketSendBeforeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk6bc7db;
    ::ll::UntypedStorage<8, 24> mUnkb117fa;
    ::ll::UntypedStorage<1, 1>  mUnk5b78aa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPacketSendBeforeEvent& operator=(ScriptPacketSendBeforeEvent const&);
    ScriptPacketSendBeforeEvent(ScriptPacketSendBeforeEvent const&);
    ScriptPacketSendBeforeEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
    _resolvePlayers(::Scripting::WeakLifetimeScope const& scope, ::OutgoingPacketEvent const& packetEvent);

    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraftNet::ScriptPacketSendBeforeEvent> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
