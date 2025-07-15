#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::trace_event_internal {

class TraceEndOnScopeClose {
public:
    // TraceEndOnScopeClose inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // TraceEndOnScopeClose inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk52b8a9;
        ::ll::UntypedStorage<8, 8> mUnk9325fe;
        // NOLINTEND

    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk34de20;
    ::ll::UntypedStorage<8, 16> mUnk94d9d8;
    // NOLINTEND

public:
    // prevent constructor by default
    TraceEndOnScopeClose& operator=(TraceEndOnScopeClose const&);
    TraceEndOnScopeClose(TraceEndOnScopeClose const&);
    TraceEndOnScopeClose();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TraceEndOnScopeClose();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::trace_event_internal
