#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct TextureShiftBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkbe4300;
    ::ll::UntypedStorage<4, 8> mUnkfa2b7d;
    ::ll::UntypedStorage<2, 2> mUnk3a7472;
    ::ll::UntypedStorage<2, 2> mUnk9a738a;
    ::ll::UntypedStorage<4, 4> mUnk342ac7;
    ::ll::UntypedStorage<4, 4> mUnkc15533;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureShiftBuffer& operator=(TextureShiftBuffer const&);
    TextureShiftBuffer(TextureShiftBuffer const&);
    TextureShiftBuffer();
};

} // namespace mce
