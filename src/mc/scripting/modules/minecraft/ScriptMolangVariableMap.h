#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class MolangVariableMap;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptVector; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMolangVariableMap {
public:
    // prevent constructor by default
    ScriptMolangVariableMap& operator=(ScriptMolangVariableMap const&);
    ScriptMolangVariableMap(ScriptMolangVariableMap const&);
    ScriptMolangVariableMap();

public:
    // NOLINTBEGIN
    // symbol: ?getVariableMap@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAAAEAVMolangVariableMap@@XZ
    MCAPI class MolangVariableMap& getVariableMap();

    // symbol:
    // ?setColorRBGA_V010@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVScriptColor@2@@Z
    MCAPI class Scripting::Result<void>
    setColorRBGA_V010(std::string const&, class ScriptModuleMinecraft::ScriptColor const&);

    // symbol:
    // ?setColorRBG_V010@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVScriptColor@2@@Z
    MCAPI class Scripting::Result<void>
    setColorRBG_V010(std::string const&, class ScriptModuleMinecraft::ScriptColor const&);

    // symbol:
    // ?setColorRGB@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVScriptRGB@2@@Z
    MCAPI class Scripting::Result<void> setColorRGB(std::string const&, class ScriptModuleMinecraft::ScriptRGB const&);

    // symbol:
    // ?setColorRGBA@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVScriptRGBA@2@@Z
    MCAPI class Scripting::Result<void>
    setColorRGBA(std::string const&, class ScriptModuleMinecraft::ScriptRGBA const&);

    // symbol:
    // ?setFloat@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@M@Z
    MCAPI class Scripting::Result<void> setFloat(std::string const&, float);

    // symbol:
    // ?setSpeedAndDirection@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEBVVec3@@@Z
    MCAPI class Scripting::Result<void>
    setSpeedAndDirection(std::string const& variableName, float speed, class Vec3 const& direction);

    // symbol:
    // ?setSpeedAndDirection_V010@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MAEBVScriptVector@2@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection_V010(
        std::string const&                               variableName,
        float                                            speed,
        class ScriptModuleMinecraft::ScriptVector const& direction
    );

    // symbol:
    // ?setVector3@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVVec3@@@Z
    MCAPI class Scripting::Result<void> setVector3(std::string const& variableName, class Vec3 const& vector);

    // symbol:
    // ?setVector3_V010@ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA?AV?$StrongTypedObjectHandle@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVScriptVector@2@@Z
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3_V010(std::string const& variableName, class ScriptModuleMinecraft::ScriptVector const& vector);

    // symbol: ??1ScriptMolangVariableMap@ScriptModuleMinecraft@@QEAA@XZ
    MCAPI ~ScriptMolangVariableMap();

    // symbol:
    // ?bind@ScriptMolangVariableMap@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMolangVariableMap@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMolangVariableMap> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_prependVariable@ScriptMolangVariableMap@ScriptModuleMinecraft@@AEAA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<std::string> _prependVariable(std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
