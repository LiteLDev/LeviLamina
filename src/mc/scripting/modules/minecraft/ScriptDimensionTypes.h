#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace ScriptModuleMinecraft { class ScriptDimensionType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionTypes {
public:
    // prevent constructor by default
    ScriptDimensionTypes& operator=(ScriptDimensionTypes const&);
    ScriptDimensionTypes(ScriptDimensionTypes const&);
    ScriptDimensionTypes();

public:
    // NOLINTBEGIN
    // symbol:
    // ?get@ScriptDimensionTypes@ScriptModuleMinecraft@@QEAA?AV?$optional@V?$StrongTypedObjectHandle@VScriptDimensionType@ScriptModuleMinecraft@@@Scripting@@@std@@VWeakLifetimeScope@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimensionType>>
          get(class Scripting::WeakLifetimeScope, std::string const&);

    // symbol:
    // ?_getDimensionStringNames@ScriptDimensionTypes@ScriptModuleMinecraft@@SA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    MCAPI static std::unordered_map<std::string, std::string> _getDimensionStringNames();

    // symbol: ?bind@ScriptDimensionTypes@ScriptModuleMinecraft@@SAXAEAVModuleBindingBuilder@Scripting@@@Z
    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // symbol:
    // ?fromString@ScriptDimensionTypes@ScriptModuleMinecraft@@SA?AV?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static DimensionType fromString(std::string const& name);

    // symbol:
    // ?toString@ScriptDimensionTypes@ScriptModuleMinecraft@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$AutomaticID@VDimension@@H@@@Z
    MCAPI static std::string toString(DimensionType const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?registerTypes@ScriptDimensionTypes@ScriptModuleMinecraft@@AEAAXVWeakLifetimeScope@Scripting@@@Z
    MCAPI void registerTypes(class Scripting::WeakLifetimeScope);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?sMinecraftNamespace@ScriptDimensionTypes@ScriptModuleMinecraft@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sMinecraftNamespace;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
