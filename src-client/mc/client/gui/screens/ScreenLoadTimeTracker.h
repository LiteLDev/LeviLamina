#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class IUIEventTelemetry;
// clang-format on

class ScreenLoadTimeTracker : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                      mTaskGroup;
    ::ll::TypedStorage<8, 8, ::IUIEventTelemetry&>               mEventing;
    ::ll::TypedStorage<4, 4, uint>                               mUserId;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::Async<void>> mCurrentTracker;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenLoadTimeTracker& operator=(ScreenLoadTimeTracker const&);
    ScreenLoadTimeTracker(ScreenLoadTimeTracker const&);
    ScreenLoadTimeTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenLoadTimeTracker() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Bedrock::Threading::Async<void> _queueScreenLoadTimeTrackerTask(
        ::std::shared_ptr<::AbstractScene> newScreen,
        ::std::chrono::nanoseconds         initialDelay,
        ::std::chrono::nanoseconds         updateInterval
    );

    MCAPI void startLoadTimeTracking(::std::shared_ptr<::AbstractScene> pushedScene);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
