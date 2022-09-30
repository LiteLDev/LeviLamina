/**
 * @file  persona.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -664355203
     * @symbol ?ANIMATED_128X128_NAME@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_128X128_NAME;
    /**
     * @hash   258062143
     * @symbol ?ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;
    /**
     * @hash   1070415743
     * @symbol ?ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;
    /**
     * @hash   320622281
     * @symbol ?ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE@persona@@3VHashedString@@B
     */
    MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;
    /**
     * @hash   -1935629219
     * @symbol ?ANIMATED_32X32_NAME@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_32X32_NAME;
    /**
     * @hash   1201414431
     * @symbol ?ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;
    /**
     * @hash   2013768031
     * @symbol ?ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;
    /**
     * @hash   1319935261
     * @symbol ?ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE@persona@@3VHashedString@@B
     */
    MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;
    /**
     * @hash   -486701187
     * @symbol ?ANIMATED_FACE_CONTROLLER_FIRST_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;
    /**
     * @hash   325652413
     * @symbol ?ANIMATED_FACE_CONTROLLER_THIRD_PERSON@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;
    /**
     * @hash   -2045116673
     * @symbol ?ANIMATED_FACE_NAME@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const ANIMATED_FACE_NAME;
    /**
     * @hash   -1544583095
     * @symbol ?ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE@persona@@3VHashedString@@B
     */
    MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;
    /**
     * @hash   -1392933063
     * @symbol ?INVALID_INDEX@persona@@3HB
     */
    MCAPI extern int const INVALID_INDEX;
    /**
     * @hash   -1309901703
     * @symbol ?NONE_PIECE_ID@persona@@3VUUID@mce@@B
     */
    MCAPI extern class mce::UUID const NONE_PIECE_ID;
    /**
     * @hash   -977613315
     * @symbol ?NONE_PIECE_PATH@persona@@3V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI extern std::string const NONE_PIECE_PATH;
    /**
     * @hash   -2132214985
     * @symbol ?NO_PIECE_SELECTED@persona@@3VUUID@mce@@B
     */
    MCAPI extern class mce::UUID const NO_PIECE_SELECTED;
    /**
     * @hash   2040780019
     * @symbol ?USE_BLINKING_ANIMATION_VARIABLE@persona@@3VHashedString@@B
     */
    MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;
    /**
     * @hash   -2135099815
     * @symbol ?pieceTypeFromString@persona@@YA?AW4PieceType@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI enum class persona::PieceType pieceTypeFromString(std::string const &);
    /**
     * @hash   -1448352244
     * @symbol ?stringFromPieceType@persona@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4PieceType@1@_N@Z
     */
    MCAPI std::string const & stringFromPieceType(enum class persona::PieceType, bool);

};