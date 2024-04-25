#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventListener {
public:
    // prevent constructor by default
    ScriptDeferredEventListener& operator=(ScriptDeferredEventListener const&);
    ScriptDeferredEventListener(ScriptDeferredEventListener const&);
    ScriptDeferredEventListener();

public:
    // NOLINTBEGIN
    // symbol: ?onFlushBlockCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onFlushBlockCustomComponentAfterEvents();

    // symbol: ?onFlushEditorDataStoreAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onFlushEditorDataStoreAfterEvents();

    // symbol: ?onFlushEditorExtensionContextAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onFlushEditorExtensionContextAfterEvents();

    // symbol: ?onFlushItemCustomComponentAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onFlushItemCustomComponentAfterEvents();

    // symbol: ?onFlushSystemAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onFlushSystemAfterEvents();

    // symbol: ?onFlushWorldAfterEvents@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onFlushWorldAfterEvents();

    // symbol: ?onLevelTickEnd@ScriptDeferredEventListener@@UEAAXXZ
    MCVAPI void onLevelTickEnd();

    // symbol: ?onPostFlushAfterEvents@ScriptDeferredEventListener@@UEAAXXZ
    MCVAPI void onPostFlushAfterEvents();

    // symbol: ?onPreFlushAfterEvents@ScriptDeferredEventListener@@UEAAXXZ
    MCVAPI void onPreFlushAfterEvents();

    // symbol: ?onRunAsyncJobs@ScriptDeferredEventListener@@UEAAXXZ
    MCVAPI void onRunAsyncJobs();

    // symbol: ?onRunSystemTick@ScriptDeferredEventListener@@UEAA_NXZ
    MCVAPI bool onRunSystemTick();

    // NOLINTEND
};
