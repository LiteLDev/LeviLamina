#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

// auto generated forward declare list
// clang-format off
namespace PlayerReportingSignal { struct GetReportJsonFunctionData; }
// clang-format on

namespace PlayerReportingSignal {

class GetReportJson
: public ::Bedrock::Signal<::PlayerReportingSignal::GetReportJson, ::PlayerReportingSignal::GetReportJsonFunctionData> {
public:
    // prevent constructor by default
    GetReportJson& operator=(GetReportJson const&);
    GetReportJson(GetReportJson const&);
    GetReportJson();
};

} // namespace PlayerReportingSignal
