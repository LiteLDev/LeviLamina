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

struct SizeInfo {
    std::string_view mSizeName;
    std::string_view mSizeTexturePath;
};

enum class AnimationExpression : __int32 {
    Linear = 0x0,
    Blinking = 0x1,
};

struct ArmSize {
    enum class Type : int64_t {
        Slim = 0,
        Wide = 1,
        Count = 2,
        Unknown = 3,
    };

    struct Proxy {
        using constIterator = std::unordered_map<ArmSize::Type, SizeInfo>::const_iterator;
    };

    using SizeInfoList = std::unordered_map<ArmSize::Type, SizeInfo>;
};

enum class AnimatedTextureType : __int32 {
    None = 0x0,
    Face = 0x1,
    Body32x32 = 0x2,
    Body128x128 = 0x3,
};

enum class PieceType : __int32 {
    Unknown = 0x0,
    Skeleton = 0x1,
    Body = 0x2,
    Skin = 0x3,
    Bottom = 0x4,
    Feet = 0x5,
    Dress = 0x6,
    Top = 0x7,
    High_Pants = 0x8,
    Hands = 0x9,
    Outerwear = 0xA,
    FacialHair = 0xB,
    Mouth = 0xC,
    Eyes = 0xD,
    Hair = 0xE,
    Hood = 0xF,
    Back = 0x10,
    FaceAccessory = 0x11,
    Head = 0x12,
    Legs = 0x13,
    LeftLeg = 0x14,
    RightLeg = 0x15,
    Arms = 0x16,
    LeftArm = 0x17,
    RightArm = 0x18,
    Capes = 0x19,
    ClassicSkin = 0x1A,
    Emote = 0x1B,
    Unsupported = 0x1C,
    Count = 0x1D,
};


#undef AFTER_EXTRA
/**
 * @symbol
 * ?ANIMATED_128X128_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_128X128_NAME;
/**
 * @symbol
 * ?ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_FIRST_PERSON;
/**
 * @symbol
 * ?ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_128X128_TEXTURE_CONTROLLER_THIRD_PERSON;
/**
 * @symbol ?ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const ANIMATED_128X128_TEXTURE_FRAMES_VARIABLE;
/**
 * @symbol ?ANIMATED_32X32_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_32X32_NAME;
/**
 * @symbol
 * ?ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_FIRST_PERSON;
/**
 * @symbol
 * ?ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_32X32_TEXTURE_CONTROLLER_THIRD_PERSON;
/**
 * @symbol ?ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const ANIMATED_32X32_TEXTURE_FRAMES_VARIABLE;
/**
 * @symbol
 * ?ANIMATED_FACE_CONTROLLER_FIRST_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_FIRST_PERSON;
/**
 * @symbol
 * ?ANIMATED_FACE_CONTROLLER_THIRD_PERSON\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_FACE_CONTROLLER_THIRD_PERSON;
/**
 * @symbol ?ANIMATED_FACE_NAME\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const ANIMATED_FACE_NAME;
/**
 * @symbol ?ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const ANIMATED_FACE_TEXTURE_FRAMES_VARIABLE;
/**
 * @symbol ?INVALID_INDEX\@persona\@\@3HB
 */
MCAPI extern int const INVALID_INDEX;
/**
 * @symbol ?NONE_PIECE_ID\@persona\@\@3VUUID\@mce\@\@B
 */
MCAPI extern class mce::UUID const NONE_PIECE_ID;
/**
 * @symbol ?NONE_PIECE_PATH\@persona\@\@3V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
 */
MCAPI extern std::string const NONE_PIECE_PATH;
/**
 * @symbol ?NO_PIECE_SELECTED\@persona\@\@3VUUID\@mce\@\@B
 */
MCAPI extern class mce::UUID const NO_PIECE_SELECTED;
/**
 * @symbol ?USE_BLINKING_ANIMATION_VARIABLE\@persona\@\@3VHashedString\@\@B
 */
MCAPI extern class HashedString const USE_BLINKING_ANIMATION_VARIABLE;
/**
 * @symbol
 * ?pieceTypeFromString\@persona\@\@YA?AW4PieceType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
 */
MCAPI enum class persona::PieceType pieceTypeFromString(std::string const&);
/**
 * @symbol
 * ?stringFromPieceType\@persona\@\@YAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4PieceType\@1\@_N\@Z
 */
MCAPI std::string const& stringFromPieceType(enum class persona::PieceType, bool);

}; // namespace persona