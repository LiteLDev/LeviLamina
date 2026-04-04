#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    virtual void OnSentPacket(::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload) = 0;

    virtual void OnReceivedPacket(::dcsctp::TimeMs now, ::rtc::ArrayView<uchar const> payload) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
