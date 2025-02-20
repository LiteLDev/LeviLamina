#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptCommandResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3516be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommandResult& operator=(ScriptCommandResult const&);
    ScriptCommandResult(ScriptCommandResult const&);
    ScriptCommandResult();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptCommandResult> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
