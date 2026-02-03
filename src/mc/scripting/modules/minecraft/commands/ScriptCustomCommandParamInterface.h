#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandParamType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandParamInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                        mName;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomCommandParamType> mParamType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                       mEnumName;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandParamInterface(ScriptCustomCommandParamInterface const&);
    ScriptCustomCommandParamInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptModuleMinecraft::ScriptCustomCommandParamInterface&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandParamInterface&&);

    MCFOLD ::ScriptModuleMinecraft::ScriptCustomCommandParamInterface&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandParamInterface const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
