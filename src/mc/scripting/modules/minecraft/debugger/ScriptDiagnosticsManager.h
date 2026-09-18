#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleDebugUtilities { class ScriptDiagnosticsTab; }
namespace ScriptModuleDebugUtilities { class ScriptDiagnosticsViewChartOptions; }
namespace ScriptModuleDebugUtilities { class ScriptDiagnosticsViewTableOptions; }
namespace ScriptModuleDebugUtilities { class ScriptStat; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDiagnosticsManager {
public:
    // ScriptDiagnosticsManager inner types define
    using Key = int64;

    using ViewOptions = ::std::variant<
        ::ScriptModuleDebugUtilities::ScriptDiagnosticsViewChartOptions,
        ::ScriptModuleDebugUtilities::ScriptDiagnosticsViewTableOptions>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::ServerLevel const&>            mLevel;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsTab>>>
        mTabs;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDiagnosticsManager& operator=(ScriptDiagnosticsManager const&);
    ScriptDiagnosticsManager(ScriptDiagnosticsManager const&);
    ScriptDiagnosticsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addTab(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsTab> tab);

    MCAPI ::std::vector<::ScriptModuleDebugUtilities::ScriptStat> getAndClearPendingStats();

    MCAPI void removeTab(::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsTab> tab);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();

    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleDebugUtilities::ScriptDiagnosticsManager>
    getHandle(::Scripting::WeakLifetimeScope& scope, ::ServerLevel& level, bool shouldCreateIfNull);
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
