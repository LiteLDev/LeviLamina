#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketizer.h"
#include "mc/deps/webrtc/absl/InlinedVector.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpPacketizer; }
namespace webrtc { struct RTPVideoHeaderVP8; }
// clang-format on

namespace webrtc {

class RtpPacketizerVp8 : public ::webrtc::RtpPacketizer {
public:
    // prevent constructor by default
    RtpPacketizerVp8& operator=(RtpPacketizerVp8 const&);
    RtpPacketizerVp8(RtpPacketizerVp8 const&);
    RtpPacketizerVp8();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpPacketizerVp8@webrtc@@UEAA@XZ
    virtual ~RtpPacketizerVp8();

    // vIndex: 1, symbol: ?NumPackets@RtpPacketizerVp8@webrtc@@UEBA_KXZ
    virtual uint64 NumPackets() const;

    // vIndex: 2, symbol: ?NextPacket@RtpPacketizerVp8@webrtc@@UEAA_NPEAVRtpPacketToSend@2@@Z
    virtual bool NextPacket(class webrtc::RtpPacketToSend*);

    // symbol:
    // ??0RtpPacketizerVp8@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@1@AEBURTPVideoHeaderVP8@1@@Z
    MCAPI
    RtpPacketizerVp8(class rtc::ArrayView<uchar const, -4711>, struct webrtc::RtpPacketizer::PayloadSizeLimits, struct webrtc::RTPVideoHeaderVP8 const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?BuildHeader@RtpPacketizerVp8@webrtc@@CA?AV?$InlinedVector@E$05V?$allocator@E@std@@@absl@@AEBURTPVideoHeaderVP8@2@@Z
    MCAPI static class absl::InlinedVector<uchar, 6, std::allocator<uchar>>
    BuildHeader(struct webrtc::RTPVideoHeaderVP8 const&);

    // NOLINTEND
};

}; // namespace webrtc
