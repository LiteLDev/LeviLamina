#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace mce { class Color; }
namespace mce { class UUID; }
class UIPropertyBag;
// clang-format on

namespace persona {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::std::string getPieceRarityBarTexture(::persona::Rarity pieceRarity);

MCAPI ::mce::Color getPieceRarityColor(::UIPropertyBag const& bag, ::persona::Rarity pieceRarity);

MCAPI ::persona::Rarity pieceRarityFromString(::std::string const& rarityTypeStr);
#endif

MCAPI ::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

#ifdef LL_PLAT_C
MCAPI ::std::string const& stringFromPersonaError(::persona::PersonaError const& error);

MCAPI ::std::string stringFromPieceRarity(::persona::Rarity const& rarity);
#endif

MCAPI ::std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);

#ifdef LL_PLAT_C
MCAPI ::std::string_view stringViewFromProfileType(::persona::ProfileType profileType);

MCAPI ::std::string ttsStringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);
#endif
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

#ifdef LL_PLAT_C
MCAPI ::mce::UUID const& NONE_PIECE_ID();
#endif

MCAPI ::std::string const& NONE_PIECE_PATH();

#ifdef LL_PLAT_C
MCAPI ::std::string const& PIECE_SIDE_LEFT_STR();

MCAPI ::std::string const& PIECE_SIDE_RIGHT_STR();

MCAPI uint const& RANDOM_DEFAULT_APPEARANCE_INDEX();
#endif

MCAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

} // namespace persona
