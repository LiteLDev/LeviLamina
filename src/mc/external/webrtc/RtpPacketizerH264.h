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
    // RtpPacketizerH264 inner types declare
    // clang-format off
    struct PacketUnit;
    // clang-format on

    // RtpPacketizerH264 inner types define
    struct PacketUnit {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool GeneratePackets(::webrtc::H264PacketizationMode);

    MCNAPI void NextAggregatePacket(::webrtc::RtpPacketToSend*);

    MCNAPI void NextFragmentPacket(::webrtc::RtpPacketToSend*);

    MCNAPI bool PacketizeFuA(uint64);

    MCNAPI bool PacketizeSingleNalu(uint64);

    MCNAPI uint64 PacketizeStapA(uint64);

    MCNAPI RtpPacketizerH264(
        ::rtc::ArrayView<uchar const>,
        ::webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::H264PacketizationMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::rtc::ArrayView<uchar const>,
        ::webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::H264PacketizationMode
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
