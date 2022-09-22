/**
 * @file  ScriptActorGameplayHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptActorGameplayHandler();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1709747792
     * @vftbl  4
     * @symbol ?handleEvent@ScriptActorGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUActorDefinitionStartedEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum CoordinatorResult> handleEvent(struct ActorDefinitionStartedEvent &);

//private:
    /**
     * @hash   738824064
     * @symbol ?_handleActorDefinitionStartedEvent@ScriptActorGameplayHandler@@AEBA_NAEAUActorDefinitionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleActorDefinitionStartedEvent(struct ActorDefinitionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};