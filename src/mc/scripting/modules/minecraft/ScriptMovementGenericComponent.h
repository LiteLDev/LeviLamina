#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementGenericComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTGENERICCOMPONENT
public:
    ScriptMovementGenericComponent& operator=(ScriptMovementGenericComponent const&) = delete;
    ScriptMovementGenericComponent(ScriptMovementGenericComponent const&)            = delete;
    ScriptMovementGenericComponent()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTGENERICCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementGenericComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptMovementGenericComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMovementGenericComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementGenericComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementGenericComponent>
    bind();
};

}; // namespace ScriptModuleMinecraft
