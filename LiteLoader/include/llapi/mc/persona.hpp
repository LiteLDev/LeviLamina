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
     * @hash   1038613677
     * @symbol  ?ANIMATED_128X128_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_128X128_NAME;
    /**
     * @hash   1961031023
     * @symbol  ?ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;
    /**
     * @hash   -1521582673
     * @symbol  ?ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;
    /**
     * @hash   1428032553
     * @symbol  ?ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;
    /**
     * @hash   -232660339
     * @symbol  ?ANIMATED_32X32_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_32X32_NAME;
    /**
     * @hash   -1390583985
     * @symbol  ?ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;
    /**
     * @hash   -578230385
     * @symbol  ?ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;
    /**
     * @hash   -1867621763
     * @symbol  ?ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;
    /**
     * @hash   1216267693
     * @symbol  ?ANIMATED_FACE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;
    /**
     * @hash   2028621293
     * @symbol  ?ANIMATED_FACE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;
    /**
     * @hash   -342147793
     * @symbol  ?ANIMATED_FACE_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const ANIMATED_FACE_NAME;
    /**
     * @hash   -437172823
     * @symbol  ?ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;
    /**
     * @hash   -422788187
     * @symbol  ?INVALID_INDEX\@persona\@\@3HB
     */
    MCAPI extern int const INVALID_INDEX;
    /**
     * @hash   -202491431
     * @symbol  ?NONE_PIECE_ID\@persona\@\@3VUUID\@mce\@\@B
     */
    MCAPI extern class mce::UUID const NONE_PIECE_ID;
    /**
     * @hash   98883509
     * @symbol  ?NONE_PIECE_PATH\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI extern std::string const NONE_PIECE_PATH;
    /**
     * @hash   -1024804713
     * @symbol  ?NO_PIECE_SELECTED\@persona\@\@3VUUID\@mce\@\@B
     */
    MCAPI extern class mce::UUID const NO_PIECE_SELECTED;
    /**
     * @hash   -1146777005
     * @symbol  ?USE_BLINKING_ANIMATION_VARIABLE\@persona\@\@3VHashedString\@\@B
     */
    MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;
    /**
     * @hash   1573273081
     * @symbol  ?pieceTypeFromString\@persona\@\@YA?AW4PieceType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class persona::PieceType pieceTypeFromString(std::string const &);
    /**
     * @hash   -2034946644
     * @symbol  ?stringFromPieceType\@persona\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PieceType\@1\@_N\@Z
     */
    MCAPI std::string const & stringFromPieceType(enum class persona::PieceType, bool);

};