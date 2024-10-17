#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/ArmSize.h"
#include "mc/world/actor/player/persona/BodySize.h"
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class UUID; }
namespace persona { struct PersonaCharacterHandle; }
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {
// NOLINTBEGIN
MCAPI ::persona::PieceType pieceTypeFromString(std::string const& assetTypeStr);

MCAPI std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);
// NOLINTEND

// thunks
// NOLINTBEGIN
MCAPI std::string const& ANIMATED_128X128_NAME();

MCAPI std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON();

MCAPI std::string const& ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON();

MCAPI class HashedString const& ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE();

MCAPI std::string const& ANIMATED_32X32_NAME();

MCAPI std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON();

MCAPI std::string const& ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON();

MCAPI class HashedString const& ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE();

MCAPI std::string const& ANIMATED_FACE_CONTROLLER_FIRST_PERSON();

MCAPI std::string const& ANIMATED_FACE_CONTROLLER_THIRD_PERSON();

MCAPI std::string const& ANIMATED_FACE_NAME();

MCAPI class HashedString const& ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE();

MCAPI int const& INVALID_INDEX();

MCAPI class mce::UUID const& NONE_PIECE_ID();

MCAPI std::string const& NONE_PIECE_PATH();

MCAPI class mce::UUID const& NO_PIECE_SELECTED();

MCAPI class HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

}; // namespace persona
