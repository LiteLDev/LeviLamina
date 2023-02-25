/**
 * @file  ScriptActorGameplayHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptActorGameplayHandler.
 *
 */
class ScriptActorGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTACTORGAMEPLAYHANDLER
public:
    class ScriptActorGameplayHandler& operator=(class ScriptActorGameplayHandler const &) = delete;
    ScriptActorGameplayHandler(class ScriptActorGameplayHandler const &) = delete;
    ScriptActorGameplayHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptActorGameplayHandler();
    /**
     * @vftbl  1
     * @symbol  ?handleEvent\@ScriptActorGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUActorDefinitionStartedEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ActorDefinitionStartedEvent &);
    /**
     * @vftbl  2
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$ActorGameplayEvent\@X\@\@$$CBU?$ActorGameplayEvent\@W4CoordinatorResult\@\@\@\@U?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VActorGameplayHandler\@\@\@Details\@\@MEAA?AW4HandlerResult\@\@AEBU?$ActorGameplayEvent\@X\@\@\@Z
     */
    virtual enum class HandlerResult handleEvent(struct ActorGameplayEvent<void> const &);
    /**
     * @vftbl  3
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$ActorGameplayEvent\@W4CoordinatorResult\@\@\@\@U?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VActorGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBU?$ActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ActorGameplayEvent<enum class CoordinatorResult> const &);
    /**
     * @vftbl  4
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VActorGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableActorGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct MutableActorGameplayEvent<enum class CoordinatorResult> &);

//private:
    /**
     * @symbol  ?_handleActorDefinitionStartedEvent\@ScriptActorGameplayHandler\@\@AEBA_NAEAUActorDefinitionStartedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VScriptWorldEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleActorDefinitionStartedEvent(struct ActorDefinitionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};