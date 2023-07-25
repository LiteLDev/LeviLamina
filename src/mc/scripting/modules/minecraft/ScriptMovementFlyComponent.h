#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementFlyComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTFLYCOMPONENT
public:
    ScriptMovementFlyComponent& operator=(ScriptMovementFlyComponent const&) = delete;
    ScriptMovementFlyComponent(ScriptMovementFlyComponent const&)            = delete;
    ScriptMovementFlyComponent()                                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTFLYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementFlyComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptMovementFlyComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMovementFlyComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementFlyComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementFlyComponent> bind();
};

}; // namespace ScriptModuleMinecraft
