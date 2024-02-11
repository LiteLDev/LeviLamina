#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/persona/ArmSize.h"
#include "mc/client/services/persona/BodySize.h"
#include "mc/client/services/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {
// NOLINTBEGIN
// symbol: ?ANIMATED_128X128_NAME@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_128X128_NAME;

// symbol:
// ?ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;

// symbol:
// ?ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;

// symbol: ?ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE@persona@@3VHashedString@@B
MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;

// symbol: ?ANIMATED_32X32_NAME@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_32X32_NAME;

// symbol:
// ?ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;

// symbol:
// ?ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;

// symbol: ?ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE@persona@@3VHashedString@@B
MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;

// symbol:
// ?ANIMATED_FACE_CONTROLLER_FIRST_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;

// symbol:
// ?ANIMATED_FACE_CONTROLLER_THIRD_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;

// symbol: ?ANIMATED_FACE_NAME@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const ANIMATED_FACE_NAME;

// symbol: ?ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE@persona@@3VHashedString@@B
MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;

// symbol: ?INVALID_INDEX@persona@@3HB
MCAPI extern int const INVALID_INDEX;

// symbol: ?NONE_PIECE_ID@persona@@3VUUID@mce@@B
MCAPI extern class mce::UUID const NONE_PIECE_ID;

// symbol: ?NONE_PIECE_PATH@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
MCAPI extern std::string const NONE_PIECE_PATH;

// symbol: ?NO_PIECE_SELECTED@persona@@3VUUID@mce@@B
MCAPI extern class mce::UUID const NO_PIECE_SELECTED;

// symbol: ?USE_BLINKING_ANIMATION_VARIABLE@persona@@3VHashedString@@B
MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;

// symbol:
// ?pieceTypeFromString@persona@@YA?AW4PieceType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI ::persona::PieceType pieceTypeFromString(std::string const& assetTypeStr);

// symbol:
// ?stringFromPieceType@persona@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PieceType@1@_N@Z
MCAPI std::string const& stringFromPieceType(::persona::PieceType, bool);
// NOLINTEND

}; // namespace persona
