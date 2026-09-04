#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class Actor;
class NpcComponent;
class NpcRequestPacket;
class Player;
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

#ifdef LL_PLAT_C
MCAPI ::std::string_view getRawButtonLabel(::std::variant<::npc::CommandAction, ::npc::UrlAction> const& action);
#endif

MCAPI void
handlePacket(::Actor& owner, ::Player& initiator, ::NpcComponent& npcComp, ::NpcRequestPacket const& request);

#ifdef LL_PLAT_C
MCAPI void setActionValue(::std::variant<::npc::CommandAction, ::npc::UrlAction>& action, ::std::string_view value);

MCAPI void setButtonLabel(::std::variant<::npc::CommandAction, ::npc::UrlAction>& action, ::std::string_view value);
#endif

MCAPI ::Json::Value toJson(::npc::CommandAction const& action);

MCAPI ::Json::Value toJson(::npc::ActionContainer const& container);

MCAPI ::Json::Value toJson(::npc::UrlAction const& urlAction);
// NOLINTEND

} // namespace npc
