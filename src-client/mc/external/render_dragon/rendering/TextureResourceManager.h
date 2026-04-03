#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::rendering {

class TextureResourceManager {
public:
    // TextureResourceManager inner types declare
    // clang-format off
    class Impl;
    // clang-format on

    // TextureResourceManager inner types define
    class Impl {
    public:
        // Impl inner types declare
        // clang-format off
        struct PendingTask;
        // clang-format on

        // Impl inner types define
        struct PendingTask {};
    };
};

} // namespace dragon::rendering
