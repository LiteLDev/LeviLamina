#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptCustomCommandResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk463728;
    ::ll::UntypedStorage<8, 40> mUnk20d4b2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomCommandResult(ScriptCustomCommandResult const&);
    ScriptCustomCommandResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptCustomCommandResult&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandResult&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptCustomCommandResult&
    operator=(::ScriptModuleMinecraft::ScriptCustomCommandResult const&);

    MCNAPI ~ScriptCustomCommandResult();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
