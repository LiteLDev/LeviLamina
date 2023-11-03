#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class DynamicPropertiesDefinition;
class Vec3;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDynamicPropertiesDefinition {
public:
    // prevent constructor by default
    ScriptDynamicPropertiesDefinition& operator=(ScriptDynamicPropertiesDefinition const&);
    ScriptDynamicPropertiesDefinition();

public:
    // NOLINTBEGIN
    // symbol: ??0ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    // symbol: ??0ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptDynamicPropertiesDefinition(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    // symbol:
    // ?defineBoolean@ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@_N@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineBoolean(std::string const&, std::optional<bool>);

    // symbol:
    // ?defineNumber@ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@M@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineNumber(std::string const&, std::optional<float>);

    // symbol:
    // ?defineString@ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineString(std::string const&, uint, std::optional<std::string>);

    // symbol:
    // ?defineVector3@ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$StrongTypedObjectHandle@VScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@@Scripting@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$optional@VVec3@@@6@@Z
    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>>
    defineVector3(std::string const&, std::optional<class Vec3>);

    // symbol:
    // ?getDefinition@ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEBAAEBVDynamicPropertiesDefinition@@XZ
    MCAPI class DynamicPropertiesDefinition const& getDefinition() const;

    // symbol: ??4ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&
    operator=(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition&&);

    // symbol:
    // ?bind@ScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptDynamicPropertiesDefinition@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
