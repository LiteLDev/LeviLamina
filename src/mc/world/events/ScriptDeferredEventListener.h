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
    // vIndex: 0
    virtual ~ScriptDeferredEventListener() = default;

    // vIndex: 1
    virtual void onRunSystemTick(::ScriptDeferredFlushTracker&);

    // vIndex: 2
    virtual void onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 3
    virtual void onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 4
    virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 5
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 6
    virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 7
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 8
    virtual void onPreFlushAfterEvents();

    // vIndex: 9
    virtual void onPostFlushAfterEvents();

    // vIndex: 10
    virtual void onScriptTickStart();

    // vIndex: 11
    virtual void onScriptTickEnd();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRunSystemTick(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCNAPI void $onPreFlushAfterEvents();

    MCNAPI void $onPostFlushAfterEvents();

    MCNAPI void $onScriptTickStart();

    MCNAPI void $onScriptTickEnd();
    // NOLINTEND
};
