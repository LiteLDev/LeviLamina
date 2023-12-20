#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct PacketResult {
public:
    // PacketResult inner types declare
    // clang-format off
    class ReceiveTimeOrder;
    // clang-format on

    // PacketResult inner types define
    class ReceiveTimeOrder {
    public:
        // prevent constructor by default
        ReceiveTimeOrder& operator=(ReceiveTimeOrder const&);
        ReceiveTimeOrder(ReceiveTimeOrder const&);
        ReceiveTimeOrder();

    public:
        // NOLINTBEGIN
        // symbol: ??RReceiveTimeOrder@PacketResult@webrtc@@QEAA_NAEBU12@0@Z
        MCAPI bool operator()(struct webrtc::PacketResult const&, struct webrtc::PacketResult const&);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    PacketResult& operator=(PacketResult const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PacketResult@webrtc@@QEAA@XZ
    MCAPI PacketResult();

    // symbol: ??0PacketResult@webrtc@@QEAA@AEBU01@@Z
    MCAPI PacketResult(struct webrtc::PacketResult const&);

    // symbol: ??1PacketResult@webrtc@@QEAA@XZ
    MCAPI ~PacketResult();

    // NOLINTEND
};

}; // namespace webrtc
