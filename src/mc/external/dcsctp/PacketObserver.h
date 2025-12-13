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

    virtual void OnSentPacket(::dcsctp::TimeMs, ::rtc::ArrayView<uchar const>) = 0;

    virtual void OnReceivedPacket(::dcsctp::TimeMs, ::rtc::ArrayView<uchar const>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace dcsctp
