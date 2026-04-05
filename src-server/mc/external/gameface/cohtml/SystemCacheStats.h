#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class SystemCacheStats {
public:
    // SystemCacheStats inner types declare
    // clang-format off
    struct ImageCacheStats;
    // clang-format on

    // SystemCacheStats inner types define
    struct ImageCacheStats {
    public:
        // ImageCacheStats inner types declare
        // clang-format off
        struct ImageData;
        struct OrphanedImage;
        // clang-format on

        // ImageCacheStats inner types define
        struct ImageData {
        public:
            // ImageData inner types define
            enum class ImageState : int {};
        };

        struct OrphanedImage {};
    };
};

} // namespace cohtml
