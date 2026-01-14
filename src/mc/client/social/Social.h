#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
namespace Social { struct XboxLiveUserProfileData; }
namespace Social { struct PlayerProfileState; }
namespace cohtml { class Binder; }
// clang-format on

namespace Social {
// functions
// NOLINTBEGIN
MCNAPI_C void CoherentBind(::cohtml::Binder* binder, ::Social::PlayerProfileState* state);

MCNAPI_C ::std::string bedrockClientErrorToString(int errorCode);

MCNAPI_C bool isSignInError(::std::error_code const& code);

MCNAPI_C ::std::string playfabErrorToString(int errorCode);

MCNAPI_C ::Social::MultiplayerServiceIdentifier serviceIdentifierFromString(::std::string_view idString);

MCNAPI_C ::Bedrock::Threading::Async<::std::pair<::std::error_code, ::Social::XsapiHandle<::XUser*>>>
signInCompleteHelper(::XUser* user, long hr);

MCNAPI_C ::std::string xblErrorToString(int errorCode);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI_C uint const& BEDROCK_XBOXLIVE_ACTIVE_TITLEID();

MCNAPI_C ::std::vector<::std::string> const& BEDROCK_XBOXLIVE_ALL_SCIDS();

MCNAPI_C ::std::vector<uint> const& BEDROCK_XBOXLIVE_ALL_TITLEIDS();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_CLIENTID();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_REDIRECTURI();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_AMAZON_KINDLE();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_BERWICK();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_GOOGLE();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_IOS();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_IOS_PREVIEW();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_SWITCH();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_WIN();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_WIN_PREVIEW();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_XBOX();

MCNAPI_C ::std::string const& BEDROCK_XBOXLIVE_SCID_XBOX_PREVIEW();

MCNAPI ::Social::GameConnectionInfo const& INVALID_CONNECTION();

MCNAPI_C ::Social::XboxLiveUserProfileData& nullProfile();
// NOLINTEND

} // namespace Social
