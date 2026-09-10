#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptClientDiagnosticsListener;
class ScriptStat;
namespace Editor { class IEditorManager; }
// clang-format on

class ScriptDiagnosticsCollectors {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 368> mUnkd24054;
    ::ll::UntypedStorage<8, 368> mUnkba40b9;
    ::ll::UntypedStorage<8, 368> mUnkffcc92;
    ::ll::UntypedStorage<8, 8>   mUnk847b91;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsCollectors& operator=(ScriptDiagnosticsCollectors const&);
    ScriptDiagnosticsCollectors(ScriptDiagnosticsCollectors const&);
    ScriptDiagnosticsCollectors();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDiagnosticsCollectors(
        ::ScriptClientDiagnosticsListener&                   clientDiagnostics,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );

    MCNAPI ::std::optional<::ScriptStat> _collectClientStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat> _collectMemoryStats(uint64, uint64, uint64);

    MCNAPI ::std::optional<::ScriptStat>
    _collectNetworkStats(uint64 currentTick, uint64 lastCollectedTick, uint64 collectTickFrequency);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ScriptClientDiagnosticsListener&                   clientDiagnostics,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );
    // NOLINTEND
};
