#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core::WriteThrottledOS { class OSWriteThrottleTracker; }
// clang-format on

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

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Core::WriteThrottledOS::ThrottledFileWriteEstimator::WriteTimeEstimate getTimeToWrite(
        int                                                     recoverLeewayHintMb,
        ::Core::WriteThrottledOS::OSWriteThrottleTracker const& tracker,
        uint64                                                  size,
        ::std::optional<uint64>                                 startingBudget,
        ::std::optional<uint64>                                 maxWriteSpeedBytes,
        ::std::chrono::nanoseconds const&                       timeDiffbeforeImpacted,
        ::std::chrono::nanoseconds const&                       timeDiffbeforeImpactedWhileWaiting
    );
    // NOLINTEND
};

} // namespace Core::WriteThrottledOS
