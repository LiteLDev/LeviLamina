#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptFilterGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTFILTERGROUP
public:
    ScriptFilterGroup& operator=(ScriptFilterGroup const&) = delete;
    ScriptFilterGroup(ScriptFilterGroup const&)            = delete;
    ScriptFilterGroup()                                    = delete;
#endif

public:
    /**
     * @symbol
     * ?bind\@ScriptFilterGroup\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VActorFilterGroup\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ActorFilterGroup> bind();
};

}; // namespace ScriptModuleMinecraft
