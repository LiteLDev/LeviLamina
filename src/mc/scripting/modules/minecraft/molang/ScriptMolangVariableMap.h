#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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
    MCNAPI ::Scripting::Result_deprecated<::std::string> _prependVariable(::std::string const& variableName);

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRBGA_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRBG_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptColor const& color);

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRGB(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptRGB const& color);

    MCNAPI ::Scripting::Result_deprecated<void>
    setColorRGBA(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCNAPI ::Scripting::Result_deprecated<void> setFloat(::std::string const& variableName, float number);

    MCNAPI ::Scripting::Result_deprecated<void>
    setSpeedAndDirection(::std::string const& variableName, float speed, ::Vec3 const& direction);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>
    setSpeedAndDirection_V010(
        ::std::string const&                         variableName,
        float                                        speed,
        ::ScriptModuleMinecraft::ScriptVector const& direction
    );

    MCNAPI ::Scripting::Result_deprecated<void> setVector3(::std::string const& variableName, ::Vec3 const& vector);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptMolangVariableMap>
    setVector3_V010(::std::string const& variableName, ::ScriptModuleMinecraft::ScriptVector const& vector);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
