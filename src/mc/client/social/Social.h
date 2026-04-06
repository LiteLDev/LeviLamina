#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/client/social/XsapiHandle.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
namespace Social { struct PlayerProfileState; }
namespace Social { struct XboxLiveUserProfileData; }
namespace cohtml { class Binder; }
// clang-format on

namespace Social {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void CoherentBind(::cohtml::Binder* binder, ::Social::PlayerProfileState* state);

MCNAPI ::std::string identityErrorToUserFacingString(::std::error_code error);

MCNAPI bool isSignInError(::std::error_code const& code);

MCNAPI ::Social::MultiplayerServiceIdentifier serviceIdentifierFromString(::std::string_view idString);

MCNAPI ::Bedrock::Threading::Async<::std::pair<::std::error_code, ::Social::XsapiHandle<::XUser*>>>
signInCompleteHelper(::XUser* user, long hr);
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
