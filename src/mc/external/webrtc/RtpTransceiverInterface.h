#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpHeaderExtensionCapability; }
// clang-format on

namespace webrtc {

class RtpTransceiverInterface : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::cricket::MediaType media_type() const = 0;

    // vIndex: 4
    virtual ::std::optional<::std::string> mid() const = 0;

    // vIndex: 5
    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender() const = 0;

    // vIndex: 6
    virtual ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver() const = 0;

    // vIndex: 7
    virtual bool stopped() const = 0;

    // vIndex: 8
    virtual bool stopping() const = 0;

    // vIndex: 9
    virtual ::webrtc::RtpTransceiverDirection direction() const = 0;

    // vIndex: 10
    virtual void SetDirection(::webrtc::RtpTransceiverDirection);

    // vIndex: 11
    virtual ::webrtc::RTCError SetDirectionWithError(::webrtc::RtpTransceiverDirection);

    // vIndex: 12
    virtual ::std::optional<::webrtc::RtpTransceiverDirection> current_direction() const = 0;

    // vIndex: 13
    virtual ::std::optional<::webrtc::RtpTransceiverDirection> fired_direction() const;

    // vIndex: 14
    virtual ::webrtc::RTCError StopStandard();

    // vIndex: 15
    virtual void StopInternal();

    // vIndex: 16
    virtual void Stop();

    // vIndex: 17
    virtual ::webrtc::RTCError SetCodecPreferences(::rtc::ArrayView<::webrtc::RtpCodecCapability>) = 0;

    // vIndex: 18
    virtual ::std::vector<::webrtc::RtpCodecCapability> codec_preferences() const = 0;

    // vIndex: 19
    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetHeaderExtensionsToNegotiate() const = 0;

    // vIndex: 20
    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetNegotiatedHeaderExtensions() const = 0;

    // vIndex: 21
    virtual ::webrtc::RTCError
        SetHeaderExtensionsToNegotiate(::rtc::ArrayView<::webrtc::RtpHeaderExtensionCapability const>) = 0;

    // vIndex: 2
    virtual ~RtpTransceiverInterface() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
