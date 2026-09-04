#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraftNet { struct ScriptWebSocketClientReceiveEventIntermediateData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptWebSocketClientReceiveEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdd4238;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClientReceiveEvent& operator=(ScriptWebSocketClientReceiveEvent const&);
    ScriptWebSocketClientReceiveEvent(ScriptWebSocketClientReceiveEvent const&);
    ScriptWebSocketClientReceiveEvent();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
