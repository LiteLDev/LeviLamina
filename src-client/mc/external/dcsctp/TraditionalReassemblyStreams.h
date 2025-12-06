#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct TraditionalReassemblyStreams {
public:
    // TraditionalReassemblyStreams inner types declare
    // clang-format off
    struct OrderedStream;
    struct StreamBase;
    struct UnorderedStream;
    // clang-format on

    // TraditionalReassemblyStreams inner types define
    struct OrderedStream {};

    struct StreamBase {};

    struct UnorderedStream {};
};

} // namespace dcsctp
