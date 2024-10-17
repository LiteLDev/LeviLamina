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
    MCVAPI bool onFlushBlockCustomComponentAfterEvents();

    MCVAPI bool onFlushEditorDataStoreAfterEvents();

    MCVAPI bool onFlushEditorExtensionContextAfterEvents();

    MCVAPI bool onFlushItemCustomComponentAfterEvents();

    MCVAPI bool onFlushSystemAfterEvents();

    MCVAPI bool onFlushWorldAfterEvents();

    MCVAPI void onLevelTickEnd();

    MCVAPI void onPostFlushAfterEvents();

    MCVAPI void onPreFlushAfterEvents();

    MCVAPI void onRunAsyncJobs();

    MCVAPI bool onRunSystemTick();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI bool onFlushBlockCustomComponentAfterEvents$();

    MCAPI bool onFlushEditorDataStoreAfterEvents$();

    MCAPI bool onFlushEditorExtensionContextAfterEvents$();

    MCAPI bool onFlushItemCustomComponentAfterEvents$();

    MCAPI bool onFlushSystemAfterEvents$();

    MCAPI bool onFlushWorldAfterEvents$();

    MCAPI void onLevelTickEnd$();

    MCAPI void onPostFlushAfterEvents$();

    MCAPI void onPreFlushAfterEvents$();

    MCAPI void onRunAsyncJobs$();

    MCAPI bool onRunSystemTick$();

    // NOLINTEND
};
