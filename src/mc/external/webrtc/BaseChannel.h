#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ChannelInterface.h"
#include "mc/external/webrtc/MediaChannelNetworkInterface.h"
#include "mc/external/webrtc/RtpPacketSinkInterface.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/Socket.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class MediaContentDescription; }
namespace webrtc { class MediaReceiveChannelInterface; }
namespace webrtc { class MediaSendChannelInterface; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class Thread; }
namespace webrtc { class UniqueRandomIdGenerator; }
namespace webrtc { class VideoMediaReceiveChannelInterface; }
namespace webrtc { class VideoMediaSendChannelInterface; }
namespace webrtc { class VoiceMediaReceiveChannelInterface; }
namespace webrtc { class VoiceMediaSendChannelInterface; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct StreamParams; }
// clang-format on

namespace webrtc {

class BaseChannel : public ::webrtc::ChannelInterface,
                    public ::webrtc::MediaChannelNetworkInterface,
                    public ::webrtc::RtpPacketSinkInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk117f8c;
    ::ll::UntypedStorage<8, 8>   mUnk8da9d2;
    ::ll::UntypedStorage<8, 8>   mUnkc323d3;
    ::ll::UntypedStorage<8, 8>   mUnk5c7572;
    ::ll::UntypedStorage<8, 8>   mUnk8c71db;
    ::ll::UntypedStorage<8, 8>   mUnk35c471;
    ::ll::UntypedStorage<8, 64>  mUnk8a4672;
    ::ll::UntypedStorage<8, 64>  mUnk382937;
    ::ll::UntypedStorage<8, 8>   mUnkb2a9f1;
    ::ll::UntypedStorage<8, 24>  mUnka3ed7b;
    ::ll::UntypedStorage<8, 24>  mUnkdf42f6;
    ::ll::UntypedStorage<1, 1>   mUnk21901e;
    ::ll::UntypedStorage<1, 1>   mUnk3de49a;
    ::ll::UntypedStorage<1, 1>   mUnk6a591e;
    ::ll::UntypedStorage<1, 1>   mUnk94ad59;
    ::ll::UntypedStorage<4, 4>   mUnkbc057e;
    ::ll::UntypedStorage<1, 1>   mUnke0e696;
    ::ll::UntypedStorage<1, 1>   mUnk94a9ba;
    ::ll::UntypedStorage<1, 1>   mUnkbe9cc1;
    ::ll::UntypedStorage<8, 24>  mUnk16a138;
    ::ll::UntypedStorage<8, 24>  mUnkb9f3f2;
    ::ll::UntypedStorage<4, 4>   mUnkf8395f;
    ::ll::UntypedStorage<4, 4>   mUnkaea4ec;
    ::ll::UntypedStorage<8, 32>  mUnk345786;
    ::ll::UntypedStorage<8, 24>  mUnk10a28a;
    ::ll::UntypedStorage<8, 128> mUnk7306cf;
    ::ll::UntypedStorage<8, 8>   mUnk908d87;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseChannel& operator=(BaseChannel const&);
    BaseChannel(BaseChannel const&);
    BaseChannel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseChannel() /*override*/;

    virtual ::std::string const& mid() const /*override*/;

    virtual ::std::string_view transport_name() const /*override*/;

    virtual bool SetRtpTransport(::webrtc::RtpTransportInternal* rtp_transport) /*override*/;

    virtual bool SetLocalContent(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) /*override*/;

    virtual bool SetRemoteContent(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) /*override*/;

    virtual bool SetPayloadTypeDemuxingEnabled(bool enabled) /*override*/;

    virtual void Enable(bool enable) /*override*/;

    virtual ::std::vector<::webrtc::StreamParams> const& local_streams() const /*override*/;

    virtual ::std::vector<::webrtc::StreamParams> const& remote_streams() const /*override*/;

    virtual void SetFirstPacketReceivedCallback(::std::function<void()> callback) /*override*/;

    virtual void SetFirstPacketSentCallback(::std::function<void()> callback) /*override*/;

    virtual int SetOption(
        ::webrtc::MediaChannelNetworkInterface::SocketType type,
        ::webrtc::Socket::Option                           opt,
        int                                                value
    ) /*override*/;

    virtual void OnRtpPacket(::webrtc::RtpPacketReceived const& parsed_packet) /*override*/;

    virtual ::webrtc::VideoMediaSendChannelInterface* video_media_send_channel() /*override*/;

    virtual ::webrtc::VoiceMediaSendChannelInterface* voice_media_send_channel() /*override*/;

    virtual ::webrtc::VideoMediaReceiveChannelInterface* video_media_receive_channel() /*override*/;

