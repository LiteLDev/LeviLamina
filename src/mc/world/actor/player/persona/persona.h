#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class Color; }
namespace mce { class UUID; }
struct UIPropertyBag;
// clang-format on

namespace persona {
// functions
// NOLINTBEGIN
MCAPI_C ::std::string getPieceRarityBarTexture(::persona::Rarity pieceRarity);

MCAPI_C ::mce::Color getPieceRarityColor(::UIPropertyBag const& bag, ::persona::Rarity pieceRarity);

MCAPI_C int getRandomJitter();

MCAPI_C ::persona::Rarity pieceRarityFromString(::std::string const& rarityTypeStr);

MCAPI ::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

MCAPI_C ::std::string stringFromPieceRarity(::persona::Rarity const& rarity);

MCAPI_C ::std::string stringFromPieceRarityNotLocalized(::persona::Rarity const& rarity);

MCAPI ::std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);

MCAPI_C ::std::string_view stringViewFromProfileType(::persona::ProfileType profileType);

MCAPI_C ::std::string ttsStringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& ANIMATED_128X128_NAME();

MCAPI ::std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON();

MCAPI ::std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON();

MCAPI ::HashedString const& ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE();

MCAPI ::std::string const& ANIMATED_32X32_NAME();

MCAPI ::std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON();

MCAPI ::std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON();

MCAPI ::HashedString const& ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE();

MCAPI ::std::string const& ANIMATED_FACE_CONTROLLER_FIRST_PERSON();

MCAPI ::std::string const& ANIMATED_FACE_CONTROLLER_THIRD_PERSON();

MCAPI ::std::string const& ANIMATED_FACE_NAME();

MCAPI ::HashedString const& ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE();

MCAPI_C ::mce::UUID const& NONE_PIECE_ID();

MCAPI ::std::string const& NONE_PIECE_PATH();

MCAPI_C uint const& RANDOM_DEFAULT_APPEARANCE_INDEX();

MCAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

} // namespace persona
