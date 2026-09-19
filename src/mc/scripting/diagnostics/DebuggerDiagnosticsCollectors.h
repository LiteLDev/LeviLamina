#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DebuggerClientDiagnosticsListener;
class DebuggerStat;
namespace Editor { class IEditorManager; }
// clang-format on

class DebuggerDiagnosticsCollectors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 368> mUnk8a29f6;
    ::ll::UntypedStorage<8, 368> mUnka3fb85;
    ::ll::UntypedStorage<8, 368> mUnk9ddeb2;
    ::ll::UntypedStorage<8, 8>   mUnkbcba06;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerDiagnosticsCollectors& operator=(DebuggerDiagnosticsCollectors const&);
    DebuggerDiagnosticsCollectors(DebuggerDiagnosticsCollectors const&);
    DebuggerDiagnosticsCollectors();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DebuggerDiagnosticsCollectors(
        ::DebuggerClientDiagnosticsListener&                 clientDiagnostics,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );

    MCNAPI ::std::optional<::DebuggerStat> _collectClientStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::DebuggerStat> _collectMemoryStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::DebuggerStat>
    _collectNetworkStats(uint64 currentTick, uint64 lastCollectedTick, uint64 collectTickFrequency);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::DebuggerClientDiagnosticsListener&                 clientDiagnostics,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );
    // NOLINTEND
};
