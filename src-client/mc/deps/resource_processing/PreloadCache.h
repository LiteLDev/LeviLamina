#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct PreloadCache {
public:
    // PreloadCache inner types declare
    // clang-format off
    struct PreloadedContentMaps;
    struct SharedOnlyConstructionTag;
    // clang-format on

    // PreloadCache inner types define
    struct PreloadedContentMaps {};

    struct SharedOnlyConstructionTag {};
};

} // namespace Bedrock::Resources
