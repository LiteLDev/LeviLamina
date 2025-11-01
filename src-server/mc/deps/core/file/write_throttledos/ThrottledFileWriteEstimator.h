#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::WriteThrottledOS {

class ThrottledFileWriteEstimator {
public:
    // ThrottledFileWriteEstimator inner types declare
    // clang-format off
    struct WriteTimeEstimate;
    // clang-format on
    
    // ThrottledFileWriteEstimator inner types define
    struct WriteTimeEstimate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1ed76a;
        ::ll::UntypedStorage<8, 8> mUnk45cdca;
        ::ll::UntypedStorage<8, 8> mUnk9859d3;
        ::ll::UntypedStorage<1, 1> mUnkf4f881;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        WriteTimeEstimate& operator=(WriteTimeEstimate const&);
        WriteTimeEstimate(WriteTimeEstimate const&);
        WriteTimeEstimate();
    
    };
    
};

}