    virtual ::webrtc::VoiceMediaReceiveChannelInterface* voice_media_receive_channel() /*override*/;

    virtual bool
    SendPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options) /*override*/;

    virtual bool
    SendRtcp(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options) /*override*/;

    virtual void UpdateMediaSendRecvState_w() = 0;

    virtual bool SetLocalContent_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) = 0;

    virtual bool SetRemoteContent_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    ) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseChannel(
        ::webrtc::TaskQueueBase*                                  worker_thread,
        ::webrtc::Thread*                                         network_thread,
        ::webrtc::TaskQueueBase*                                  signaling_thread,
        ::std::unique_ptr<::webrtc::MediaSendChannelInterface>    send_media_channel_impl,
        ::std::unique_ptr<::webrtc::MediaReceiveChannelInterface> receive_media_channel_impl,
        ::std::string_view                                        mid,
        bool                                                      srtp_required,
        ::webrtc::CryptoOptions                                   crypto_options,
        ::webrtc::UniqueRandomIdGenerator*                        ssrc_generator
    );

    MCNAPI void ChannelNotWritable_n();

    MCNAPI void ChannelWritable_n();

    MCNAPI bool ConnectToRtpTransport_n();

    MCNAPI void DisableMedia_w();

    MCNAPI bool MaybeAddHandledPayloadType(int payload_type);

    MCNAPI bool MaybeUpdateDemuxerAndRtpExtensions_w(
        bool                                                   update_demuxer,
        ::std::optional<::std::vector<::webrtc::RtpExtension>> extensions,
        ::std::string&                                         error_desc
    );

    MCNAPI bool RegisterRtpDemuxerSink_w();

    MCNAPI bool
    SendPacket(bool rtcp, ::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options);

    MCNAPI ::std::string ToString() const;

    MCNAPI bool UpdateLocalStreams_w(
        ::std::vector<::webrtc::StreamParams> const& streams,
        ::webrtc::SdpType                            type,
        ::std::string&                               error_desc
    );

    MCNAPI bool UpdateRemoteStreams_w(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    );

    MCNAPI bool srtp_active() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*                                  worker_thread,
        ::webrtc::Thread*                                         network_thread,
        ::webrtc::TaskQueueBase*                                  signaling_thread,
        ::std::unique_ptr<::webrtc::MediaSendChannelInterface>    send_media_channel_impl,
        ::std::unique_ptr<::webrtc::MediaReceiveChannelInterface> receive_media_channel_impl,
        ::std::string_view                                        mid,
        bool                                                      srtp_required,
        ::webrtc::CryptoOptions                                   crypto_options,
        ::webrtc::UniqueRandomIdGenerator*                        ssrc_generator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $mid() const;

    MCNAPI ::std::string_view $transport_name() const;

    MCNAPI bool $SetRtpTransport(::webrtc::RtpTransportInternal* rtp_transport);

    MCNAPI bool $SetLocalContent(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    );

    MCNAPI bool $SetRemoteContent(
        ::webrtc::MediaContentDescription const* content,
        ::webrtc::SdpType                        type,
        ::std::string&                           error_desc
    );

    MCNAPI bool $SetPayloadTypeDemuxingEnabled(bool enabled);

    MCNAPI void $Enable(bool enable);

    MCNAPI ::std::vector<::webrtc::StreamParams> const& $local_streams() const;

    MCNAPI ::std::vector<::webrtc::StreamParams> const& $remote_streams() const;

    MCNAPI void $SetFirstPacketReceivedCallback(::std::function<void()> callback);

    MCNAPI void $SetFirstPacketSentCallback(::std::function<void()> callback);

    MCNAPI int
    $SetOption(::webrtc::MediaChannelNetworkInterface::SocketType type, ::webrtc::Socket::Option opt, int value);

    MCNAPI void $OnRtpPacket(::webrtc::RtpPacketReceived const& parsed_packet);

    MCNAPI ::webrtc::VideoMediaSendChannelInterface* $video_media_send_channel();

    MCNAPI ::webrtc::VoiceMediaSendChannelInterface* $voice_media_send_channel();

    MCNAPI ::webrtc::VideoMediaReceiveChannelInterface* $video_media_receive_channel();

    MCNAPI ::webrtc::VoiceMediaReceiveChannelInterface* $voice_media_receive_channel();

    MCNAPI bool $SendPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options);

    MCNAPI bool $SendRtcp(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpPacketSinkInterface();

    MCNAPI static void** $vftableForMediaChannelNetworkInterface();

    MCNAPI static void** $vftableForChannelInterface();
    // NOLINTEND
};

} // namespace webrtc
