#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptDefinitionModifier {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDEFINITIONMODIFIER
public:
    ScriptDefinitionModifier& operator=(ScriptDefinitionModifier const&) = delete;
    ScriptDefinitionModifier(ScriptDefinitionModifier const&)            = delete;
    ScriptDefinitionModifier()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptDefinitionModifier\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UActorDefinitionModifier\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<struct ActorDefinitionModifier> bind();
};

}; // namespace ScriptModuleMinecraft
