#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/util/MolangVariableMap.h"

// auto generated forward declare list
// clang-format off
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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
