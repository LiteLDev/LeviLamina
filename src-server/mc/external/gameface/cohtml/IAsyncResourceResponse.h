#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IAsyncResourceResponse {
public:
    // IAsyncResourceResponse inner types declare
    // clang-format off
    struct UserImageData;
    // clang-format on

    // IAsyncResourceResponse inner types define
    enum class Status : int {};

    struct UserImageData {
    public:
        // UserImageData inner types define
        enum class TextureFilteringMode : int {};

        enum class AlphaPremultiplicationMode : int {};
    };
};

} // namespace cohtml
