#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {

public:
    // prevent constructor by default
    ScriptMovementComponent& operator=(ScriptMovementComponent const&) = delete;
    ScriptMovementComponent(ScriptMovementComponent const&)            = delete;
    ScriptMovementComponent()                                          = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTMOVEMENTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptMovementComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?bind\@ScriptMovementComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptMovementComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementComponent>
    bind(); // NOLINT
    /**
     * @symbol ?ComponentId\@ScriptMovementComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
