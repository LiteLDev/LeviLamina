#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/H264PacketizationMode.h"
#include "mc/external/webrtc/RtpPacketizer.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
// clang-format on

namespace webrtc {

class RtpPacketizerH264 {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool GeneratePackets(::webrtc::H264PacketizationMode);

    MCAPI void NextAggregatePacket(::webrtc::RtpPacketToSend*);

    MCAPI void NextFragmentPacket(::webrtc::RtpPacketToSend*);

    MCAPI bool PacketizeFuA(uint64);

    MCAPI bool PacketizeSingleNalu(uint64);

    MCAPI uint64 PacketizeStapA(uint64);

    MCAPI RtpPacketizerH264(
        ::rtc::ArrayView<uchar const>,
        ::webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::H264PacketizationMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::rtc::ArrayView<uchar const>,
        ::webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::H264PacketizationMode
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
