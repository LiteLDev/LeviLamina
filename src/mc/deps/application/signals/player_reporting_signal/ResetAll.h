#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

namespace PlayerReportingSignal {

class ResetAll : public ::Bedrock::Signal<::PlayerReportingSignal::ResetAll, void> {
public:
    // prevent constructor by default
    ResetAll& operator=(ResetAll const&);
    ResetAll(ResetAll const&);
    ResetAll();
};

} // namespace PlayerReportingSignal
