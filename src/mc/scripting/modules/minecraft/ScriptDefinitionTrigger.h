#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDefinitionTrigger {

public:
    // prevent constructor by default
    ScriptDefinitionTrigger& operator=(ScriptDefinitionTrigger const&) = delete;
    ScriptDefinitionTrigger(ScriptDefinitionTrigger const&)            = delete;
    ScriptDefinitionTrigger()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bind\@ScriptDefinitionTrigger\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VActorDefinitionTrigger\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ActorDefinitionTrigger> bind();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
