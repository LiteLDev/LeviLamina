#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/TextureWrapping.h"

namespace mce {

struct TextureWrappingDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc32ba4;
    ::ll::UntypedStorage<1, 1> mUnkfbcc72;
    ::ll::UntypedStorage<1, 1> mUnk9f2a79;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureWrappingDescription& operator=(TextureWrappingDescription const&);
    TextureWrappingDescription(TextureWrappingDescription const&);
    TextureWrappingDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TextureWrappingDescription(::mce::TextureWrapping textureWrapping);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::TextureWrapping textureWrapping);
    // NOLINTEND
};

} // namespace mce
