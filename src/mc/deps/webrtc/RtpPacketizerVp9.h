#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpPacketizer.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpPacketizer; }
namespace webrtc { struct RTPVideoHeaderVP9; }
// clang-format on

namespace webrtc {

class RtpPacketizerVp9 : public ::webrtc::RtpPacketizer {
public:
    // prevent constructor by default
    RtpPacketizerVp9& operator=(RtpPacketizerVp9 const&);
    RtpPacketizerVp9(RtpPacketizerVp9 const&);
    RtpPacketizerVp9();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RtpPacketizerVp9@webrtc@@UEAA@XZ
    virtual ~RtpPacketizerVp9();

    // vIndex: 1, symbol: ?NumPackets@RtpPacketizerVp9@webrtc@@UEBA_KXZ
    virtual uint64 NumPackets() const;

    // vIndex: 2, symbol: ?NextPacket@RtpPacketizerVp9@webrtc@@UEAA_NPEAVRtpPacketToSend@2@@Z
    virtual bool NextPacket(class webrtc::RtpPacketToSend*);

    // symbol:
    // ??0RtpPacketizerVp9@webrtc@@QEAA@V?$ArrayView@$$CBE$0?BCGH@@rtc@@UPayloadSizeLimits@RtpPacketizer@1@AEBURTPVideoHeaderVP9@1@@Z
    MCAPI
    RtpPacketizerVp9(class rtc::ArrayView<uchar const, -4711>, struct webrtc::RtpPacketizer::PayloadSizeLimits, struct webrtc::RTPVideoHeaderVP9 const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?WriteHeader@RtpPacketizerVp9@webrtc@@AEBA_N_N0V?$ArrayView@E$0?BCGH@@rtc@@@Z
    MCAPI bool WriteHeader(bool, bool, class rtc::ArrayView<uchar, -4711>) const;

    // NOLINTEND
};

}; // namespace webrtc
