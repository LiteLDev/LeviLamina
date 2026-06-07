#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/scripting/modules/minecraft/events/metadata/ScriptAfterEventMetadata.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClientCloseEvent; }
namespace ScriptModuleMinecraftNet { class ScriptWebSocketClientReceiveEvent; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClientEvents
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketClientEvents> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf527ae;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientEvents& operator=(ScriptWebSocketClientEvents const&);
    ScriptWebSocketClientEvents(ScriptWebSocketClientEvents const&);
    ScriptWebSocketClientEvents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptWebSocketClientEvents(::Scripting::WeakLifetimeScope& scope);

    MCNAPI void flushDeferredEvents(::ScriptDeferredFlushTracker& tracker);

    MCNAPI void onClose(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptWebSocketClientCloseEvent> eventData
    );

    MCNAPI void onMessageReceive(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftNet::ScriptWebSocketClientReceiveEvent> eventData
    );

    MCNAPI void postFlush();

    MCNAPI void preFlush();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);

    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata<
        ::ScriptModuleMinecraftNet::ScriptWebSocketClientEvents> const&
    getMetadata();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::WeakLifetimeScope& scope);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
