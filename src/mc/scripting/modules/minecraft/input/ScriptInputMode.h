#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptInputMode {
public:
    // prevent constructor by default
    ScriptInputMode& operator=(ScriptInputMode const&);
    ScriptInputMode(ScriptInputMode const&);
    ScriptInputMode();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bind();

    MCAPI static ::InputMode getScriptInputMode(::InputMode inputMode);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
