#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/AppPlatformListener.h"

class SuspendResumeTracker : public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk40b50e;
    // NOLINTEND

public:
    // prevent constructor by default
    SuspendResumeTracker& operator=(SuspendResumeTracker const&);
    SuspendResumeTracker(SuspendResumeTracker const&);
    SuspendResumeTracker();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void onAppResumed() /*override*/;

    // vIndex: 0
    virtual ~SuspendResumeTracker() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void invalidateThreadIndex();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::SuspendResumeTracker>& mInstance();

    MCNAPI static ::std::recursive_mutex& mMutex();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppResumed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
