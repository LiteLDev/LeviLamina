#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/player/persona/PieceType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
class UIPropertyBag;
namespace persona { struct DefaultAppearance; }
// clang-format on

namespace persona {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::mce::Color getPieceRarityColor(::UIPropertyBag const& bag, ::persona::Rarity pieceRarity);

MCAPI ::persona::Rarity pieceRarityFromString(::std::string const& rarityTypeStr);
#endif

MCAPI ::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

#ifdef LL_PLAT_C
MCAPI ::std::string stringFromPieceRarity(::persona::Rarity const& rarity);

MCAPI ::std::string stringFromPieceRarityNotLocalized(::persona::Rarity const& rarity);
#endif

MCAPI ::std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);

#ifdef LL_PLAT_C
MCAPI ::std::string ttsStringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
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

MCAPI ::std::string const& DOWNLOAD_IMPORT_CANCELLED();

MCAPI ::std::string const& DOWNLOAD_IMPORT_FAILED();

MCAPI ::persona::DefaultAppearance const& INVALID_DEFAULT_APPEARANCE();

MCAPI ::std::string const& INVALID_PERSONA();

MCAPI ::std::string const& ITEM_SELECTION();

MCAPI ::std::string const& LOADING_APPEARANCE_TIME_OUT();

MCAPI ::std::string const& MINECRAFT_CREATOR_STR();

MCAPI ::std::string const& MISSING_DOWNLOADER();

MCAPI ::mce::UUID const& NONE_PIECE_ID();

MCAPI ::std::string const& NO_ERROR_OCCURRED();

MCAPI ::std::string const& PIECE_SIDE_LEFT_STR();

MCAPI ::std::string const& PIECE_SIDE_RIGHT_STR();

MCAPI ::std::string const&& PIECE_TYPE_ARMS_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_ARMS_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_BACK_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_BACK_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_BODY_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_BODY_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_BOTTOM_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_BOTTOM_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_CAPES_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_CAPES_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_CLASSIC_SKIN_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_CLASSIC_SKIN_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_DRESS_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_DRESS_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_EMOTE_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_EMOTE_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_EYES_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_EYES_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_FACE_ACCESSORY_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_FACE_ACCESSORY_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_FACIAL_HAIR_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_FACIAL_HAIR_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_FEET_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_FEET_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_HAIR_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_HAIR_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_HANDS_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_HANDS_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_HEAD_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_HEAD_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_HIGH_PANTS_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_HIGH_PANTS_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_HOOD_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_HOOD_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_LEFT_ARM();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_LEFT_ARM();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_LEFT_LEG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_LEFT_LEG();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_LEGS_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_LEGS_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_MOUTH_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_MOUTH_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_OUTERWEAR_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_OUTERWEAR_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_RIGHT_ARM();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_RIGHT_ARM();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_RIGHT_LEG();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_RIGHT_LEG();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_SKELETON_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_SKELETON_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_SKIN_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_SKIN_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_TOP_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_TOP_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_UNKNOWN_DEFAULT_ITEM_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_UNKNOWN_DEFAULT_ITEM_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_UNKNOWN_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_UNKNOWN_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const&& PIECE_TYPE_UNSUPPORTED_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string const&& PIECE_TYPE_UNSUPPORTED_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::string const& RARITY_NONE();

MCAPI ::std::unordered_map<::persona::Rarity, ::std::string> const& RarityToStringMap();

MCAPI ::std::unordered_map<::std::string, ::persona::PieceType> const& StringToPieceTypeMap();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::unordered_map<::std::string, ::persona::PieceType> const& StringToPieceTypeMap();
#endif

#ifdef LL_PLAT_C
MCAPI ::std::unordered_map<::HashedString, ::persona::Rarity> const& StringToRarityMap();

MCAPI ::std::string_view const& UNKNOWN_TYPE_STR();
#endif

#ifdef LL_PLAT_S
MCAPI ::std::string_view const& UNKNOWN_TYPE_STR();
#endif

#ifdef LL_PLAT_C
MCAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
#endif
// NOLINTEND

} // namespace persona
