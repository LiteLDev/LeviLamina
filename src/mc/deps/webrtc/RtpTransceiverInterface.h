#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpTransceiverDirection.h"
#include "mc/deps/webrtc/rtc/RefCountInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class RtpTransceiverInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    RtpTransceiverInterface& operator=(RtpTransceiverInterface const&);
    RtpTransceiverInterface(RtpTransceiverInterface const&);
    RtpTransceiverInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1RtpTransceiverInterface@webrtc@@MEAA@XZ
    virtual ~RtpTransceiverInterface();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5() = 0;

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10, symbol: ?SetDirection@RtpTransceiverInterface@webrtc@@UEAAXW4RtpTransceiverDirection@2@@Z
    virtual void SetDirection(::webrtc::RtpTransceiverDirection);

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol:
    // ?fired_direction@RtpTransceiverInterface@webrtc@@UEBA?AV?$optional@W4RtpTransceiverDirection@webrtc@@@std@@XZ
    virtual std::optional<::webrtc::RtpTransceiverDirection> fired_direction() const;

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: ?StopInternal@RtpTransceiverInterface@webrtc@@UEAAXXZ
    virtual void StopInternal();

    // vIndex: 16, symbol: ?Stop@RtpTransceiverInterface@webrtc@@UEAAXXZ
    virtual void Stop();

    // symbol: ?SetDirectionWithError@RtpTransceiverInterface@webrtc@@UEAA?AVRTCError@2@W4RtpTransceiverDirection@2@@Z
    MCVAPI class webrtc::RTCError SetDirectionWithError(::webrtc::RtpTransceiverDirection);

    // symbol: ?StopStandard@RtpTransceiverInterface@webrtc@@UEAA?AVRTCError@2@XZ
    MCVAPI class webrtc::RTCError StopStandard();

    // NOLINTEND
};

}; // namespace webrtc
