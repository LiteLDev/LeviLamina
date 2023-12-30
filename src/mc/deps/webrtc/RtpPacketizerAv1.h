#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketizer.h"
#include "mc/deps/webrtc/VideoFrameType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpPacketizer; }
// clang-format on

namespace webrtc {

class RtpPacketizerAv1 : public ::webrtc::RtpPacketizer {
public:
    // RtpPacketizerAv1 inner types declare
    // clang-format off
    struct Obu;
    struct Packet;
    // clang-format on

    // RtpPacketizerAv1 inner types define
    struct Obu {
    public:
        // prevent constructor by default
        Obu& operator=(Obu const&);
        Obu(Obu const&);
        Obu();
    };

    struct Packet {
    public:
        // prevent constructor by default
        Packet& operator=(Packet const&);
        Packet(Packet const&);
        Packet();
    };

public:
    // prevent constructor by default
    RtpPacketizerAv1& operator=(RtpPacketizerAv1 const&);
    RtpPacketizerAv1(RtpPacketizerAv1 const&);
    RtpPacketizerAv1();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RtpPacketizerAv1@webrtc@@UEAA@XZ
    virtual ~RtpPacketizerAv1() = default;

    // vIndex: 1, symbol: ?NumPackets@RtpPacketizerAv1@webrtc@@UEBA_KXZ
    virtual uint64 NumPackets() const;

    // vIndex: 2, symbol: ?NextPacket@RtpPacketizerAv1@webrtc@@UEAA_NPEAVRtpPacketToSend@2@@Z
    virtual bool NextPacket(class webrtc::RtpPacketToSend*);

    // symbol:
    // ??0RtpPacketizerAv1@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@1@W4VideoFrameType@1@_N@Z
    MCAPI RtpPacketizerAv1(
        class rtc::ArrayView<uchar const, -4711>,
        struct webrtc::RtpPacketizer::PayloadSizeLimits,
        ::webrtc::VideoFrameType,
        bool
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AggregationHeader@RtpPacketizerAv1@webrtc@@AEBAEXZ
    MCAPI uchar AggregationHeader() const;

    // symbol: ?AdditionalBytesForPreviousObuElement@RtpPacketizerAv1@webrtc@@CAHAEBUPacket@12@@Z
    MCAPI static int AdditionalBytesForPreviousObuElement(struct webrtc::RtpPacketizerAv1::Packet const&);

    // symbol:
    // ?Packetize@RtpPacketizerAv1@webrtc@@CA?AV?$vector@UPacket@RtpPacketizerAv1@webrtc@@V?$allocator@UPacket@RtpPacketizerAv1@webrtc@@@std@@@std@@V?$ArrayView@$$CBUObu@RtpPacketizerAv1@webrtc@@$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@2@@Z
    MCAPI static std::vector<struct webrtc::RtpPacketizerAv1::Packet> Packetize(
        class rtc::ArrayView<struct webrtc::RtpPacketizerAv1::Obu const, -4711>,
        struct webrtc::RtpPacketizer::PayloadSizeLimits
    );

    // symbol:
    // ?ParseObus@RtpPacketizerAv1@webrtc@@CA?AV?$vector@UObu@RtpPacketizerAv1@webrtc@@V?$allocator@UObu@RtpPacketizerAv1@webrtc@@@std@@@std@@V?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI static std::vector<struct webrtc::RtpPacketizerAv1::Obu> ParseObus(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND
};

}; // namespace webrtc
