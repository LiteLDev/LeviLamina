#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/InteractionType.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
struct PlayerMessagingService;
// clang-format on

namespace PlayerMessaging {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::string interactionTypeToString(::PlayerMessaging::InteractionType type);

MCNAPI_C void
submitRequest(::std::shared_ptr<::HttpRequestHandler> request, ::PlayerMessagingService& messagingService);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI_C ::std::string const& BUTTON_ART_TEMPLATE_NAME();

MCNAPI_C ::std::string const& CATEGORY_INVITES();

MCNAPI ::std::string const& DEFAULT_BANNER_BG();

MCNAPI ::std::vector<int> const& DEFAULT_BANNER_NINESLICE();

MCNAPI ::std::string const& LOGIN_ANNOUNCEMENT_SURFACE_NAME();

MCNAPI ::std::string const& MARKETPLACE_ANNOUNCEMENT_SURFACE_NAME();

MCNAPI ::std::string const& MARKETPLACE_BUTTON_ART_SURFACE_NAME();

MCNAPI ::std::string const& MC_DISABLE_MESSAGINGSERVICE();

MCNAPI_C ::std::string const& PLAY_BUTTON_ART_SURFACE_NAME();

MCNAPI ::std::string const& SHOW_INVITATION_BADGE();

MCNAPI ::std::string const& SHOW_MESSAGE_BADGE();

MCNAPI_C ::std::string const& SYSTEM_WHISPER_SURFACE_NAME();

MCNAPI_C ::std::string const& TOAST_SURFACE_NAME();
// NOLINTEND

} // namespace PlayerMessaging
