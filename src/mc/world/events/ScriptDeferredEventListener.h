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
    MCFOLD void $onRunSystemTick(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushWorldAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushSystemAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushEditorProjectAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushEditorExtensionContextAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushBlockCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushEditorDataStoreAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

    MCFOLD void $onFlushItemCustomComponentAfterEvents(::ScriptDeferredFlushTracker& deferredTracker);

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
