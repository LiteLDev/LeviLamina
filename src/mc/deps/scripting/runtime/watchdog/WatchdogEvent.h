#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/watchdog/WatchdogEventType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

struct WatchdogEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka61f79;
    ::ll::UntypedStorage<1, 1>  mUnk2ce2d5;
    ::ll::UntypedStorage<8, 32> mUnk7e6484;
    ::ll::UntypedStorage<8, 8>  mUnk636071;
    ::ll::UntypedStorage<8, 8>  mUnkff37ad;
    // NOLINTEND

public:
    // prevent constructor by default
    WatchdogEvent& operator=(WatchdogEvent const&);
    WatchdogEvent(WatchdogEvent const&);
    WatchdogEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WatchdogEvent(
        ::Scripting::WatchdogEventType eventType,
        ::Scripting::ContextId         contextId,
        ::std::string                  phaseName,
        ::std::chrono::milliseconds    timeMs,
        uint64                         memoryUsageMB
    );

    MCAPI ~WatchdogEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WatchdogEventType eventType,
        ::Scripting::ContextId         contextId,
        ::std::string                  phaseName,
        ::std::chrono::milliseconds    timeMs,
        uint64                         memoryUsageMB
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
