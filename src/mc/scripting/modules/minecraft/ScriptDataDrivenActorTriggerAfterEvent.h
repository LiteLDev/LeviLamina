#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMODULEMINECRAFT_SCRIPTDATADRIVENACTORTRIGGERAFTEREVENT
public:
    ScriptDataDrivenActorTriggerAfterEvent& operator=(ScriptDataDrivenActorTriggerAfterEvent const&) = delete;
    ScriptDataDrivenActorTriggerAfterEvent(ScriptDataDrivenActorTriggerAfterEvent const&)            = delete;
    ScriptDataDrivenActorTriggerAfterEvent()                                                         = delete;
#endif

public:
    /**
     * @symbol
     * ??0ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUActorDefinitionEndedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptDataDrivenActorTriggerAfterEvent(struct ActorDefinitionEndedEvent const&, class Scripting::WeakLifetimeScope const&);
    /**
     * @symbol ??0ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI
    ScriptDataDrivenActorTriggerAfterEvent(struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&);
    /**
     * @symbol
     * ?getModifiers\@ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorDefinitionModifier> getModifiers() const;
    /**
     * @symbol ??4ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&);
    /**
     * @symbol ??1ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptDataDrivenActorTriggerAfterEvent();
    /**
     * @symbol
     * ?bind\@ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bind();
    /**
     * @symbol
     * ?bindV010\@ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bindV010();
};

}; // namespace ScriptModuleMinecraft
