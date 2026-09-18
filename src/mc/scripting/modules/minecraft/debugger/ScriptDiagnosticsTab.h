#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleDebugUtilities { class ScriptDiagnosticsView; }
namespace ScriptModuleDebugUtilities { class ScriptStat; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDiagnosticsTab {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::ServerLevel const&>            mLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                  mName;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsView>>>
        mViews;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsTab& operator=(ScriptDiagnosticsTab const&);
    ScriptDiagnosticsTab(ScriptDiagnosticsTab const&);
    ScriptDiagnosticsTab();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addView(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsView> view);

    MCAPI ::std::vector<::ScriptModuleDebugUtilities::ScriptStat> getAndClearPendingStats();

    MCAPI void
    removeView(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsView> view);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
