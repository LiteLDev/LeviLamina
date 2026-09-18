#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class DebuggerDiagnosticsView;
class IDebuggerStatPublisher;
// clang-format on

class DebuggerDiagnostics : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk65ea3d;
    ::ll::UntypedStorage<8, 48> mUnk422a88;
    ::ll::UntypedStorage<8, 48> mUnk580697;
    ::ll::UntypedStorage<8, 48> mUnkd3b79e;
    ::ll::UntypedStorage<8, 24> mUnk7fcfb4;
    ::ll::UntypedStorage<8, 24> mUnk5a6563;
    ::ll::UntypedStorage<8, 24> mUnk59fec2;
    ::ll::UntypedStorage<1, 1>  mUnk866d0f;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerDiagnostics& operator=(DebuggerDiagnostics const&);
    DebuggerDiagnostics(DebuggerDiagnostics const&);
    DebuggerDiagnostics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DebuggerDiagnostics() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPlaceholderTabView(::std::string_view tabName);

    MCNAPI void addView(::DebuggerDiagnosticsView view);

    MCNAPI void collectStats(uint64 currentTick);

    MCNAPI void removePlaceholderTabView(::std::string_view tabName);

    MCNAPI void removeTabViews(::std::string_view tabName);

    MCNAPI void removeView(::DebuggerDiagnosticsView const& view);

    MCNAPI void sendViews();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
