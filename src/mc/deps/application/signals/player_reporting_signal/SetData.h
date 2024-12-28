#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

// auto generated forward declare list
// clang-format off
namespace PlayerReportingSignal { struct StringData; }
// clang-format on

namespace PlayerReportingSignal {

class SetData : public ::Bedrock::Signal<::PlayerReportingSignal::SetData, ::PlayerReportingSignal::StringData> {
public:
    // prevent constructor by default
    SetData& operator=(SetData const&);
    SetData(SetData const&);
    SetData();
};

} // namespace PlayerReportingSignal
