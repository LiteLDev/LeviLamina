#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementBasicComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTBASICCOMPONENT
public:
    ScriptMovementBasicComponent& operator=(ScriptMovementBasicComponent const&) = delete;
    ScriptMovementBasicComponent(ScriptMovementBasicComponent const&)            = delete;
    ScriptMovementBasicComponent()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTBASICCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementBasicComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptMovementBasicComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMovementBasicComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementBasicComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementBasicComponent> bind();
    /**
     * @symbol
     * ?bindV010\@ScriptMovementBasicComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementBasicComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementBasicComponent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
