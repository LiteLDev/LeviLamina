#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace npc { struct ActionContainer; }
namespace npc { struct CommandAction; }
namespace npc { struct UrlAction; }
// clang-format on

namespace npc {
// functions
// NOLINTBEGIN
MCAPI void
fillCommands(::npc::CommandAction& cmd, ::std::vector<::std::string_view> const& src, ::CurrentCmdVersion ver);

MCAPI ::std::optional<::std::variant<::npc::CommandAction, ::npc::UrlAction>> fromJson(::Json::Value const& root);

MCAPI ::Json::Value toJson(::npc::CommandAction const& action);

MCAPI ::Json::Value toJson(::npc::ActionContainer const& container);

MCAPI ::Json::Value toJson(::npc::UrlAction const& urlAction);

MCAPI ::std::string toString(::npc::ActionContainer const& container);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI char const& COMMAND_DELIMITER();

MCAPI ::CommandPermissionLevel const& COMMAND_PERMISSION();

MCAPI uint64 const& MAX_NAME_LENGTH();
// NOLINTEND

} // namespace npc
