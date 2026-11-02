#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptDeferredFlushTracker;
// clang-format on

class ScriptDeferredEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDeferredEventListener() = default;

    virtual void onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    virtual void onPreFlushAfterEvents();

    virtual void onPostFlushAfterEvents();

    virtual void onScriptTickStart();

    virtual void onScriptTickEnd();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $onScriptTickStart();

    MCNAPI void $onScriptTickEnd();


    // NOLINTEND
};
