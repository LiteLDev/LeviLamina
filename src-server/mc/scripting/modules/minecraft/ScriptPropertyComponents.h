#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft::ScriptPropertyComponents { struct PropertyComponentRegistration; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptPropertyComponents {
// functions
// NOLINTBEGIN
MCNAPI ::std::vector<::ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration> GetComponentRegistration();

MCNAPI void bind(::Scripting::ModuleBindingBuilder& moduleBuilder, ::ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);
// NOLINTEND

}
