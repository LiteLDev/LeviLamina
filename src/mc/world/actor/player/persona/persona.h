#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/persona/PieceType.h"
#include "mc/world/actor/player/persona/ProfileType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
namespace mce { class UUID; }
class UIPropertyBag;
namespace persona { struct DefaultAppearance; }
namespace persona { struct PackEvictionPass; }
namespace persona { struct PackEvictionState; }
namespace persona { struct PackEvictionTarget; }
namespace persona { struct PackEvictionTelemetrySnapshot; }
// clang-format on

namespace persona {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI void ParseProfileHashes(
    ::std::unordered_map<::persona::ProfileType, ::std::string>& updatedProfileHashes,
    ::Json::Value const&                                         response,
    ::std::string const&                                         objectName
);

MCNAPI ::mce::Color getPieceRarityColor(::UIPropertyBag const& bag, ::persona::Rarity pieceRarity);

MCNAPI ::persona::ProfileType parseProfileTypeFromHashKey(::std::string const& key);

MCNAPI ::persona::Rarity pieceRarityFromString(::std::string const& rarityTypeStr);
#endif

MCNAPI ::SharedTypes::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

#ifdef LL_PLAT_C
MCNAPI ::persona::PackEvictionTelemetrySnapshot
recordEvictionPass(::persona::PackEvictionPass const& pass, ::persona::PackEvictionState& state);

MCNAPI ::std::string stringFromPieceRarity(::persona::Rarity const& rarity);

MCNAPI ::std::string stringFromPieceRarityNotLocalized(::persona::Rarity const& rarity);

MCNAPI ::std::string const& stringFromPieceType(::SharedTypes::persona::PieceType assetType, bool isDefaultItem);

MCNAPI bool tryDeleteCachedPack(::persona::PackEvictionTarget const& target);

MCNAPI ::std::string ttsStringFromPieceType(::SharedTypes::persona::PieceType assetType, bool isDefaultItem);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
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

MCNAPI ::std::string const& DOWNLOAD_IMPORT_CANCELLED();

MCNAPI ::std::string const& DOWNLOAD_IMPORT_FAILED();

MCNAPI ::persona::DefaultAppearance const& INVALID_DEFAULT_APPEARANCE();

MCNAPI ::std::string const& INVALID_PERSONA();

MCNAPI ::std::string const& ITEM_SELECTION();

MCNAPI ::std::string const& LOADING_APPEARANCE_TIME_OUT();

MCNAPI ::std::string const& MINECRAFT_CREATOR_STR();

MCNAPI ::std::string const& MISSING_DOWNLOADER();

MCNAPI ::mce::UUID const& NONE_PIECE_ID();

MCNAPI ::std::string const& NO_ERROR_OCCURRED();

MCNAPI ::std::string const& PERSONA_LOD_CONTROLLER_THIRD_PERSON();

MCNAPI ::std::string const& PIECE_SIDE_BOTH_STR();

MCNAPI ::std::string const& PIECE_SIDE_LEFT_STR();

MCNAPI ::std::string const& PIECE_SIDE_RIGHT_STR();
#endif

MCNAPI ::std::string const&& PIECE_TYPE_ARMS_STR();

MCNAPI ::std::string const&& PIECE_TYPE_BACK_STR();

MCNAPI ::std::string const&& PIECE_TYPE_BODY_STR();

MCNAPI ::std::string const&& PIECE_TYPE_BOTTOM_STR();

MCNAPI ::std::string const&& PIECE_TYPE_CAPES_STR();

MCNAPI ::std::string const&& PIECE_TYPE_CLASSIC_SKIN_STR();

MCNAPI ::std::string const&& PIECE_TYPE_COCO_STR();

MCNAPI ::std::string const&& PIECE_TYPE_DRESS_STR();

MCNAPI ::std::string const&& PIECE_TYPE_EMOTE_STR();

MCNAPI ::std::string const&& PIECE_TYPE_EYES_STR();

MCNAPI ::std::string const&& PIECE_TYPE_FACE_ACCESSORY_STR();

MCNAPI ::std::string const&& PIECE_TYPE_FACIAL_HAIR_STR();

MCNAPI ::std::string const&& PIECE_TYPE_FEET_STR();

MCNAPI ::std::string const&& PIECE_TYPE_HAIR_STR();

MCNAPI ::std::string const&& PIECE_TYPE_HANDS_STR();

MCNAPI ::std::string const&& PIECE_TYPE_HEAD_STR();

MCNAPI ::std::string const&& PIECE_TYPE_HIGH_PANTS_STR();

MCNAPI ::std::string const&& PIECE_TYPE_HOOD_STR();

MCNAPI ::std::string const&& PIECE_TYPE_LEFT_ARM();

MCNAPI ::std::string const&& PIECE_TYPE_LEFT_LEG();

MCNAPI ::std::string const&& PIECE_TYPE_LEGS_STR();

MCNAPI ::std::string const&& PIECE_TYPE_MOUTH_STR();

MCNAPI ::std::string const&& PIECE_TYPE_OUTERWEAR_STR();

MCNAPI ::std::string const&& PIECE_TYPE_RIGHT_ARM();

MCNAPI ::std::string const&& PIECE_TYPE_RIGHT_LEG();

MCNAPI ::std::string const&& PIECE_TYPE_SKELETON_STR();

MCNAPI ::std::string const&& PIECE_TYPE_SKIN_STR();

MCNAPI ::std::string const&& PIECE_TYPE_TOP_STR();

MCNAPI ::std::string const&& PIECE_TYPE_UNKNOWN_DEFAULT_ITEM_STR();

MCNAPI ::std::string const&& PIECE_TYPE_UNKNOWN_STR();

MCNAPI ::std::string const&& PIECE_TYPE_UNSUPPORTED_STR();

#ifdef LL_PLAT_C
MCNAPI ::std::string const& RARITY_NONE();

MCNAPI ::std::unordered_map<::persona::Rarity, ::std::string> const& RarityToStringMap();
#endif

MCAPI ::std::unordered_map<::std::string, ::SharedTypes::persona::PieceType> const& StringToPieceTypeMap();

#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::HashedString, ::persona::Rarity> const& StringToRarityMap();

MCNAPI ::std::string_view const& UNKNOWN_TYPE_STR();

MCNAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
#endif
// NOLINTEND

} // namespace persona
