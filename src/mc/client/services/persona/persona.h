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
MCAPI extern std::string const ANIMATED_128X128_NAME;

MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;

MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;

MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;

MCAPI extern std::string const ANIMATED_32X32_NAME;

MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;

MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;

MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;

MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;

MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;

MCAPI extern std::string const ANIMATED_FACE_NAME;

MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;

MCAPI extern int const INVALID_INDEX;

MCAPI extern class mce::UUID const NONE_PIECE_ID;

MCAPI extern std::string const NONE_PIECE_PATH;

MCAPI extern class mce::UUID const NO_PIECE_SELECTED;

MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;

MCAPI ::persona::PieceType pieceTypeFromString(std::string const& assetTypeStr);

MCAPI std::string const& stringFromPieceType(::persona::PieceType, bool);
// NOLINTEND

}; // namespace persona
