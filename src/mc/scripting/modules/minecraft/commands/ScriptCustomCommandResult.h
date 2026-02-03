#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandStatus.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptCustomCommandStatus> mStatus;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                    mMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandResult& operator=(ScriptCustomCommandResult const&);
    ScriptCustomCommandResult(ScriptCustomCommandResult const&);
    ScriptCustomCommandResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptCustomCommandResult&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandResult&&);

    MCAPI ~ScriptCustomCommandResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
