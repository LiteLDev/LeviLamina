#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/ContextId.h"
#include "mc/deps/scripting/runtime/watchdog/WatchdogEventType.h"

namespace Scripting {

struct WatchdogEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Scripting::WatchdogEventType> mType;
    ::ll::TypedStorage<1, 1, ::Scripting::ContextId> mContextId;
    ::ll::TypedStorage<8, 32, ::std::string> mPhaseName;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> mTimeMs;
    ::ll::TypedStorage<8, 8, uint64> mMemoryUsageMB;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WatchdogEvent(::Scripting::WatchdogEventType eventType, ::Scripting::ContextId contextId, ::std::string phaseName, ::std::chrono::milliseconds timeMs, uint64 memoryUsageMB);

    MCAPI ~WatchdogEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::WatchdogEventType eventType, ::Scripting::ContextId contextId, ::std::string phaseName, ::std::chrono::milliseconds timeMs, uint64 memoryUsageMB);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
