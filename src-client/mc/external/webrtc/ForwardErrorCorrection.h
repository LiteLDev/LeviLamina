#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ForwardErrorCorrection {
public:
    // ForwardErrorCorrection inner types declare
    // clang-format off
    struct DecodeFecResult;
    struct Packet;
    struct ProtectedPacket;
    struct ProtectedStream;
    struct ReceivedFecPacket;
    struct ReceivedPacket;
    struct RecoveredPacket;
    struct SortablePacket;
    // clang-format on

    // ForwardErrorCorrection inner types define
    struct DecodeFecResult {};

    struct Packet {};

    struct ProtectedPacket {};

    struct ProtectedStream {};

    struct ReceivedFecPacket {};

    struct ReceivedPacket {};

    struct RecoveredPacket {};

    struct SortablePacket {
    public:
        // SortablePacket inner types declare
        // clang-format off
        struct LessThan;
        // clang-format on

        // SortablePacket inner types define
        struct LessThan {};
    };
};

} // namespace webrtc
