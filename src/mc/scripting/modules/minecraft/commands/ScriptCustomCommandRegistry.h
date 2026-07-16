#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class CustomCommandRegistry; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomCommandRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ScriptModuleMinecraft::CustomCommandRegistry&> mCustomCommandRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandRegistry& operator=(ScriptCustomCommandRegistry const&);
    ScriptCustomCommandRegistry(ScriptCustomCommandRegistry const&);
    ScriptCustomCommandRegistry();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
