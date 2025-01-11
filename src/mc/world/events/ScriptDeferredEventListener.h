#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScriptDeferredEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDeferredEventListener() = default;

    // vIndex: 1
    virtual bool onRunSystemTick();

    // vIndex: 2
    virtual bool onFlushWorldAfterEvents();

    // vIndex: 3
    virtual bool onFlushSystemAfterEvents();

    // vIndex: 4
    virtual bool onFlushEditorExtensionContextAfterEvents();

    // vIndex: 5
    virtual bool onFlushBlockCustomComponentAfterEvents();

    // vIndex: 6
    virtual bool onFlushEditorDataStoreAfterEvents();

    // vIndex: 7
    virtual bool onFlushItemCustomComponentAfterEvents();

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $onRunSystemTick();

    MCAPI bool $onFlushWorldAfterEvents();

    MCAPI bool $onFlushSystemAfterEvents();

    MCAPI bool $onFlushEditorExtensionContextAfterEvents();

    MCAPI bool $onFlushBlockCustomComponentAfterEvents();

    MCAPI bool $onFlushEditorDataStoreAfterEvents();

    MCAPI bool $onFlushItemCustomComponentAfterEvents();

    MCAPI void $onPreFlushAfterEvents();

    MCAPI void $onPostFlushAfterEvents();

    MCAPI void $onScriptTickStart();

    MCAPI void $onScriptTickEnd();
    // NOLINTEND
};
