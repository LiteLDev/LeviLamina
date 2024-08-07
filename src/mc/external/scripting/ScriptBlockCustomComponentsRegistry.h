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
    // vIndex: 0
    virtual ~ScriptBlockCustomComponentsRegistry() = default;

    // vIndex: 1
    virtual void onLevelTickEnd();

    // vIndex: 2
    virtual void onRunAsyncJobs();

    // vIndex: 3
    virtual bool onRunSystemTick();

    // vIndex: 4
    virtual bool onFlushWorldAfterEvents();

    // vIndex: 5
    virtual bool onFlushSystemAfterEvents();

    // vIndex: 6
    virtual bool onFlushEditorExtensionContextAfterEvents();

    // vIndex: 7
    virtual bool onFlushBlockCustomComponentAfterEvents();

    // vIndex: 8
    virtual bool onFlushEditorDataStoreAfterEvents();

    // vIndex: 9
    virtual bool onFlushItemCustomComponentAfterEvents();

    // vIndex: 10
    virtual void onPreFlushAfterEvents();

    // vIndex: 11
    virtual void onPostFlushAfterEvents();

    MCAPI ScriptBlockCustomComponentsRegistry();

    MCAPI gsl::not_null<struct ScriptBlockCustomComponentData*> getHandleToComponent(class HashedString const&);

    MCAPI void onReload();

    MCAPI class ScriptBlockCustomComponentsRegistry& operator=(class ScriptBlockCustomComponentsRegistry&&);

    MCAPI class Scripting::Result<void>
    tryRegisterCustomComponent(class HashedString const&, struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&, class Scripting::WeakLifetimeScope const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _errorWhenComponentUsesQueuedTickClosure(class BlockCustomComponentsComponent const&, class HashedString const&)
        const;

    MCAPI void _onScriptInitializationComplete();

    // NOLINTEND
};
