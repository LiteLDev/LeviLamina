#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptColor; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMolangVariableMap
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptMolangVariableMap> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::MolangVariableMap> mVariableMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::string> _prependVariable(::std::string const& variableName);

    MCAPI ::Scripting::Result_deprecated<void>
    setColorRBGA_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);

    MCAPI ::Scripting::Result_deprecated<void>
    setColorRBG_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);

    MCAPI ::Scripting::Result_deprecated<void>
    setColorRGB(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptRGB const& color);

    MCAPI ::Scripting::Result_deprecated<void>
    setColorRGBA(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI ::Scripting::Result_deprecated<void> setFloat(::std::string const& variableName, float number);

    MCAPI ::Scripting::Result_deprecated<void>
    setSpeedAndDirection(::std::string const& variableName, float speed, ::Vec3 const& direction);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection_V010(
        ::std::string const&                         variableName,
        float                                        speed,
        ::ScriptModuleMinecraft::ScriptVector const& direction
    );

    MCAPI ::Scripting::Result_deprecated<void> setVector3(::std::string const& variableName, ::Vec3 const& vector);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptVector const& vector);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
