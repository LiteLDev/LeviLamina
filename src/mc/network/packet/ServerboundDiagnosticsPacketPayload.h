#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/profiling/EntitySystemDiagnosticSummary.h"
#include "mc/profile/ProfilerLiteTelemetry.h"

struct ServerboundDiagnosticsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::ProfilerLiteTelemetry>                                      mTelemetry;
    ::ll::TypedStorage<8, 48, ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary> mEntitySystemDiagnostics;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerboundDiagnosticsPacketPayload& operator=(ServerboundDiagnosticsPacketPayload const&);
    ServerboundDiagnosticsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerboundDiagnosticsPacketPayload(::ServerboundDiagnosticsPacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI ServerboundDiagnosticsPacketPayload(
        ::ProfilerLiteTelemetry const&                               telemetry,
        ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary entitySystemDiagnostics
    );
#endif

    MCAPI ::ServerboundDiagnosticsPacketPayload& operator=(::ServerboundDiagnosticsPacketPayload&&);

    MCAPI ~ServerboundDiagnosticsPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ServerboundDiagnosticsPacketPayload const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ProfilerLiteTelemetry const&                               telemetry,
        ::ECS::Profiling::Diagnostics::EntitySystemDiagnosticSummary entitySystemDiagnostics
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
