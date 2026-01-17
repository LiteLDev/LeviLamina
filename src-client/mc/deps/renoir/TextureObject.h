#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct TextureObject {
public:
    // TextureObject inner types define
    enum class TextureType : int {
        Tt2d      = 0,
        Tt2DArray = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk32ab08;
    ::ll::UntypedStorage<1, 1> mUnkc0d675;
    ::ll::UntypedStorage<2, 2> mUnka01d56;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureObject& operator=(TextureObject const&);
    TextureObject(TextureObject const&);
    TextureObject();
};

} // namespace renoir
