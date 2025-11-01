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
    // vIndex: 0
    virtual ~PacketObserver() = default;

    // vIndex: 1
    virtual void OnSentPacket(::dcsctp::TimeMs, ::rtc::ArrayView<uchar const>) = 0;

    // vIndex: 2
    virtual void OnReceivedPacket(::dcsctp::TimeMs, ::rtc::ArrayView<uchar const>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
