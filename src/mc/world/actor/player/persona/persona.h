#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class UIPropertyBag;
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace persona {
// functions
// NOLINTBEGIN
MCNAPI_C ::std::string getPieceRarityBarTexture(::persona::Rarity pieceRarity);

MCNAPI_C ::mce::Color getPieceRarityColor(::UIPropertyBag const& bag, ::persona::Rarity pieceRarity);

MCNAPI_C int getRandomJitter();

MCNAPI_C ::persona::Rarity pieceRarityFromString(::std::string const& rarityTypeStr);

MCNAPI ::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

MCNAPI_C ::std::string stringFromPieceRarity(::persona::Rarity const& rarity);

MCNAPI ::std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);

MCNAPI_C ::std::string_view stringViewFromProfileType(::persona::ProfileType profileType);

MCNAPI_C ::std::string ttsStringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::string const& ANIMATED_128X128_NAME();

MCNAPI ::std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON();

MCNAPI ::std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON();

MCNAPI ::HashedString const& ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE();

MCNAPI ::std::string const& ANIMATED_32X32_NAME();

MCNAPI ::std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON();

MCNAPI ::std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON();

MCNAPI ::HashedString const& ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE();

MCNAPI ::std::string const& ANIMATED_FACE_CONTROLLER_FIRST_PERSON();

MCNAPI ::std::string const& ANIMATED_FACE_CONTROLLER_THIRD_PERSON();

MCNAPI ::std::string const& ANIMATED_FACE_NAME();

MCNAPI ::HashedString const& ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE();

MCNAPI_C ::mce::UUID const& NONE_PIECE_ID();

MCNAPI ::std::string const& NONE_PIECE_PATH();

MCNAPI_C uint const& RANDOM_DEFAULT_APPEARANCE_INDEX();

MCNAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

} // namespace persona
