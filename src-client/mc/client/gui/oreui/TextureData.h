#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

namespace OreUI::RenderUtils {

struct TextureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<uchar const>> mData;
    ::ll::TypedStorage<4, 4, ::mce::TextureFormat>      mTextureFormat;
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>>     mConvertedTextureData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TextureData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::RenderUtils
