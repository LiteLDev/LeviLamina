#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/diagnostics/DebuggerDiagnosticsView.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleDebugUtilities { class ScriptStat; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDiagnosticsView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel const&>                                     mLevel;
    ::ll::TypedStorage<8, 344, ::DebuggerDiagnosticsView>                              mData;
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleDebugUtilities::ScriptStat>> mPendingStats;
    ::ll::TypedStorage<8, 8, uint64>                                                   mLastPushTick;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsView& operator=(ScriptDiagnosticsView const&);
    ScriptDiagnosticsView(ScriptDiagnosticsView const&);
    ScriptDiagnosticsView();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::DebuggerDiagnosticsView createTabData(::std::string_view tabName) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
