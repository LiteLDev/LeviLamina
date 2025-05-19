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
    BaseChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseChannel(
        ::webrtc::TaskQueueBase*,
        ::rtc::Thread*,
        ::webrtc::TaskQueueBase*,
        ::std::unique_ptr<::cricket::MediaSendChannelInterface>,
        ::std::unique_ptr<::cricket::MediaReceiveChannelInterface>,
        ::std::string_view,
        bool,
        ::webrtc::CryptoOptions,
        ::rtc::UniqueRandomIdGenerator*
    );

    MCNAPI void ChannelNotWritable_n();

    MCNAPI void ChannelWritable_n();

    MCNAPI bool ClearHandledPayloadTypes();

    MCNAPI bool ConnectToRtpTransport_n();

    MCNAPI void DisableMedia_w();

    MCNAPI void DisconnectFromRtpTransport_n();

    MCNAPI void EnableMedia_w();

    MCNAPI ::std::vector<::webrtc::RtpExtension>
    GetDeduplicatedRtpHeaderExtensions(::std::vector<::webrtc::RtpExtension> const&);

    MCNAPI bool IsReadyToSendMedia_w() const;

    MCNAPI bool MaybeAddHandledPayloadType(int);

    MCNAPI bool
    MaybeUpdateDemuxerAndRtpExtensions_w(bool, ::std::optional<::std::vector<::webrtc::RtpExtension>>, ::std::string&);

    MCNAPI void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute>);

    MCNAPI void OnTransportReadyToSend(bool);

    MCNAPI void OnWritableState(bool);

    MCNAPI bool RegisterRtpDemuxerSink_w();

    MCNAPI bool SendPacket(bool, ::rtc::CopyOnWriteBuffer*, ::rtc::PacketOptions const&);

    MCNAPI bool SetPayloadTypeDemuxingEnabled_w(bool);

    MCNAPI void SignalSentPacket_n(::rtc::SentPacket const&);

    MCNAPI ::std::string ToString() const;

    MCNAPI bool UpdateLocalStreams_w(::std::vector<::cricket::StreamParams> const&, ::webrtc::SdpType, ::std::string&);

    MCNAPI bool UpdateRemoteStreams_w(::cricket::MediaContentDescription const*, ::webrtc::SdpType, ::std::string&);

    MCNAPI void UpdateWritableState_n();

    MCNAPI bool srtp_active() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::TaskQueueBase*,
        ::rtc::Thread*,
        ::webrtc::TaskQueueBase*,
        ::std::unique_ptr<::cricket::MediaSendChannelInterface>,
        ::std::unique_ptr<::cricket::MediaReceiveChannelInterface>,
        ::std::string_view,
        bool,
        ::webrtc::CryptoOptions,
        ::rtc::UniqueRandomIdGenerator*
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForMediaChannelNetworkInterface();

    MCNAPI static void** $vftableForChannelInterface();

    MCNAPI static void** $vftableForRtpPacketSinkInterface();
    // NOLINTEND
};

} // namespace cricket
