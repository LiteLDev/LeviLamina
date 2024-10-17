#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDefinitionTrigger {
public:
    // prevent constructor by default
    ScriptDefinitionTrigger& operator=(ScriptDefinitionTrigger const&);
    ScriptDefinitionTrigger(ScriptDefinitionTrigger const&);
    ScriptDefinitionTrigger();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::ClassBindingBuilder<class ActorDefinitionTrigger> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
