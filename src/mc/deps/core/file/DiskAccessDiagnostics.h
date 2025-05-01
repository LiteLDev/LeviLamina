#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class DiskAccessDiagnostics {
public:
    // DiskAccessDiagnostics inner types declare
    // clang-format off
    struct WriteBudgetHistoryEntry;
    struct WriteBudgetTelemetryPeriodState;
    // clang-format on

    // DiskAccessDiagnostics inner types define
    struct WriteBudgetTelemetryPeriodState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk799b8c;
        ::ll::UntypedStorage<8, 16> mUnk1c787a;
        ::ll::UntypedStorage<8, 16> mUnkcca2d0;
        ::ll::UntypedStorage<8, 8>  mUnk23685b;
        ::ll::UntypedStorage<8, 32> mUnk60afcc;
        ::ll::UntypedStorage<8, 16> mUnk268eb0;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteBudgetTelemetryPeriodState& operator=(WriteBudgetTelemetryPeriodState const&);
        WriteBudgetTelemetryPeriodState(WriteBudgetTelemetryPeriodState const&);
        WriteBudgetTelemetryPeriodState();
    };

    struct WriteBudgetHistoryEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk5ccd86;
        ::ll::UntypedStorage<8, 8> mUnk9efbce;
        // NOLINTEND

    public:
        // prevent constructor by default
        WriteBudgetHistoryEntry& operator=(WriteBudgetHistoryEntry const&);
        WriteBudgetHistoryEntry(WriteBudgetHistoryEntry const&);
        WriteBudgetHistoryEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkd9cddd;
    ::ll::UntypedStorage<8, 8>   mUnka49009;
    ::ll::UntypedStorage<8, 8>   mUnkf40863;
    ::ll::UntypedStorage<8, 8>   mUnk290b2b;
    ::ll::UntypedStorage<8, 8>   mUnk86b77f;
    ::ll::UntypedStorage<1, 1>   mUnk827706;
    ::ll::UntypedStorage<8, 64>  mUnk45a94f;
    ::ll::UntypedStorage<8, 64>  mUnkc1ff5a;
    ::ll::UntypedStorage<8, 64>  mUnk76de62;
    ::ll::UntypedStorage<8, 16>  mUnk3728ac;
    ::ll::UntypedStorage<8, 40>  mUnk84f09b;
    ::ll::UntypedStorage<8, 104> mUnk62d933;
    // NOLINTEND

public:
    // prevent constructor by default
    DiskAccessDiagnostics& operator=(DiskAccessDiagnostics const&);
    DiskAccessDiagnostics(DiskAccessDiagnostics const&);
    DiskAccessDiagnostics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DiskAccessDiagnostics();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
