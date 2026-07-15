#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker::Diagnostics { struct ScopeDataSummary; }
// clang-format on

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 48, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
    ::ll::TypedStorage<8, 32, ::std::string>                                                             mPlayerName;
    // NOLINTEND
};
