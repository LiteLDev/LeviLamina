#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistDataRegistryComponent;
namespace ScriptModuleMinecraft { struct ScriptNamespaceNameError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft::ScriptAimAssistRegistryInternal {
// functions
// NOLINTBEGIN
MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptNamespaceNameError, ::Scripting::InvalidArgumentError>
validateCategoryId(::CameraAimAssistDataRegistryComponent const& aimAssistRegistry, ::std::string const& categoryId);
// NOLINTEND

} // namespace ScriptModuleMinecraft::ScriptAimAssistRegistryInternal
