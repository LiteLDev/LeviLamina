#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/ScriptDeferredEventListener.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptBlockCustomComponentInterface; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptBlockCustomComponentsRegistry : public ::ScriptDeferredEventListener {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentsRegistry& operator=(ScriptBlockCustomComponentsRegistry const&);
    ScriptBlockCustomComponentsRegistry(ScriptBlockCustomComponentsRegistry const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockCustomComponentsRegistry@@UEAA@XZ
    virtual ~ScriptBlockCustomComponentsRegistry() = default;

    // vIndex: 1, symbol: ?onLevelTickEnd@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onLevelTickEnd();

    // vIndex: 2, symbol: ?onRunAsyncJobs@ScriptDeferredEventListener@@UEAAXXZ
    virtual void onRunAsyncJobs();

    // vIndex: 3, symbol: ?onRunSystemTick@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onRunSystemTick();

    // vIndex: 4, symbol: ?onFlushWorldAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushWorldAfterEvents();

    // vIndex: 5, symbol: ?onFlushSystemAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushSystemAfterEvents();

    // vIndex: 6, symbol: ?onFlushEditorExtensionContextAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushEditorExtensionContextAfterEvents();

    // vIndex: 7, symbol: ?onFlushBlockCustomComponentAfterEvents@ScriptBlockCustomComponentsRegistry@@EEAA_NXZ
    virtual bool onFlushBlockCustomComponentAfterEvents();

    // vIndex: 8, symbol: ?onFlushEditorDataStoreAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushEditorDataStoreAfterEvents();

    // vIndex: 9, symbol: ?onFlushItemCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    virtual bool onFlushItemCustomComponentAfterEvents();

    // vIndex: 10, symbol: ?onPreFlushAfterEvents@ScriptBlockCustomComponentsRegistry@@EEAAXXZ
    virtual void onPreFlushAfterEvents();

    // vIndex: 11, symbol: ?onPostFlushAfterEvents@ScriptBlockCustomComponentsRegistry@@EEAAXXZ
    virtual void onPostFlushAfterEvents();

    // symbol: ??0ScriptBlockCustomComponentsRegistry@@QEAA@XZ
    MCAPI ScriptBlockCustomComponentsRegistry();

    // symbol:
    // ?getHandleToComponent@ScriptBlockCustomComponentsRegistry@@QEAA?AV?$not_null@PEAUScriptBlockCustomComponentData@@@gsl@@AEBVHashedString@@@Z
    MCAPI gsl::not_null<struct ScriptBlockCustomComponentData*> getHandleToComponent(class HashedString const&);

    // symbol: ?onReload@ScriptBlockCustomComponentsRegistry@@QEAAXXZ
    MCAPI void onReload();

    // symbol: ??4ScriptBlockCustomComponentsRegistry@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ScriptBlockCustomComponentsRegistry& operator=(class ScriptBlockCustomComponentsRegistry&&);

    // symbol:
    // ?tryRegisterCustomComponent@ScriptBlockCustomComponentsRegistry@@QEAA?AV?$Result@X$$V@Scripting@@AEBVHashedString@@$$QEAUScriptBlockCustomComponentInterface@ScriptModuleMinecraft@@AEBVWeakLifetimeScope@3@@Z
    MCAPI class Scripting::Result<void>
    tryRegisterCustomComponent(class HashedString const&, struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_errorWhenComponentUsesQueuedTickClosure@ScriptBlockCustomComponentsRegistry@@AEBAXAEBVBlockCustomComponentsComponent@@AEBVHashedString@@@Z
    MCAPI void
    _errorWhenComponentUsesQueuedTickClosure(class BlockCustomComponentsComponent const&, class HashedString const&)
        const;

    // symbol: ?_onScriptInitializationComplete@ScriptBlockCustomComponentsRegistry@@AEAAXXZ
    MCAPI void _onScriptInitializationComplete();

    // NOLINTEND
};
