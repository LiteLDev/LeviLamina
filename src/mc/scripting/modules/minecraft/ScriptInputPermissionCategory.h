#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptInputPermissionCategory {
public:
    // prevent constructor by default
    ScriptInputPermissionCategory& operator=(ScriptInputPermissionCategory const&);
    ScriptInputPermissionCategory(ScriptInputPermissionCategory const&);
    ScriptInputPermissionCategory();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
