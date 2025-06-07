#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptServerAdmin {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::Result_deprecated<void>
    transferPlayer(::ScriptModuleMinecraft::ScriptPlayer& scriptPlayer, ::std::string host, ushort port);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
