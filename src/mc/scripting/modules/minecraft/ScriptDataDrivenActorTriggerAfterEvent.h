#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
struct ActorDefinitionEndedEvent;
struct ActorDefinitionModifier;
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDataDrivenActorTriggerAfterEvent {

public:
    // prevent constructor by default
    ScriptDataDrivenActorTriggerAfterEvent& operator=(ScriptDataDrivenActorTriggerAfterEvent const&) = delete;
    ScriptDataDrivenActorTriggerAfterEvent(ScriptDataDrivenActorTriggerAfterEvent const&)            = delete;
    ScriptDataDrivenActorTriggerAfterEvent()                                                         = delete;

public:
    /**
     * @symbol
     * ??0ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@AEBUActorDefinitionEndedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@\@Z
     */
    MCAPI
    ScriptDataDrivenActorTriggerAfterEvent(struct ActorDefinitionEndedEvent const&, class Scripting::WeakLifetimeScope const&); // NOLINT
    /**
     * @symbol ??0ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@$$QEAU01\@\@Z
     */
    MCAPI ScriptDataDrivenActorTriggerAfterEvent(struct ScriptModuleMinecraft::
                                                     ScriptDataDrivenActorTriggerAfterEvent&&); // NOLINT
    /**
     * @symbol
     * ?getModifiers\@ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEBA?AV?$vector\@UActorDefinitionModifier\@\@V?$allocator\@UActorDefinitionModifier\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ActorDefinitionModifier> getModifiers() const; // NOLINT
    /**
     * @symbol ??4ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAAAEAU01\@$$QEAU01\@\@Z
     */
    MCAPI struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&
    operator=(struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent&&); // NOLINT
    /**
     * @symbol ??1ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@QEAA\@XZ
     */
    MCAPI ~ScriptDataDrivenActorTriggerAfterEvent(); // NOLINT
    /**
     * @symbol
     * ?bind\@ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bind(); // NOLINT
    /**
     * @symbol
     * ?bindV010\@ScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@SA?AV?$ClassBindingBuilder\@UScriptDataDrivenActorTriggerAfterEvent\@ScriptModuleMinecraft\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::ClassBindingBuilder<
        struct ScriptModuleMinecraft::ScriptDataDrivenActorTriggerAfterEvent>
    bindV010(); // NOLINT
};

}; // namespace ScriptModuleMinecraft
