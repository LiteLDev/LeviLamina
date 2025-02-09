#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class ScriptingEventHandler;
class ScriptingEventListener;
// clang-format on

class ScriptingEventCoordinator : public ::EventCoordinator<::ScriptingEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptingEventHandler>> mScriptingEventHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptingEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ScriptingEventHandler& getScriptingEventHandler();

    MCFOLD void registerScriptingEventHandler(::std::unique_ptr<::ScriptingEventHandler>&& handler);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableScriptingGameplayEvent<::CoordinatorResult>> event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::ScriptingGameplayEvent<::CoordinatorResult>> event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
