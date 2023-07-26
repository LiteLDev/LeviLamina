#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
struct ActorDefinitionModifier;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDefinitionModifier {

public:
    // prevent constructor by default
    ScriptDefinitionModifier& operator=(ScriptDefinitionModifier const&) = delete;
    ScriptDefinitionModifier(ScriptDefinitionModifier const&)            = delete;
    ScriptDefinitionModifier()                                           = delete;

public:
    /**
     * @symbol
     * ?bind\@ScriptDefinitionModifier\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UActorDefinitionModifier\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ActorDefinitionModifier> bind(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
