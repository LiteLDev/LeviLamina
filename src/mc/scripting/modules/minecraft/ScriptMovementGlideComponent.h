#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementGlideComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTGLIDECOMPONENT
public:
    ScriptMovementGlideComponent& operator=(ScriptMovementGlideComponent const&) = delete;
    ScriptMovementGlideComponent(ScriptMovementGlideComponent const&)            = delete;
    ScriptMovementGlideComponent()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTGLIDECOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementGlideComponent();
#endif
    /**
     * @symbol
     * ?getSpeedWhenTurning\@ScriptMovementGlideComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getSpeedWhenTurning() const;
    /**
     * @symbol
     * ?getStartSpeed\@ScriptMovementGlideComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getStartSpeed() const;
    /**
     * @symbol ?ComponentId\@ScriptMovementGlideComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMovementGlideComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementGlideComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementGlideComponent> bind();
};

}; // namespace ScriptModuleMinecraft
