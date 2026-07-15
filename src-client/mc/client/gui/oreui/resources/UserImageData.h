#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
};

} // namespace Gameface
