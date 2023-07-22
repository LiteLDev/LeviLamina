/**
 * @file  persona.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace persona.
 *
 */
namespace persona {

#define AFTER_EXTRA
// Add Member There
enum class AnimatedTextureType;
enum class PieceType;

#undef AFTER_EXTRA
    /**
     * @symbol  ?ANIMATED_128X128_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_128X128_NAME;
    /**
     * @symbol  ?ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;
    /**
     * @symbol  ?ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;
    /**
     * @symbol  ?ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;
    /**
     * @symbol  ?ANIMATED_32X32_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_32X32_NAME;
    /**
     * @symbol  ?ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;
    /**
     * @symbol  ?ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;
    /**
     * @symbol  ?ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;
    /**
     * @symbol  ?ANIMATED_FACE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;
    /**
     * @symbol  ?ANIMATED_FACE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;
    /**
     * @symbol  ?ANIMATED_FACE_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_FACE_NAME;
    /**
     * @symbol  ?ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;
    /**
     * @symbol  ?INVALID_INDEX\@persona\@\@3HB
     */
    MCAPI extern int const INVALID_INDEX;
    /**
     * @symbol  ?NONE_PIECE_ID\@persona\@\@3VUUID\@mce\@\@B
     */
    MCAPI extern class mce::UUID const NONE_PIECE_ID;
    /**
     * @symbol  ?NONE_PIECE_PATH\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const NONE_PIECE_PATH;
    /**
     * @symbol  ?NO_PIECE_SELECTED\@persona\@\@3VUUID\@mce\@\@B
     */
    MCAPI extern class mce::UUID const NO_PIECE_SELECTED;
    /**
     * @symbol  ?USE_BLINKING_ANIMATION_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;
    /**
     * @symbol  ?pieceTypeFromString\@persona\@\@YA?AW4PieceType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class persona::PieceType pieceTypeFromString(std::string const &);
    /**
     * @symbol  ?stringFromPieceType\@persona\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PieceType\@1\@_N\@Z
     */
    MCAPI std::string const & stringFromPieceType(enum class persona::PieceType, bool);

};