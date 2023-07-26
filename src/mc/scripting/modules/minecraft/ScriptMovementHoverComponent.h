#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementHoverComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {

public:
    // prevent constructor by default
    ScriptMovementHoverComponent& operator=(ScriptMovementHoverComponent const&) = delete;
    ScriptMovementHoverComponent(ScriptMovementHoverComponent const&)            = delete;
    ScriptMovementHoverComponent()                                               = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTHOVERCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementHoverComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?bind\@ScriptMovementHoverComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementHoverComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementHoverComponent>
    bind(); // NOLINT
    /**
     * @symbol ?ComponentId\@ScriptMovementHoverComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
