#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerBeforeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDATADRIVENACTORTRIGGERBEFOREEVENT
public:
    ScriptDataDrivenActorTriggerBeforeEvent& operator=(ScriptDataDrivenActorTriggerBeforeEvent const&) = delete;
    ScriptDataDrivenActorTriggerBeforeEvent(ScriptDataDrivenActorTriggerBeforeEvent const&)            = delete;
    ScriptDataDrivenActorTriggerBeforeEvent()                                                          = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@QEAA\@AEAVActor\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@4\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptDataDrivenActorTriggerBeforeEvent(class Actor&, std::string const&, std::vector<struct ActorDefinitionModifier>&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol
     * ?getModifiers\@ScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorDefinitionModifier> getModifiers() const;
    /**
     * @symbol
     * ?setModifiers\@ScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@QEAAXAEBV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void setModifiers(std::vector<struct ActorDefinitionModifier> const&);
    /**
     * @symbol
     * ?bind\@ScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptDataDrivenActorTriggerBeforeEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerBeforeEvent>
    bind();
};

}; // namespace ScriptModuleMinecraft
