#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
namespace persona { enum class PieceType; }
// clang-format on

namespace persona {
/**
 * @symbol
 * ?ANIMATED_128X128_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_128X128_NAME; // NOLINT
/**
 * @symbol
 * ?ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON; // NOLINT
/**
 * @symbol
 * ?ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON; // NOLINT
/**
 * @symbol ?ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE; // NOLINT
/**
 * @symbol ?ANIMATED_32X32_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_32X32_NAME; // NOLINT
/**
 * @symbol
 * ?ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON; // NOLINT
/**
 * @symbol
 * ?ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON; // NOLINT
/**
 * @symbol ?ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE; // NOLINT
/**
 * @symbol
 * ?ANIMATED_FACE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON; // NOLINT
/**
 * @symbol
 * ?ANIMATED_FACE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON; // NOLINT
/**
 * @symbol ?ANIMATED_FACE_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_FACE_NAME; // NOLINT
/**
 * @symbol ?ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE; // NOLINT
/**
 * @symbol ?INVALID_INDEX\@persona\@\@3HB
 */
MCAPI extern int const INVALID_INDEX; // NOLINT
/**
 * @symbol ?NONE_PIECE_ID\@persona\@\@3VUUID\@mce\@\@B
 */
MCAPI extern class mce::UUID const NONE_PIECE_ID; // NOLINT
/**
 * @symbol ?NONE_PIECE_PATH\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const NONE_PIECE_PATH; // NOLINT
/**
 * @symbol ?NO_PIECE_SELECTED\@persona\@\@3VUUID\@mce\@\@B
 */
MCAPI extern class mce::UUID const NO_PIECE_SELECTED; // NOLINT
/**
 * @symbol ?USE_BLINKING_ANIMATION_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE; // NOLINT
/**
 * @symbol
 * ?pieceTypeFromString\@persona\@\@YA?AW4PieceType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI enum class persona::PieceType pieceTypeFromString(std::string const&); // NOLINT
/**
 * @symbol
 * ?stringFromPieceType\@persona\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PieceType\@1\@_N\@Z
 */
MCAPI std::string const& stringFromPieceType(enum class persona::PieceType, bool); // NOLINT

}; // namespace persona
