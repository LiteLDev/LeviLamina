/**
 * @file  ScriptServerNetworkEventHandler.hpp
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
 * @brief MC class ScriptServerNetworkEventHandler.
 *
 */
class ScriptServerNetworkEventHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSERVERNETWORKEVENTHANDLER
public:
    class ScriptServerNetworkEventHandler& operator=(class ScriptServerNetworkEventHandler const &) = delete;
    ScriptServerNetworkEventHandler(class ScriptServerNetworkEventHandler const &) = delete;
    ScriptServerNetworkEventHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptServerNetworkEventHandler();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1158381589
     * @vftbl  2
     * @symbol ?handleEvent@ScriptServerNetworkEventHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUChatEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ChatEvent &);

//private:
    /**
     * @hash   470258608
     * @symbol ?_handleChat@ScriptServerNetworkEventHandler@@AEBA_NAEAUChatEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptWorldEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleChat(struct ChatEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};