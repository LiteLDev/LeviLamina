#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class MolangVariableMap;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptVector; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMolangVariableMap {

public:
    // prevent constructor by default
    ScriptMolangVariableMap& operator=(ScriptMolangVariableMap const&) = delete;
    ScriptMolangVariableMap(ScriptMolangVariableMap const&)            = delete;
    ScriptMolangVariableMap()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMolangVariableMap> bind();
    /**
     * @symbol ?getVariableMap\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAAAEAVMolangVariableMap\@\@XZ
     */
    MCAPI class MolangVariableMap& getVariableMap();
    /**
     * @symbol ??4ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class ScriptModuleMinecraft::ScriptMolangVariableMap&
    operator=(class ScriptModuleMinecraft::ScriptMolangVariableMap&&);
    /**
     * @symbol
     * ?setColorRBG\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVScriptColor\@2\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setColorRBG(std::string const&, class ScriptModuleMinecraft::ScriptColor const&);
    /**
     * @symbol
     * ?setColorRBGA\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVScriptColor\@2\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setColorRBGA(std::string const&, class ScriptModuleMinecraft::ScriptColor const&);
    /**
     * @symbol
     * ?setSpeedAndDirection\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MAEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection(std::string const&, float, class Vec3 const&);
    /**
     * @symbol
     * ?setSpeedAndDirection_V010\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MAEBVScriptVector\@2\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection_V010(std::string const&, float, class ScriptModuleMinecraft::ScriptVector const&);
    /**
     * @symbol
     * ?setVector3\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVVec3\@\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3(std::string const&, class Vec3 const&);
    /**
     * @symbol
     * ?setVector3_V010\@ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA?AV?$StrongTypedObjectHandle\@VScriptMolangVariableMap\@ScriptModuleMinecraft\@\@\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVScriptVector\@2\@\@Z
     */
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3_V010(std::string const&, class ScriptModuleMinecraft::ScriptVector const&);
    /**
     * @symbol ??1ScriptMolangVariableMap\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptMolangVariableMap();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
