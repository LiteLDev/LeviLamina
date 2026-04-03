#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ScriptClientDiagnosticsListener;
class ScriptDiagnostics;
class ScriptPluginManager;
class ServerLevel;
namespace Editor { class IEditorManager; }
namespace Scripting { class DependencyLocator; }
// clang-format on

namespace ScriptDiagnosticsCollectors {
// functions
// NOLINTBEGIN
MCNAPI void AddScriptStatCollectors(
    ::ScriptDiagnostics&                                 diagnostics,
    ::ServerLevel&                                       serverLevel,
    ::ScriptPluginManager&                               pluginManager,
    ::ScriptClientDiagnosticsListener&                   clientDiagnostics,
    ::Scripting::DependencyLocator&                      locator,
    ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
);
// NOLINTEND

} // namespace ScriptDiagnosticsCollectors
