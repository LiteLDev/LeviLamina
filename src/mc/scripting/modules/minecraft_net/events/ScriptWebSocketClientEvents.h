#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAfterEventMetadata; }
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ScriptModuleMinecraft::ScriptAfterEventMetadata const& getMetadata();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
