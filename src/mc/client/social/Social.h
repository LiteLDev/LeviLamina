#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Social { class GameConnectionInfo; }
namespace Social { class MultiplayerPlatformFactory; }
namespace Social { struct MultiplayerPlatformFactoryData; }
// clang-format on

namespace Social {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string bedrockClientErrorToString(int errorCode);

MCNAPI ::brstd::move_only_function<::std::unique_ptr<::Social::MultiplayerPlatformFactory>()>
createMultiplayerPlatformFactory(::Social::MultiplayerPlatformFactoryData&& data);
#endif

MCNAPI bool isValidDisplayNameCharacter(int utf32char);

MCNAPI bool minimalFilteredCharacter(int utf32char);

MCNAPI bool nintendoAllowedCharacter(int utf32char);

#ifdef LL_PLAT_C
MCNAPI ::std::string playfabErrorToString(int errorCode);
#endif

MCNAPI ::std::string
sanitizeDisplayName(::std::string_view input, uint64 maxLength, ::std::function<bool(int)> validCharFn);

#ifdef LL_PLAT_C
MCNAPI ::std::string xblErrorToString(int errorCode);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string const& BEDROCK_PLAYFAB_CSUB_DEVELOPMENT();

MCNAPI ::std::string const& BEDROCK_PLAYFAB_CSUB_PRODUCTION();

MCNAPI ::std::string const& BEDROCK_PLAYFAB_REALMS_PLUS_DEVELOPMENT();

MCNAPI ::std::string const& BEDROCK_PLAYFAB_REALMS_PLUS_PRODUCTION();

MCNAPI uint const& BEDROCK_XBOXLIVE_ACTIVE_TITLEID();

MCNAPI ::std::vector<::std::string> const& BEDROCK_XBOXLIVE_ALL_SCIDS();

MCNAPI ::std::vector<uint> const& BEDROCK_XBOXLIVE_ALL_TITLEIDS();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_CLIENTID();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_REDIRECTURI();

MCNAPI ::std::string const& BEDROCK_XBOXLIVE_SCID();
#endif

MCNAPI ::Social::GameConnectionInfo const& INVALID_CONNECTION();

#ifdef LL_PLAT_C
MCNAPI ::std::vector<::Social::MultiplayerServiceIdentifier> const& MOCK_ID();

MCNAPI ::std::string const& UNKNOWN_CATEGORY_ERROR_STRING();
#endif
// NOLINTEND

} // namespace Social
