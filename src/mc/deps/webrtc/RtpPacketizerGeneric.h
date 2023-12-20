#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketizer.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpPacketizer; }
namespace webrtc { struct RTPVideoHeader; }
// clang-format on

namespace webrtc {

class RtpPacketizerGeneric : public ::webrtc::RtpPacketizer {
public:
    // prevent constructor by default
    RtpPacketizerGeneric& operator=(RtpPacketizerGeneric const&);
    RtpPacketizerGeneric(RtpPacketizerGeneric const&);
    RtpPacketizerGeneric();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpPacketizerGeneric@webrtc@@UEAA@XZ
    virtual ~RtpPacketizerGeneric();

    // vIndex: 1, symbol: ?NumPackets@RtpPacketizerGeneric@webrtc@@UEBA_KXZ
    virtual uint64 NumPackets() const;

    // vIndex: 2, symbol: ?NextPacket@RtpPacketizerGeneric@webrtc@@UEAA_NPEAVRtpPacketToSend@2@@Z
    virtual bool NextPacket(class webrtc::RtpPacketToSend*);

    // symbol:
    // ??0RtpPacketizerGeneric@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@1@@Z
    MCAPI
    RtpPacketizerGeneric(class rtc::ArrayView<uchar const, -4711>, struct webrtc::RtpPacketizer::PayloadSizeLimits);

    // symbol:
    // ??0RtpPacketizerGeneric@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@1@AEBURTPVideoHeader@1@@Z
    MCAPI
    RtpPacketizerGeneric(class rtc::ArrayView<uchar const, -4711>, struct webrtc::RtpPacketizer::PayloadSizeLimits, struct webrtc::RTPVideoHeader const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BuildHeader@RtpPacketizerGeneric@webrtc@@AEAAXAEBURTPVideoHeader@2@@Z
    MCAPI void BuildHeader(struct webrtc::RTPVideoHeader const&);

    // NOLINTEND
};

}; // namespace webrtc
