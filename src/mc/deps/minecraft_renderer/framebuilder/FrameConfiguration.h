#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct FrameConfiguration {
public:
    // FrameConfiguration inner types declare
    // clang-format off
    struct View;
    // clang-format on

    // FrameConfiguration inner types define
    enum class ViewSubmersionState : int {};

    struct View {
    public:
        // View inner types declare
        // clang-format off
        struct ShadowMap;
        // clang-format on

        // View inner types define
        struct ShadowMap {};
    };
};

} // namespace mce::framebuilder
