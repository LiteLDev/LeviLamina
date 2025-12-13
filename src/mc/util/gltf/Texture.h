#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Texture {
public:
    // Texture inner types define
    enum class Format : int {
        Alpha          = 6406,
        Rgb            = 6407,
        Rgba           = 6408,
        Luminance      = 6409,
        LuminanceAlpha = 6410,
    };

    enum class Target : int {
        Texture2d = 3553,
    };

    enum class Type : int {
        Byte         = 5121,
        Short5_6_5   = 33635,
        Short4_4_4_4 = 32819,
        Short5_5_5_1 = 32820,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk2b031b;
    ::ll::UntypedStorage<4, 8>  mUnk28ff05;
    ::ll::UntypedStorage<4, 8>  mUnka6e0d7;
    ::ll::UntypedStorage<4, 8>  mUnkbf05ae;
    ::ll::UntypedStorage<4, 8>  mUnk5e5ea8;
    ::ll::UntypedStorage<4, 8>  mUnk318a55;
    ::ll::UntypedStorage<8, 32> mUnkd942f3;
    ::ll::UntypedStorage<4, 4>  mUnk797435;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture& operator=(Texture const&);
    Texture(Texture const&);
    Texture();
};

} // namespace glTF
