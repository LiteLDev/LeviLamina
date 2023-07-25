#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptLavaMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTLAVAMOVEMENTCOMPONENT
public:
    ScriptLavaMovementComponent& operator=(ScriptLavaMovementComponent const&) = delete;
    ScriptLavaMovementComponent(ScriptLavaMovementComponent const&)            = delete;
    ScriptLavaMovementComponent()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTLAVAMOVEMENTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptLavaMovementComponent();
#endif
    /**
     * @symbol ?ComponentId\@ScriptLavaMovementComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptLavaMovementComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptLavaMovementComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLavaMovementComponent> bind();
};

}; // namespace ScriptModuleMinecraft
