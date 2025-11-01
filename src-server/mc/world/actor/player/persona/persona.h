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

MCNAPI ::std::string const& NONE_PIECE_PATH();

MCNAPI ::HashedString const& USE_BLINKING_ANIMATION_VARIABLE();
// NOLINTEND

}
