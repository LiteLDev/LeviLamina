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
// symbol:
// ?GetComponentRegistration@ScriptPropertyComponents@ScriptModuleMinecraft@@YA?AV?$vector@UPropertyComponentRegistration@ScriptPropertyComponents@ScriptModuleMinecraft@@V?$allocator@UPropertyComponentRegistration@ScriptPropertyComponents@ScriptModuleMinecraft@@@std@@@std@@XZ
MCAPI std::vector<struct ScriptModuleMinecraft::ScriptPropertyComponents::PropertyComponentRegistration>
      GetComponentRegistration();

// symbol:
// ?bind@ScriptPropertyComponents@ScriptModuleMinecraft@@YAXAEAVModuleBindingBuilder@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
MCAPI void bind(class Scripting::ModuleBindingBuilder&, class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

// symbol:
// ?registerScriptPropertyComponentFactories@ScriptPropertyComponents@ScriptModuleMinecraft@@YAXAEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIComponentFactory@ScriptModuleMinecraft@@U?$default_delete@VIComponentFactory@ScriptModuleMinecraft@@@std@@@2@@std@@@2@@std@@@Z
MCAPI void registerScriptPropertyComponentFactories(
    std::unordered_map<std::string, std::unique_ptr<class ScriptModuleMinecraft::IComponentFactory>>& factory
);
// NOLINTEND

}; // namespace ScriptModuleMinecraft::ScriptPropertyComponents
