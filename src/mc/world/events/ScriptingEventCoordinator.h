#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

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
};
