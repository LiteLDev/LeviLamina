#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class MovementScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_MOVEMENTSCRIPTACTORCOMPONENT
public:
    MovementScriptActorComponent& operator=(MovementScriptActorComponent const&) = delete;
    MovementScriptActorComponent(MovementScriptActorComponent const&)            = delete;
    MovementScriptActorComponent()                                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getMaxTurn\@MovementScriptActorComponent\@ScriptModuleMinecraft\@\@UEBA?AV?$Result\@M\@Scripting\@\@XZ
     */
    virtual class Scripting::Result<float> getMaxTurn() const;
    /**
     * @symbol
     * ??0MovementScriptActorComponent\@ScriptModuleMinecraft\@\@QEAA\@AEBVWeakEntityRef\@\@AEBVWeakLifetimeScope\@Scripting\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEQActorDefinitionDescriptor\@\@PEAUDescription\@\@\@Z
     */
    MCAPI
    MovementScriptActorComponent(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&, std::string const&, struct Description* ActorDefinitionDescriptor::*);
    /**
     * @symbol
     * ?bind\@MovementScriptActorComponent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@VMovementScriptActorComponent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::MovementScriptActorComponent> bind();
};

}; // namespace ScriptModuleMinecraft
