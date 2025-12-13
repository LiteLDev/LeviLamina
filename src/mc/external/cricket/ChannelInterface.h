#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaContentDescription; }
namespace cricket { class MediaReceiveChannelInterface; }
namespace cricket { class MediaSendChannelInterface; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct StreamParams; }
namespace cricket { struct VideoChannel; }
namespace cricket { struct VoiceChannel; }
namespace webrtc { class RtpTransportInternal; }
// clang-format on

namespace cricket {

class ChannelInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChannelInterface() = default;

    virtual ::cricket::MediaType media_type() const = 0;

    virtual ::cricket::VideoChannel* AsVideoChannel() = 0;

    virtual ::cricket::VoiceChannel* AsVoiceChannel() = 0;

    virtual ::cricket::MediaSendChannelInterface* media_send_channel() = 0;

    virtual ::cricket::VideoMediaSendChannelInterface* video_media_send_channel() = 0;

    virtual ::cricket::VoiceMediaSendChannelInterface* voice_media_send_channel() = 0;

    virtual ::cricket::MediaReceiveChannelInterface* media_receive_channel() = 0;

    virtual ::cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel() = 0;

    virtual ::cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() = 0;

    virtual ::std::string_view transport_name() const = 0;

    virtual ::std::string const& mid() const = 0;

    virtual void Enable(bool) = 0;

    virtual void SetFirstPacketReceivedCallback(::std::function<void()>) = 0;

    virtual bool SetLocalContent(::cricket::MediaContentDescription const*, ::webrtc::SdpType, ::std::string&) = 0;

    virtual bool SetRemoteContent(::cricket::MediaContentDescription const*, ::webrtc::SdpType, ::std::string&) = 0;

    virtual bool SetPayloadTypeDemuxingEnabled(bool) = 0;

    virtual ::std::vector<::cricket::StreamParams> const& local_streams() const = 0;

    virtual ::std::vector<::cricket::StreamParams> const& remote_streams() const = 0;

    virtual bool SetRtpTransport(::webrtc::RtpTransportInternal*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cricket
