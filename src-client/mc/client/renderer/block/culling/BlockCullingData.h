#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockCullingData {
public:
    // BlockCullingData inner types declare
    // clang-format off
    struct CullingRule;
    // clang-format on

    // BlockCullingData inner types define
    struct CullingRule {
    public:
        // CullingRule inner types declare
        // clang-format off
        struct GeometryPart;
        // clang-format on

        // CullingRule inner types define
        enum class Condition : uint {};

        struct GeometryPart {};
    };
};
