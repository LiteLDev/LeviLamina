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
    virtual void onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 5
    virtual void onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 6
    virtual void onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 7
    virtual void onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 8
    virtual void onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    // vIndex: 9
    virtual void onPreFlushAfterEvents();

    // vIndex: 10
    virtual void onPostFlushAfterEvents();

    // vIndex: 11
    virtual void onScriptTickStart();

    // vIndex: 12
    virtual void onScriptTickEnd();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onRunSystemTick(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker&);

    MCFOLD void $onPreFlushAfterEvents();

    MCFOLD void $onPostFlushAfterEvents();

    MCFOLD void $onScriptTickStart();

    MCFOLD void $onScriptTickEnd();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
