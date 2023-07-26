#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/events/MutableServerNetworkGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptServerNetworkEventHandler {

public:
    // prevent constructor by default
    ScriptServerNetworkEventHandler& operator=(ScriptServerNetworkEventHandler const&) = delete;
    ScriptServerNetworkEventHandler(ScriptServerNetworkEventHandler const&)            = delete;
    ScriptServerNetworkEventHandler()                                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?handleEvent\@ScriptServerNetworkEventHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUChatEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ChatEvent&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableServerNetworkGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VServerNetworkEventHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableServerNetworkGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct MutableServerNetworkGameplayEvent<enum class CoordinatorResult>&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_handleChat\@ScriptServerNetworkEventHandler\@\@AEBA_NAEAUChatEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool
    _handleChat(struct ChatEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>)
        const; // NOLINT

private:
};
