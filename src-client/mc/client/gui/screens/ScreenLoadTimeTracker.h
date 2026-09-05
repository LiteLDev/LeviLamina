#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
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
    virtual ~ScreenLoadTimeTracker() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenLoadTimeTracker(::IUIEventTelemetry& eventing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IUIEventTelemetry& eventing);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
