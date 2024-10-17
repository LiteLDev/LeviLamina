#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IComponentFactory; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
namespace ScriptModuleMinecraft::ScriptPropertyComponents { struct PropertyComponentRegistration; }
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptPropertyComponents {
// NOLINTBEGIN
MCAPI std::vector<struct ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration>
      GetComponentRegistration();

MCAPI void bind(
    class Scripting::ModuleBindingBuilder&                       moduleBuilder,
    class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder
);

MCAPI void registerScriptPropertyComponentFactories(
    std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>& factory
);
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptPropertyComponents
