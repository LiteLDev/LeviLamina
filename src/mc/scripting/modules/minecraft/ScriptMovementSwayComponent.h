#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementSwayComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTSWAYCOMPONENT
public:
    ScriptMovementSwayComponent& operator=(ScriptMovementSwayComponent const&) = delete;
    ScriptMovementSwayComponent(ScriptMovementSwayComponent const&)            = delete;
    ScriptMovementSwayComponent()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTSWAYCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementSwayComponent();
#endif
    /**
     * @symbol
     * ?getSwayAmplitude\@ScriptMovementSwayComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getSwayAmplitude() const;
    /**
     * @symbol
     * ?getSwayFrequency\@ScriptMovementSwayComponent\@ScriptModuleMinecraft\@\@QEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    MCAPI class Scripting::Result<float> getSwayFrequency() const;
    /**
     * @symbol ?ComponentId\@ScriptMovementSwayComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    /**
     * @symbol
     * ?bind\@ScriptMovementSwayComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementSwayComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementSwayComponent> bind();
};

}; // namespace ScriptModuleMinecraft
