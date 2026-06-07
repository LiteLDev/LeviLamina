#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { struct UserImageDataImpl; }
// clang-format on

namespace Gameface {

class UserImageData {
public:
    // UserImageData inner types define
    enum class ImageOrigin : int {
        TopLeft    = 0,
        BottomLeft = 1,
        Default    = 2,
    };

    enum class TextureFilteringMode : int {
        FilterPoint  = 0,
        FilterLinear = 1,
    };

    enum class AlphaPremultiplicationMode : int {
        Premultiplied    = 0,
        NonPremultiplied = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::Gameface::UserImageDataImpl>>> mImpl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UserImageData();

    MCAPI ::std::pair<uint, uint> getContentRectSize() const;

    MCAPI void setAlphaPremultiplication(::Gameface::UserImageData::AlphaPremultiplicationMode mode);

    MCAPI void setContentRect(uint x, uint y, uint width, uint height);

    MCAPI void setImageHandle(uint handle);

    MCAPI void setOrigin(::Gameface::UserImageData::ImageOrigin origin);

    MCAPI void setSize(uint width, uint height);

    MCAPI void setTexture(void* texture);

    MCAPI void setTextureBatchingHint(void* hint);

    MCAPI void setTextureFiltering(::Gameface::UserImageData::TextureFilteringMode mode);

    MCAPI void setTextureFormat(::mce::TextureFormat format);

    MCAPI ~UserImageData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Gameface
