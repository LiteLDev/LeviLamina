#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/events/MutableServerNetworkGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptServerNetworkEventHandler {
public:
    // prevent constructor by default
    ScriptServerNetworkEventHandler& operator=(ScriptServerNetworkEventHandler const&);
    ScriptServerNetworkEventHandler(ScriptServerNetworkEventHandler const&);
    ScriptServerNetworkEventHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptServerNetworkEventHandler() = default;

    // vIndex: 1
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ChatEvent&);

    // vIndex: 2
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableServerNetworkGameplayEvent<::CoordinatorResult>& event);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _handleChat(struct ChatEvent&, class Scripting::WeakLifetimeScope const& scope, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
