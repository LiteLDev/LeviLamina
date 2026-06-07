#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PersonaError.h"
#include "mc/world/actor/player/persona/PieceSide.h"
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
MCAPI ::mce::Color colorFromPieceRarity(::persona::Rarity const& rarity);

MCAPI ::persona::PieceType getBothSidedPieceTypeFromSidePieceType(::persona::PieceType pieceType);

MCAPI ::persona::PieceType getOppositeSidePieceType(::persona::PieceType pieceType);

MCAPI ::std::string getPieceRarityBarTexture(::persona::Rarity pieceRarity);

MCAPI ::mce::Color getPieceRarityColor(::UIPropertyBag const& bag, ::persona::Rarity pieceRarity);

MCAPI ::persona::PieceSide getPieceSideFromPieceType(::persona::PieceType type);

MCAPI ::persona::PieceType getPieceTypeFromPieceSide(::persona::PieceSide pieceSide, ::persona::PieceType pieceType);

MCAPI bool isBothSidedPieceType(::persona::PieceType type);

MCAPI bool isPieceTypeEquipableWithClassicSkin(::persona::PieceType const& typeToCheck);

MCAPI bool isSidePieceType(::persona::PieceType type);

MCAPI bool isValidPieceType(::persona::PieceType const& typeToCheck);

MCAPI bool isValidProfileType(::persona::ProfileType const& typeToCheck);

MCAPI ::std::string_view legacystringViewFromProfileType(::persona::ProfileType profileType);

MCAPI ::persona::Rarity pieceRarityFromString(::std::string const& rarityTypeStr);
#endif

MCAPI ::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

#ifdef LL_PLAT_C
MCAPI ::persona::ProfileType profileTypeFromString(::std::string const& profileTypeStr);

MCAPI ::std::string const& stringFromPersonaError(::persona::PersonaError const& error);

MCAPI ::std::string stringFromPieceRarity(::persona::Rarity const& rarity);

MCAPI ::std::string stringFromPieceRarityNotLocalized(::persona::Rarity const& rarity);
#endif

MCAPI ::std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);

MCAPI ::std::string_view stringViewFromProfileType(::persona::ProfileType profileType);

#ifdef LL_PLAT_C
MCAPI ::std::string ttsStringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);

MCFOLD void verboseLog(::std::string const& logMessage);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::string const& ANIMATED_128X128_NAME();

MCAPI ::std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON();

MCAPI ::std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON();

MCAPI ::HashedString const& ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE();

#ifdef LL_PLAT_C
MCAPI ::std::string const& ANIMATED_32X32_NAME();
#endif

MCAPI ::std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON();

MCAPI ::std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON();

MCAPI ::HashedString const& ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE();

MCAPI ::std::string const& ANIMATED_FACE_CONTROLLER_FIRST_PERSON();

MCAPI ::std::string const& ANIMATED_FACE_CONTROLLER_THIRD_PERSON();

#ifdef LL_PLAT_C
MCAPI ::std::string const& ANIMATED_FACE_NAME();
#endif

MCAPI ::HashedString const& ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE();

MCAPI ::mce::UUID const& NONE_PIECE_ID();

MCAPI ::mce::UUID const& NO_PIECE_SELECTED();

#ifdef LL_PLAT_C
MCAPI uint const& RANDOM_DEFAULT_APPEARANCE_INDEX();
#endif

MCAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

} // namespace persona
