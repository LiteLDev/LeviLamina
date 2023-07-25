#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementSkipComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTSKIPCOMPONENT
public:
    ScriptMovementSkipComponent& operator=(ScriptMovementSkipComponent const&) = delete;
    ScriptMovementSkipComponent(ScriptMovementSkipComponent const&)            = delete;
    ScriptMovementSkipComponent()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTSKIPCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementSkipComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptMovementSkipComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMovementSkipComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementSkipComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementSkipComponent> bind();
};

}; // namespace ScriptModuleMinecraft
