#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

// auto generated forward declare list
// clang-format off
class ServerboundDiagnosticsPacket;
// clang-format on

struct DiagnosticsEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 48, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mPlayerName;
    // NOLINTEND

public:
    // prevent constructor by default
    DiagnosticsEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DiagnosticsEvent(::ServerboundDiagnosticsPacket const& packet, ::std::string const& playerName);

    MCAPI ~DiagnosticsEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerboundDiagnosticsPacket const& packet, ::std::string const& playerName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
