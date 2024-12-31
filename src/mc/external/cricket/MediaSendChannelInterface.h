#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/VideoEncoderFactory.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaChannelNetworkInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct Codec; }
namespace cricket { struct StreamParams; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct SentPacket; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace cricket {

class MediaSendChannelInterface {
public:
    // prevent constructor by default
    MediaSendChannelInterface& operator=(MediaSendChannelInterface const&);
    MediaSendChannelInterface(MediaSendChannelInterface const&);
    MediaSendChannelInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MediaSendChannelInterface() = default;

    // vIndex: 1
    virtual ::cricket::VideoMediaSendChannelInterface* AsVideoSendChannel() = 0;

    // vIndex: 2
    virtual ::cricket::VoiceMediaSendChannelInterface* AsVoiceSendChannel() = 0;

    // vIndex: 3
    virtual ::cricket::MediaType media_type() const = 0;

    // vIndex: 4
    virtual ::std::optional<::cricket::Codec> GetSendCodec() const = 0;

    // vIndex: 5
    virtual bool AddSendStream(::cricket::StreamParams const&) = 0;

    // vIndex: 6
    virtual bool RemoveSendStream(uint) = 0;

    // vIndex: 7
    virtual void OnPacketSent(::rtc::SentPacket const&) = 0;

    // vIndex: 8
    virtual void OnReadyToSend(bool) = 0;

    // vIndex: 9
    virtual void OnNetworkRouteChanged(::std::string_view, ::rtc::NetworkRoute const&) = 0;

    // vIndex: 10
    virtual void SetInterface(::cricket::MediaChannelNetworkInterface*) = 0;

    // vIndex: 11
    virtual bool HasNetworkInterface() const = 0;

    // vIndex: 12
    virtual void SetExtmapAllowMixed(bool) = 0;

    // vIndex: 13
    virtual bool ExtmapAllowMixed() const = 0;

    // vIndex: 14
    virtual void SetFrameEncryptor(uint, ::webrtc::scoped_refptr<::webrtc::FrameEncryptorInterface>) = 0;

    // vIndex: 15
    virtual ::webrtc::RTCError
    SetRtpSendParameters(uint, ::webrtc::RtpParameters const&, ::absl::AnyInvocable<void(::webrtc::RTCError) &&>) = 0;

    // vIndex: 16
    virtual void
        SetEncoderToPacketizerFrameTransformer(uint, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>) = 0;

    // vIndex: 17
    virtual void SetEncoderSelector(uint, ::webrtc::VideoEncoderFactory::EncoderSelectorInterface*);

    // vIndex: 18
    virtual ::webrtc::RtpParameters GetRtpSendParameters(uint) const = 0;

    // vIndex: 19
    virtual bool SendCodecHasNack() const = 0;

    // vIndex: 20
    virtual void SetSsrcListChangedCallback(::absl::AnyInvocable<void(::std::set<uint> const&)>) = 0;

    // vIndex: 21
    virtual void SetSendCodecChangedCallback(::absl::AnyInvocable<void()>) = 0;
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

} // namespace cricket
