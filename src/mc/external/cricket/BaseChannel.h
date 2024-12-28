#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SdpType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class MediaContentDescription; }
namespace cricket { class MediaReceiveChannelInterface; }
namespace cricket { class MediaSendChannelInterface; }
namespace cricket { struct StreamParams; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class Thread; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace cricket {

class BaseChannel {
public:
    // prevent constructor by default
    BaseChannel& operator=(BaseChannel const&);
    BaseChannel(BaseChannel const&);
    BaseChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BaseChannel(::webrtc::TaskQueueBase*, ::rtc::Thread*, ::webrtc::TaskQueueBase*, ::std::unique_ptr<::cricket::MediaSendChannelInterface>, ::std::unique_ptr<::cricket::MediaReceiveChannelInterface>, ::std::string_view, bool, ::webrtc::CryptoOptions, ::rtc::UniqueRandomIdGenerator*);

    MCAPI void ChannelNotWritable_n();

    MCAPI void ChannelWritable_n();

    MCAPI bool ClearHandledPayloadTypes();

    MCAPI bool ConnectToRtpTransport_n();

    MCAPI void DisableMedia_w();

    MCAPI void DisconnectFromRtpTransport_n();

    MCAPI void EnableMedia_w();

    MCAPI ::std::vector<::webrtc::RtpExtension>
    GetDeduplicatedRtpHeaderExtensions(::std::vector<::webrtc::RtpExtension> const&);

    MCAPI bool IsReadyToSendMedia_w() const;

    MCAPI bool MaybeAddHandledPayloadType(int);

    MCAPI bool
    MaybeUpdateDemuxerAndRtpExtensions_w(bool, ::std::optional<::std::vector<::webrtc::RtpExtension>>, ::std::string&);

    MCAPI void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCAPI void OnTransportReadyToSend(bool);

    MCAPI void OnWritableState(bool);

    MCAPI bool RegisterRtpDemuxerSink_w();

    MCAPI bool SendPacket(bool, ::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&);

    MCAPI bool SetPayloadTypeDemuxingEnabled_w(bool);

    MCAPI void SignalSentPacket_n(::rtc::SentPacket const&);

    MCAPI ::std::string ToString() const;

    MCAPI bool UpdateLocalStreams_w(::std::vector<::cricket::StreamParams> const&, ::webrtc::SdpType, ::std::string&);

    MCAPI bool UpdateRemoteStreams_w(::cricket::MediaContentDescription const*, ::webrtc::SdpType, ::std::string&);

    MCAPI void UpdateWritableState_n();

    MCAPI bool srtp_active() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::TaskQueueBase*, ::rtc::Thread*, ::webrtc::TaskQueueBase*, ::std::unique_ptr<::cricket::MediaSendChannelInterface>, ::std::unique_ptr<::cricket::MediaReceiveChannelInterface>, ::std::string_view, bool, ::webrtc::CryptoOptions, ::rtc::UniqueRandomIdGenerator*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForMediaChannelNetworkInterface();

    MCAPI static void** $vftableForChannelInterface();

    MCAPI static void** $vftableForRtpPacketSinkInterface();
    // NOLINTEND
};

} // namespace cricket
