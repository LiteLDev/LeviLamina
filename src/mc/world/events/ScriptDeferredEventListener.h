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

    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&);

    virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    virtual void onPreFlushAfterEvents();

    virtual void onPostFlushAfterEvents();

    virtual void onScriptTickStart();

    virtual void onScriptTickEnd();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $onScriptTickStart();

    MCNAPI void $onScriptTickEnd();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
