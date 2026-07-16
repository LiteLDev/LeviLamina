#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/VideoEncoderFactory.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class MediaChannelNetworkInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class VideoMediaSendChannelInterface; }
namespace webrtc { class VoiceMediaSendChannelInterface; }
namespace webrtc { struct Codec; }
namespace webrtc { struct NetworkRoute; }
namespace webrtc { struct RtpParameters; }
namespace webrtc { struct SentPacketInfo; }
namespace webrtc { struct StreamParams; }
// clang-format on

namespace webrtc {

class MediaSendChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MediaSendChannelInterface() = default;

    virtual ::webrtc::VideoMediaSendChannelInterface* AsVideoSendChannel() = 0;

    virtual ::webrtc::VoiceMediaSendChannelInterface* AsVoiceSendChannel() = 0;

    virtual ::webrtc::MediaType media_type() const = 0;

    virtual ::std::optional<::webrtc::Codec> GetSendCodec() const = 0;

    virtual bool AddSendStream(::webrtc::StreamParams const&) = 0;

    virtual bool RemoveSendStream(uint) = 0;

    virtual void OnPacketSent(::webrtc::SentPacketInfo const&) = 0;

    virtual void OnReadyToSend(bool) = 0;

    virtual void OnNetworkRouteChanged(::std::string_view, ::webrtc::NetworkRoute const&) = 0;

    virtual void SetInterface(::webrtc::MediaChannelNetworkInterface*) = 0;

    virtual bool HasNetworkInterface() const = 0;

    virtual void SetExtmapAllowMixed(bool) = 0;

    virtual bool ExtmapAllowMixed() const = 0;

    virtual void SetFrameEncryptor(uint, ::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface>) = 0;

    virtual ::webrtc::RTCError
    SetRtpSendParameters(uint, ::webrtc::RtpParameters const&, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>) = 0;

    virtual void
        SetEncoderToPacketizerFrameTransformer(uint, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>) = 0;

    virtual void SetEncoderSelector(uint, ::webrtc::VideoEncoderFactory::EncoderSelectorInterface*);

    virtual ::webrtc::RtpParameters GetRtpSendParameters(uint) const = 0;

    virtual bool SendCodecHasNack() const = 0;

    virtual void SetSsrcListChangedCallback(::absl::AnyInvocable<void(::std::set<uint> const&)>) = 0;

    virtual void SetSendCodecChangedCallback(::absl::AnyInvocable<void()>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
