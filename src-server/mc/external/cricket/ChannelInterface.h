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
    // vIndex: 0
    virtual ~ChannelInterface() = default;

    // vIndex: 1
    virtual ::cricket::MediaType media_type() const = 0;

    // vIndex: 2
    virtual ::cricket::VideoChannel* AsVideoChannel() = 0;

    // vIndex: 3
    virtual ::cricket::VoiceChannel* AsVoiceChannel() = 0;

    // vIndex: 4
    virtual ::cricket::MediaSendChannelInterface* media_send_channel() = 0;

    // vIndex: 5
    virtual ::cricket::VideoMediaSendChannelInterface* video_media_send_channel() = 0;

    // vIndex: 6
    virtual ::cricket::VoiceMediaSendChannelInterface* voice_media_send_channel() = 0;

    // vIndex: 7
    virtual ::cricket::MediaReceiveChannelInterface* media_receive_channel() = 0;

    // vIndex: 8
    virtual ::cricket::VideoMediaReceiveChannelInterface* video_media_receive_channel() = 0;

    // vIndex: 9
    virtual ::cricket::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() = 0;

    // vIndex: 10
    virtual ::std::string_view transport_name() const = 0;

    // vIndex: 11
    virtual ::std::string const& mid() const = 0;

    // vIndex: 12
    virtual void Enable(bool) = 0;

    // vIndex: 13
    virtual void SetFirstPacketReceivedCallback(::std::function<void()>) = 0;

    // vIndex: 14
    virtual bool SetLocalContent(::cricket::MediaContentDescription const*, ::webrtc::SdpType, ::std::string&) = 0;

    // vIndex: 15
    virtual bool SetRemoteContent(::cricket::MediaContentDescription const*, ::webrtc::SdpType, ::std::string&) = 0;

    // vIndex: 16
    virtual bool SetPayloadTypeDemuxingEnabled(bool) = 0;

    // vIndex: 17
    virtual ::std::vector<::cricket::StreamParams> const& local_streams() const = 0;

    // vIndex: 18
    virtual ::std::vector<::cricket::StreamParams> const& remote_streams() const = 0;

    // vIndex: 19
    virtual bool SetRtpTransport(::webrtc::RtpTransportInternal*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
