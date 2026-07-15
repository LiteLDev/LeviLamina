#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class ScriptWebSocketClient
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftNet::ScriptWebSocketClient> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc5b3bc;
    ::ll::UntypedStorage<8, 16> mUnk446adc;
    ::ll::UntypedStorage<8, 32> mUnk2726ab;
    ::ll::UntypedStorage<4, 8>  mUnkdfdce5;
    ::ll::UntypedStorage<4, 8>  mUnka60b32;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWebSocketClient& operator=(ScriptWebSocketClient const&);
    ScriptWebSocketClient(ScriptWebSocketClient const&);
    ScriptWebSocketClient();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
