#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct InboxSummaryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2de992;
    ::ll::UntypedStorage<8, 16> mUnk906881;
    ::ll::UntypedStorage<8, 8>  mUnk861a0d;
    ::ll::UntypedStorage<8, 8>  mUnk56b48d;
    ::ll::UntypedStorage<1, 1>  mUnkffded2;
    ::ll::UntypedStorage<1, 1>  mUnkf4e4d7;
    ::ll::UntypedStorage<1, 1>  mUnk5b2a59;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxSummaryData& operator=(InboxSummaryData const&);
    InboxSummaryData(InboxSummaryData const&);
    InboxSummaryData();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
