#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/events/MutableScriptingGameplayEvent.h"
#include "mc/external/scripting/ScriptingGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptScriptingEventHandler {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSCRIPTINGEVENTHANDLER
public:
    ScriptScriptingEventHandler& operator=(ScriptScriptingEventHandler const&) = delete;
    ScriptScriptingEventHandler(ScriptScriptingEventHandler const&)            = delete;
    ScriptScriptingEventHandler()                                              = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VScriptingEventHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct MutableScriptingGameplayEvent<enum class CoordinatorResult>&);
    /**
     * @vftbl 2
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VScriptingEventHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBU?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct ScriptingGameplayEvent<enum class CoordinatorResult> const&);
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?handleEvent\@ScriptScriptingEventHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUBeforeWatchdogTerminateEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct BeforeWatchdogTerminateEvent&);

    // private:
    /**
     * @symbol
     * ?_handleWatchdogTerminateEvent\@ScriptScriptingEventHandler\@\@AEBA_NAEAUBeforeWatchdogTerminateEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VScriptSystemBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool
    _handleWatchdogTerminateEvent(struct BeforeWatchdogTerminateEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>)
        const;

private:
};
