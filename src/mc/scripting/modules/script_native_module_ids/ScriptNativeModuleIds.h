#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptNativeModuleIds { struct Environment; }
namespace mce { class UUID; }
// clang-format on

namespace ScriptNativeModuleIds {
// functions
// NOLINTBEGIN
MCNAPI ::std::array<::mce::UUID, 10>
getAll(::ScriptNativeModuleIds::Environment const& environment, ::mce::UUID const& missing);

MCNAPI ::mce::UUID getScriptDebugUtilities();

MCNAPI ::mce::UUID getScriptDiagnostics();

MCNAPI ::mce::UUID getScriptGameTest();

MCNAPI ::mce::UUID getScriptMinecraft();

#ifdef LL_PLAT_C
MCNAPI ::mce::UUID getScriptMinecraftClient();
#endif
// NOLINTEND

} // namespace ScriptNativeModuleIds
