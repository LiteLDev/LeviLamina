#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dcsctp {

struct SctpPacket {
public:
    // SctpPacket inner types declare
    // clang-format off
    struct Builder;
    struct ChunkDescriptor;
    // clang-format on

    // SctpPacket inner types define
    struct Builder {};

    struct ChunkDescriptor {};
};

} // namespace dcsctp
