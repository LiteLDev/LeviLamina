#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_60 {

struct BlockCulling {
public:
    // BlockCulling inner types declare
    // clang-format off
    struct Description;
    struct Rule;
    // clang-format on

    // BlockCulling inner types define
    struct Description {};

    struct Rule {
    public:
        // Rule inner types declare
        // clang-format off
        struct GeometryPart;
        // clang-format on

        // Rule inner types define
        struct GeometryPart {};
    };
};

} // namespace SharedTypes::v1_20_60
