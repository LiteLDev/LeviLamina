/**
 * @file  ScriptServerNetworkEventHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
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
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptServerNetworkEventHandler();
    /**
     * @vftbl  1
     * @symbol  ?handleEvent\@ScriptServerNetworkEventHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUChatEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ChatEvent &);
    /**
     * @vftbl  2
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableServerNetworkGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VServerNetworkEventHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableServerNetworkGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct MutableServerNetworkGameplayEvent<enum class CoordinatorResult> &);

//private:
    /**
     * @symbol  ?_handleChat\@ScriptServerNetworkEventHandler\@\@AEBA_NAEAUChatEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VScriptWorldEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleChat(struct ChatEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};