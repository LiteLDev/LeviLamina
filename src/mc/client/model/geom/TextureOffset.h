#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextureOffset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8d8425;
    ::ll::UntypedStorage<4, 4> mUnkf53da6;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureOffset& operator=(TextureOffset const&);
    TextureOffset(TextureOffset const&);
    TextureOffset();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextureOffset() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
