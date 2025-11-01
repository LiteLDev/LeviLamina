#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::trace_event_internal {

class TraceID {
public:
    // TraceID inner types declare
    // clang-format off
    class ForceMangle;
    // clang-format on
    
    // TraceID inner types define
    class ForceMangle {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk225eff;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ForceMangle& operator=(ForceMangle const&);
        ForceMangle(ForceMangle const&);
        ForceMangle();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkea1b75;
    // NOLINTEND

public:
    // prevent constructor by default
    TraceID& operator=(TraceID const&);
    TraceID(TraceID const&);
    TraceID();

};

}
