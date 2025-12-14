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
