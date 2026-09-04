#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BaseChannel.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/VideoMediaReceiveChannelInterface.h"
#include "mc/external/webrtc/VideoMediaSendChannelInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaContentDescription; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class Thread; }
namespace webrtc { class UniqueRandomIdGenerator; }
namespace webrtc { class VoiceChannel; }
namespace webrtc { struct CryptoOptions; }
// clang-format on

namespace webrtc {

class VideoChannel : public ::webrtc::BaseChannel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 120> mUnkf336ba;
    ::ll::UntypedStorage<8, 104> mUnk1c577d;
    // NOLINTEND

public:
    // prevent constructor by default
    VideoChannel& operator=(VideoChannel const&);
    VideoChannel(VideoChannel const&);
    VideoChannel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VideoChannel() /*override*/ = default;

    virtual ::webrtc::VideoChannel* AsVideoChannel() /*override*/;

    virtual ::webrtc::VoiceChannel* AsVoiceChannel() /*override*/;

    virtual ::webrtc::VideoMediaSendChannelInterface* media_send_channel() /*override*/;

    virtual ::webrtc::VideoMediaSendChannelInterface* video_media_send_channel() /*override*/;

    virtual ::webrtc::VideoMediaReceiveChannelInterface* media_receive_channel() /*override*/;

    virtual ::webrtc::VideoMediaReceiveChannelInterface* video_media_receive_channel() /*override*/;

    virtual ::webrtc::MediaType media_type() const /*override*/;

    virtual void UpdateMediaSendRecvState_w() /*override*/;

    virtual bool SetLocalContent_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) /*override*/;

    virtual bool SetRemoteContent_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VideoChannel(
        ::webrtc::TaskQueueBase*                                       worker_thread,
        ::webrtc::Thread*                                              network_thread,
        ::webrtc::TaskQueueBase*                                       signaling_thread,
        ::std::unique_ptr<::webrtc::VideoMediaSendChannelInterface>    media_send_channel,
        ::std::unique_ptr<::webrtc::VideoMediaReceiveChannelInterface> media_receive_channel,
        ::std::string_view                                             mid,
        bool                                                           srtp_required,
        ::webrtc::CryptoOptions                                        crypto_options,
        ::webrtc::UniqueRandomIdGenerator*                             ssrc_generator
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*                                       worker_thread,
        ::webrtc::Thread*                                              network_thread,
        ::webrtc::TaskQueueBase*                                       signaling_thread,
        ::std::unique_ptr<::webrtc::VideoMediaSendChannelInterface>    media_send_channel,
        ::std::unique_ptr<::webrtc::VideoMediaReceiveChannelInterface> media_receive_channel,
        ::std::string_view                                             mid,
        bool                                                           srtp_required,
        ::webrtc::CryptoOptions                                        crypto_options,
        ::webrtc::UniqueRandomIdGenerator*                             ssrc_generator
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::VideoChannel* $AsVideoChannel();

    MCNAPI ::webrtc::VoiceChannel* $AsVoiceChannel();

    MCNAPI ::webrtc::VideoMediaSendChannelInterface* $media_send_channel();

    MCNAPI ::webrtc::VideoMediaSendChannelInterface* $video_media_send_channel();

    MCNAPI ::webrtc::VideoMediaReceiveChannelInterface* $media_receive_channel();

    MCNAPI ::webrtc::VideoMediaReceiveChannelInterface* $video_media_receive_channel();

    MCNAPI ::webrtc::MediaType $media_type() const;

    MCNAPI void $UpdateMediaSendRecvState_w();

    MCNAPI bool $SetLocalContent_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    );

    MCNAPI bool $SetRemoteContent_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForChannelInterface();

    MCNAPI static void** $vftableForRtpPacketSinkInterface();

    MCNAPI static void** $vftableForMediaChannelNetworkInterface();
    // NOLINTEND
};

} // namespace webrtc
