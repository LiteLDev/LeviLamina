#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::API { class EditorExtensionServiceProvider; }
// clang-format on

namespace Editor::API {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::Result_deprecated<::Editor::API::EditorExtensionServiceProvider*>
_getExtensionService(::Editor::ServiceProviderCollection&);

MCNAPI ::Scripting::Result_deprecated<void>
validateIdNamespaceForScriptPack(::std::string const& moduleUUID, ::std::string const& id);
// NOLINTEND

} // namespace Editor::API
