#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptFilterGroup {
public:
    // prevent constructor by default
    ScriptFilterGroup& operator=(ScriptFilterGroup const&);
    ScriptFilterGroup(ScriptFilterGroup const&);
    ScriptFilterGroup();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ActorFilterGroup> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
