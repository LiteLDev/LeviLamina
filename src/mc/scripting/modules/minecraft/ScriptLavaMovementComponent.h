#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptLavaMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {

public:
    // prevent constructor by default
    ScriptLavaMovementComponent& operator=(ScriptLavaMovementComponent const&) = delete;
    ScriptLavaMovementComponent(ScriptLavaMovementComponent const&)            = delete;
    ScriptLavaMovementComponent()                                              = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTLAVAMOVEMENTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptLavaMovementComponent(); // NOLINT
#endif
    /**
     * @symbol
     * ?bind\@ScriptLavaMovementComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptLavaMovementComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptLavaMovementComponent>
    bind(); // NOLINT
    /**
     * @symbol ?ComponentId\@ScriptLavaMovementComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId; // NOLINT
};

}; // namespace ScriptModuleMinecraft
