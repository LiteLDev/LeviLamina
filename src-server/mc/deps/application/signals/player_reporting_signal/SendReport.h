#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/signal/Signal.h"

// auto generated forward declare list
// clang-format off
namespace PlayerReportingSignal { struct ReportFunctionData; }
// clang-format on

namespace PlayerReportingSignal {

class SendReport
: public ::Bedrock::Signal<::PlayerReportingSignal::SendReport, ::PlayerReportingSignal::ReportFunctionData> {};

} // namespace PlayerReportingSignal
