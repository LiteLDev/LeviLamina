#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/AttributeScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptUnderwaterMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {

public:
    // prevent constructor by default
    ScriptUnderwaterMovementComponent& operator=(ScriptUnderwaterMovementComponent const&) = delete;
    ScriptUnderwaterMovementComponent(ScriptUnderwaterMovementComponent const&)            = delete;
    ScriptUnderwaterMovementComponent()                                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMODULEMINECRAFT_SCRIPTUNDERWATERMOVEMENTCOMPONENT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScriptUnderwaterMovementComponent();
#endif
    /**
     * @symbol
     * ?bind\@ScriptUnderwaterMovementComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VScriptUnderwaterMovementComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptUnderwaterMovementComponent>
    bind();
    /**
     * @symbol ?ComponentId\@ScriptUnderwaterMovementComponent\@ScriptModuleMinecraft\@\@2PEBDEB
     */
    MCAPI static char const* ComponentId;
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
