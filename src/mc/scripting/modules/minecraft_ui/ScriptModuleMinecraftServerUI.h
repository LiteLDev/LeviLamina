#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Json { class Value; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {
// functions
// NOLINTBEGIN
MCNAPI ::Scripting::EnumBinding bindScriptFormRejectReason();

MCNAPI ::Scripting::Result<::Json::Value, ::ScriptModuleMinecraft::ScriptRawMessageError> resolveRawMessageAsJson(
    ::Player&                                                                                player,
    ::CurrentCmdVersion                                                                      commandVersion,
    ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text
);
// NOLINTEND

} // namespace ScriptModuleMinecraftServerUI
