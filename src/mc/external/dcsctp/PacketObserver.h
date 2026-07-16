#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TimeMs; }
// clang-format on

namespace dcsctp {

class PacketObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PacketObserver() = default;

    virtual void OnSentPacket(::dcsctp::TimeMs now, ::webrtc::ArrayView<uchar const, 18446744073709546905> payload) = 0;

    virtual void
    OnReceivedPacket(::dcsctp::TimeMs now, ::webrtc::ArrayView<uchar const, 18446744073709546905> payload) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
