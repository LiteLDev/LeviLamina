#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/H264PacketizationMode.h"
#include "mc/deps/webrtc/RtpPacketizer.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpPacketizer; }
// clang-format on

namespace webrtc {

class RtpPacketizerH264 : public ::webrtc::RtpPacketizer {
public:
    // prevent constructor by default
    RtpPacketizerH264& operator=(RtpPacketizerH264 const&);
    RtpPacketizerH264(RtpPacketizerH264 const&);
    RtpPacketizerH264();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpPacketizerH264@webrtc@@UEAA@XZ
    virtual ~RtpPacketizerH264();

    // vIndex: 1, symbol: ?NumPackets@RtpPacketizerH264@webrtc@@UEBA_KXZ
    virtual uint64 NumPackets() const;

    // vIndex: 2, symbol: ?NextPacket@RtpPacketizerH264@webrtc@@UEAA_NPEAVRtpPacketToSend@2@@Z
    virtual bool NextPacket(class webrtc::RtpPacketToSend*);

    // symbol:
    // ??0RtpPacketizerH264@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@1@W4H264PacketizationMode@1@@Z
    MCAPI RtpPacketizerH264(
        class rtc::ArrayView<uchar const, -4711>,
        struct webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::H264PacketizationMode
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?GeneratePackets@RtpPacketizerH264@webrtc@@AEAA_NW4H264PacketizationMode@2@@Z
    MCAPI bool GeneratePackets(::webrtc::H264PacketizationMode);

    // symbol: ?NextAggregatePacket@RtpPacketizerH264@webrtc@@AEAAXPEAVRtpPacketToSend@2@@Z
    MCAPI void NextAggregatePacket(class webrtc::RtpPacketToSend*);

    // symbol: ?NextFragmentPacket@RtpPacketizerH264@webrtc@@AEAAXPEAVRtpPacketToSend@2@@Z
    MCAPI void NextFragmentPacket(class webrtc::RtpPacketToSend*);

    // symbol: ?PacketizeFuA@RtpPacketizerH264@webrtc@@AEAA_N_K@Z
    MCAPI bool PacketizeFuA(uint64);

    // symbol: ?PacketizeSingleNalu@RtpPacketizerH264@webrtc@@AEAA_N_K@Z
    MCAPI bool PacketizeSingleNalu(uint64);

    // symbol: ?PacketizeStapA@RtpPacketizerH264@webrtc@@AEAA_K_K@Z
    MCAPI uint64 PacketizeStapA(uint64);

    // NOLINTEND
};

}; // namespace webrtc
