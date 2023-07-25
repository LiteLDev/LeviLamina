#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptDefinitionTrigger {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDEFINITIONTRIGGER
public:
    ScriptDefinitionTrigger& operator=(ScriptDefinitionTrigger const&) = delete;
    ScriptDefinitionTrigger(ScriptDefinitionTrigger const&)            = delete;
    ScriptDefinitionTrigger()                                          = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptDefinitionTrigger\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VActorDefinitionTrigger\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ActorDefinitionTrigger> bind();
};

}; // namespace ScriptModuleMinecraft
