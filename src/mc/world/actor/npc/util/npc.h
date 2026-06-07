#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/actor/npc/action_mode/Enum.h"

// auto generated forward declare list
// clang-format off
class Actor;
class NpcComponent;
class NpcRequestPacket;
class Player;
namespace Json { class Value; }
namespace npc { struct ActionContainer; }
namespace npc { struct CommandAction; }
namespace npc { struct StoredCommand; }
namespace npc { struct UrlAction; }
// clang-format on

namespace npc {
// functions
// NOLINTBEGIN
MCAPI void
fillCommands(::npc::CommandAction& cmd, ::std::vector<::std::string_view> const& src, ::CurrentCmdVersion ver);

MCAPI ::std::optional<::std::variant<::npc::CommandAction, ::npc::UrlAction>> fromJson(::Json::Value const& root);

#ifdef LL_PLAT_C
MCAPI ::npc::_ActionMode::Enum getActionMode(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI ::std::string_view getActionValue(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI ::std::string_view getButtonLabel(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI ::std::string_view getRawActionValue(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI ::std::string_view getRawButtonLabel(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);
#endif

MCAPI void
handlePacket(::Actor& owner, ::Player& initiator, ::NpcComponent& npcComp, ::NpcRequestPacket const& request);

MCFOLD bool hasCreatePermission(::Actor& initiator);

#ifdef LL_PLAT_C
MCFOLD bool hasEditPermission(::Actor& initiator);

MCAPI bool isButton(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI bool isCommand(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI bool isUrl(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI void
setActionMode(::std::variant<::npc::CommandAction, ::npc::UrlAction>& action, ::npc::_ActionMode::Enum value);

MCAPI void setActionValue(::std::variant<::npc::CommandAction, ::npc::UrlAction>& action, ::std::string_view value);

MCAPI void setButtonLabel(::std::variant<::npc::CommandAction, ::npc::UrlAction>& action, ::std::string_view value);
#endif

MCAPI ::Json::Value toJson(::npc::CommandAction const& action);

MCAPI ::Json::Value toJson(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);

MCAPI ::Json::Value toJson(::npc::StoredCommand const& cmd);

MCAPI ::Json::Value toJson(::npc::ActionContainer const& container);

MCAPI ::Json::Value toJson(::npc::UrlAction const& urlAction);

MCAPI ::std::string toString(::npc::ActionContainer const& container);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI char const& COMMAND_DELIMITER();

MCAPI ::CommandPermissionLevel const& COMMAND_PERMISSION();

#ifdef LL_PLAT_C
MCAPI uint64 const& MAX_NAME_LENGTH();

MCAPI uint64 const& UNUSED_ACTION_INDEX();
#endif
// NOLINTEND

} // namespace npc
