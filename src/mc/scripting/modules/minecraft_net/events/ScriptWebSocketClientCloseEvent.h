#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientCloseEventIntermediateData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientCloseEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3e7405;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientCloseEvent& operator=(ScriptWebSocketClientCloseEvent const&);
    ScriptWebSocketClientCloseEvent(ScriptWebSocketClientCloseEvent const&);
    ScriptWebSocketClientCloseEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
