#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"

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

class ScriptMolangVariableMap
: public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptMolangVariableMap> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk8a34c9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMolangVariableMap& operator=(ScriptMolangVariableMap const&);
    ScriptMolangVariableMap(ScriptMolangVariableMap const&);
    ScriptMolangVariableMap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::string> _prependVariable(::std::string const& variableName);

    MCAPI ::MolangVariableMap& getVariableMap();

    MCAPI ::Scripting::Result<void>
    setColorRBGA_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);

    MCAPI ::Scripting::Result<void>
    setColorRBG_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);

    MCAPI ::Scripting::Result<void>
    setColorRGB(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptRGB const& color);

    MCAPI ::Scripting::Result<void>
    setColorRGBA(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCAPI ::Scripting::Result<void> setFloat(::std::string const& variableName, float number);

    MCAPI ::Scripting::Result<void>
    setSpeedAndDirection(::std::string const& variableName, float speed, ::Vec3 const& direction);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection_V010(
        ::std::string const&                         variableName,
        float                                        speed,
        ::ScriptModuleMinecraft::ScriptVector const& direction
    );

    MCAPI ::Scripting::Result<void> setVector3(::std::string const& variableName, ::Vec3 const& vector);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptVector const& vector);

    MCAPI ~ScriptMolangVariableMap();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptMolangVariableMap> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
