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
    MCAPI class MolangVariableMap& getVariableMap();

    MCAPI class ScriptModuleMinecraft::ScriptMolangVariableMap&
    operator=(class ScriptModuleMinecraft::ScriptMolangVariableMap&&);

    MCAPI class Scripting::Result<void>
    setColorRBGA_V010(std::string const&, class ScriptModuleMinecraft::ScriptColor const&);

    MCAPI class Scripting::Result<void>
    setColorRBG_V010(std::string const&, class ScriptModuleMinecraft::ScriptColor const&);

    MCAPI class Scripting::Result<void> setColorRGB(std::string const&, class ScriptModuleMinecraft::ScriptRGB const&);

    MCAPI class Scripting::Result<void>
    setColorRGBA(std::string const&, class ScriptModuleMinecraft::ScriptRGBA const&);

    MCAPI class Scripting::Result<void> setFloat(std::string const&, float);

    MCAPI class Scripting::Result<void>
    setSpeedAndDirection(std::string const& variableName, float speed, class Vec3 const& direction);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection_V010(
        std::string const&                               variableName,
        float                                            speed,
        class ScriptModuleMinecraft::ScriptVector const& direction
    );

    MCAPI class Scripting::Result<void> setVector3(std::string const& variableName, class Vec3 const& vector);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3_V010(std::string const& variableName, class ScriptModuleMinecraft::ScriptVector const& vector);

    MCAPI ~ScriptMolangVariableMap();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMolangVariableMap> bind();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Scripting::Result<std::string> _prependVariable(std::string const&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
