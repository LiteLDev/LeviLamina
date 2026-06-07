#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/identity/PlayFabStatus.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/identity/SignInResult.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
namespace cohtml { class Binder; }
namespace Social { class MultiplayerPlatformFactory; }
namespace Social { struct MultiIdentitySigninResult; }
namespace Social { struct MultiplayerPlatformFactoryData; }
namespace Social { struct PlayerProfileState; }
namespace Social { struct XboxLiveUserProfileData; }
// clang-format on

namespace Social {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void CoherentBind(::cohtml::Binder* binder, ::Social::PlayerProfileState* state);

MCNAPI ::std::string bedrockClientErrorToString(int errorCode);

MCNAPI ::brstd::move_only_function<::std::unique_ptr<::Social::MultiplayerPlatformFactory>()>
createMultiplayerPlatformFactory(::Social::MultiplayerPlatformFactoryData&& data);

MCNAPI ::Social::SignInResult getResultFromErrorCode(::std::error_code const& code);

MCNAPI ::std::string identityErrorToUserFacingString(::Social::MultiIdentitySigninResult const& errorResult);

MCNAPI ::std::error_code make_error_code(::Social::PlayFabStatus e);

MCNAPI ::std::error_condition make_error_condition(::Social::SignInResult e);

MCNAPI ::std::string playfabErrorToString(int errorCode);

MCNAPI ::Social::MultiplayerServiceIdentifier serviceIdentifierFromString(::std::string_view idString);

MCNAPI char const* serviceIdentifierToString(::Social::MultiplayerServiceIdentifier id);

MCNAPI ::Bedrock::Threading::Async<::std::pair<::std::error_code, ::Social::XsapiHandle<::XUser*>>>
signInCompleteHelper(::XUser* user, long hr);

MCNAPI ::std::string xblErrorToString(int errorCode);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI uint const& BEDROCK_XBOXLIVE_ACTIVE_TITLEID();

MCNAPI ::std::vector<::std::string> const& BEDROCK_XBOXLIVE_ALL_SCIDS();

MCNAPI ::std::vector<uint> const& BEDROCK_XBOXLIVE_ALL_TITLEIDS();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_CLIENTID();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_REDIRECTURI();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_AMAZON_KINDLE();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_BERWICK();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_GOOGLE();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_IOS();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_IOS_PREVIEW();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_SWITCH();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_WIN();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_WIN_PREVIEW();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_XBOX();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID_XBOX_PREVIEW();
#endif

MCNAPI ::Social::GameConnectionInfo const& INVALID_CONNECTION();

#ifdef LL_PLAT_C
MCNAPI ::Social::XboxLiveUserProfileData& nullProfile();
#endif
// NOLINTEND

} // namespace Social
