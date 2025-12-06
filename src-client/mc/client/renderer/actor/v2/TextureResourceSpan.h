#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TextureResourceSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke913f8;
    ::ll::UntypedStorage<4, 4> mUnk24d336;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureResourceSpan& operator=(TextureResourceSpan const&);
    TextureResourceSpan(TextureResourceSpan const&);
    TextureResourceSpan();
};
