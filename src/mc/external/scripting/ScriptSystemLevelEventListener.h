#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ScriptDeferredEventListener.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredEventListener;
namespace ScriptModuleMinecraft { class ScriptSystemAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSystemLevelEventListener : public ::ScriptDeferredEventListener {
public:
    // prevent constructor by default
    ScriptSystemLevelEventListener& operator=(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener(ScriptSystemLevelEventListener const&);
    ScriptSystemLevelEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptSystemLevelEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptSystemLevelEventListener() = default;

    // vIndex: 3, symbol: ?onRunSystemTick@ScriptSystemLevelEventListener@ScriptModuleMinecraft@@UEAA_NXZ
    virtual bool onRunSystemTick();

    // symbol:
    // ??0ScriptSystemLevelEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptSystemLevelEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
