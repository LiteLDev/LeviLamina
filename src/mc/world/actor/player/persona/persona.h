#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/player/persona/PieceType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace persona {
// functions
// NOLINTBEGIN
MCNAPI ::persona::PieceType pieceTypeFromString(::std::string const& assetTypeStr);

MCNAPI ::std::string const& stringFromPieceType(::persona::PieceType assetType, bool isDefaultItem);
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

MCAPI ::std::string const& NONE_PIECE_PATH();

MCAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

} // namespace persona
