#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::string> DEPRECATED_getDimensionStringNames();

    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
