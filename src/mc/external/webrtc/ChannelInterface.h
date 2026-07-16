#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaContentDescription; }
namespace webrtc { class MediaReceiveChannelInterface; }
namespace webrtc { class MediaSendChannelInterface; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class VideoChannel; }
namespace webrtc { class VideoMediaReceiveChannelInterface; }
namespace webrtc { class VideoMediaSendChannelInterface; }
namespace webrtc { class VoiceChannel; }
namespace webrtc { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { class VoiceMediaSendChannelInterface; }
namespace webrtc { struct StreamParams; }
// clang-format on

namespace webrtc {

class ChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChannelInterface() = default;

    virtual ::webrtc::MediaType media_type() const = 0;

    virtual ::webrtc::VideoChannel* AsVideoChannel() = 0;

    virtual ::webrtc::VoiceChannel* AsVoiceChannel() = 0;

    virtual ::webrtc::MediaSendChannelInterface* media_send_channel() = 0;

    virtual ::webrtc::VideoMediaSendChannelInterface* video_media_send_channel() = 0;

    virtual ::webrtc::VoiceMediaSendChannelInterface* voice_media_send_channel() = 0;

    virtual ::webrtc::MediaReceiveChannelInterface* media_receive_channel() = 0;

    virtual ::webrtc::VideoMediaReceiveChannelInterface* video_media_receive_channel() = 0;

    virtual ::webrtc::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() = 0;

    virtual ::std::string_view transport_name() const = 0;

    virtual ::std::string const& mid() const = 0;

    virtual void Enable(bool enable) = 0;

    virtual void SetFirstPacketReceivedCallback(::std::function<void()> callback) = 0;

    virtual void SetFirstPacketSentCallback(::std::function<void()> callback) = 0;

    virtual bool SetLocalContent(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) = 0;

    virtual bool SetRemoteContent(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) = 0;

    virtual bool SetPayloadTypeDemuxingEnabled(bool enabled) = 0;

    virtual ::std::vector<::webrtc::StreamParams> const& local_streams() const = 0;

    virtual ::std::vector<::webrtc::StreamParams> const& remote_streams() const = 0;

    virtual bool SetRtpTransport(::webrtc::RtpTransportInternal* rtp_transport) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
