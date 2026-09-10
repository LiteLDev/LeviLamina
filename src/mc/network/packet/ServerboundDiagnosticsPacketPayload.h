#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/profile/ScopeDataSummary.h"

// auto generated inclusion list
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker::Diagnostics { struct ScopeDataSummary; }
// clang-format on

struct ServerboundDiagnosticsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 80, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Profile::Whisker::Diagnostics::ScopeDataSummary>> mWhiskerData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ~ServerboundDiagnosticsPacketPayload();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
