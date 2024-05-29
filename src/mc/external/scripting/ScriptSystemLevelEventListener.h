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

    // vIndex: 1, symbol: ?onLevelTickEnd@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onLevelTickEnd();

    // vIndex: 2, symbol: ?onRunAsyncJobs@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onRunAsyncJobs();

    // vIndex: 3, symbol: ?onRunSystemTick@ScriptSystemLevelEventListener@ScriptModuleMinecraft@@UEAA_NXZ
    virtual bool onRunSystemTick();

    // vIndex: 4, symbol: ?onFlushWorldAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushWorldAfterEvents();

    // vIndex: 5, symbol: ?onFlushSystemAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushSystemAfterEvents();

    // vIndex: 6, symbol: ?onFlushEditorExtensionContextAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushEditorExtensionContextAfterEvents();

    // vIndex: 7, symbol: ?onFlushBlockCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushBlockCustomComponentAfterEvents();

    // vIndex: 8, symbol: ?onFlushEditorDataStoreAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushEditorDataStoreAfterEvents();

    // vIndex: 9, symbol: ?onFlushItemCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushItemCustomComponentAfterEvents();

    // vIndex: 10, symbol: ?onPreFlushAfterEvents@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onPreFlushAfterEvents();

    // vIndex: 11, symbol: ?onPostFlushAfterEvents@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onPostFlushAfterEvents();

    // symbol:
    // ??0ScriptSystemLevelEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptSystemAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptSystemLevelEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
