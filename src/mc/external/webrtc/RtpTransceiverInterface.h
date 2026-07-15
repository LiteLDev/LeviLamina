#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/MediaType.h"
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
    virtual ::webrtc::MediaType media_type() const = 0;

    virtual ::std::optional<::std::string> mid() const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender() const = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver() const = 0;

    virtual bool stopped() const = 0;

    virtual bool stopping() const = 0;

    virtual ::webrtc::RtpTransceiverDirection direction() const = 0;

    virtual void SetDirection(::webrtc::RtpTransceiverDirection new_direction);

    virtual ::webrtc::RTCError SetDirectionWithError(::webrtc::RtpTransceiverDirection new_direction);

    virtual ::std::optional<::webrtc::RtpTransceiverDirection> current_direction() const = 0;

    virtual ::std::optional<::webrtc::RtpTransceiverDirection> fired_direction() const;

    virtual ::webrtc::RTCError StopStandard();

    virtual void StopInternal();

    virtual void Stop();

    virtual ::webrtc::RTCError
    SetCodecPreferences(::webrtc::ArrayView<::webrtc::RtpCodecCapability, 18446744073709546905> codec_capabilities) = 0;

    virtual ::std::vector<::webrtc::RtpCodecCapability> codec_preferences() const = 0;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetHeaderExtensionsToNegotiate() const = 0;

    virtual ::std::vector<::webrtc::RtpHeaderExtensionCapability> GetNegotiatedHeaderExtensions() const = 0;

    virtual ::webrtc::RTCError SetHeaderExtensionsToNegotiate(
        ::webrtc::ArrayView<::webrtc::RtpHeaderExtensionCapability const, 18446744073709546905> header_extensions
    ) = 0;

    virtual ~RtpTransceiverInterface() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetDirection(::webrtc::RtpTransceiverDirection new_direction);

    MCNAPI void $Stop();


    // NOLINTEND
};

} // namespace webrtc
