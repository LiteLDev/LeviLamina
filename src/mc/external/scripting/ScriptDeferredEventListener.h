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
};
