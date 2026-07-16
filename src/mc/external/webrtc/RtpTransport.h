#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/EcnMarking.h"
#include "mc/external/webrtc/RtpTransportInternal.h"
#include "mc/external/webrtc/Socket.h"
#include "mc/external/webrtc/flat_tree.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class PacketTransportInternal; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct NetworkRoute; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct SentPacketInfo; }
namespace webrtc { struct identity; }
// clang-format on

namespace webrtc {

class RtpTransport : public ::webrtc::RtpTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk8562fd;
    ::ll::UntypedStorage<8, 8>   mUnk5a98c3;
    ::ll::UntypedStorage<8, 8>   mUnkbd7226;
    ::ll::UntypedStorage<1, 1>   mUnk97e80b;
    ::ll::UntypedStorage<1, 1>   mUnkae4dea;
    ::ll::UntypedStorage<1, 1>   mUnk267e0f;
    ::ll::UntypedStorage<8, 248> mUnkdfc999;
    ::ll::UntypedStorage<1, 23>  mUnk8b2dfc;
    ::ll::UntypedStorage<1, 1>   mUnkb355f1;
    ::ll::UntypedStorage<1, 1>   mUnk86a616;
    ::ll::UntypedStorage<8, 8>   mUnkf5a1f2;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpTransport& operator=(RtpTransport const&);
    RtpTransport(RtpTransport const&);
    RtpTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool rtcp_mux_enabled() const /*override*/;

    virtual void SetRtcpMuxEnabled(bool enable) /*override*/;

    virtual ::std::string const& transport_name() const /*override*/;

    virtual int SetRtpOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual int SetRtcpOption(::webrtc::Socket::Option opt, int value) /*override*/;

    virtual bool IsReadyToSend() const /*override*/;

    virtual bool IsWritable(bool rtcp) const /*override*/;

    virtual bool SendRtpPacket(
        ::webrtc::CopyOnWriteBuffer*              packet,
        ::webrtc::AsyncSocketPacketOptions const& options,
        int                                       flags
    ) /*override*/;

    virtual bool SendRtcpPacket(
        ::webrtc::CopyOnWriteBuffer*              packet,
        ::webrtc::AsyncSocketPacketOptions const& options,
        int                                       flags
    ) /*override*/;

    virtual bool IsSrtpActive() const /*override*/;

    virtual void
    UpdateRtpHeaderExtensionMap(::std::vector<::webrtc::RtpExtension> const& header_extensions) /*override*/;

    virtual bool RegisterRtpDemuxerSink(
        ::webrtc::RtpDemuxerCriteria const& criteria,
        ::webrtc::RtpPacketSinkInterface*   sink
    ) /*override*/;

    virtual bool UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink) /*override*/;

    virtual void OnNetworkRouteChanged(::std::optional<::webrtc::NetworkRoute> network_route);

    virtual void OnRtpPacketReceived(::webrtc::ReceivedIpPacket const& received_packet);

    virtual void OnRtcpPacketReceived(::webrtc::ReceivedIpPacket const& received_packet);

    virtual void OnWritableState(::webrtc::PacketTransportInternal* packet_transport);

    virtual ~RtpTransport() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    DemuxPacket(::webrtc::CopyOnWriteBuffer packet, ::webrtc::Timestamp arrival_time, ::webrtc::EcnMarking ecn);

    MCNAPI ::webrtc::flat_containers_internal::
        flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>>
        GetSsrcsForSink(::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI void MaybeSignalReadyToSend();

    MCNAPI void
    OnReadPacket(::webrtc::PacketTransportInternal* transport, ::webrtc::ReceivedIpPacket const& received_packet);

    MCNAPI void OnReadyToSend(::webrtc::PacketTransportInternal* transport);

    MCNAPI void
    OnSentPacket(::webrtc::PacketTransportInternal* packet_transport, ::webrtc::SentPacketInfo const& sent_packet);

    MCNAPI bool SendPacket(
        bool                                      rtcp,
        ::webrtc::CopyOnWriteBuffer*              packet,
        ::webrtc::AsyncSocketPacketOptions const& options,
        int                                       flags
    );

    MCNAPI void SetRtcpPacketTransport(::webrtc::PacketTransportInternal* new_packet_transport);

    MCNAPI void SetRtpPacketTransport(::webrtc::PacketTransportInternal* new_packet_transport);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $rtcp_mux_enabled() const;

    MCNAPI void $SetRtcpMuxEnabled(bool enable);

    MCNAPI ::std::string const& $transport_name() const;

    MCNAPI int $SetRtpOption(::webrtc::Socket::Option opt, int value);

    MCNAPI int $SetRtcpOption(::webrtc::Socket::Option opt, int value);

    MCNAPI bool $IsReadyToSend() const;

    MCNAPI bool $IsWritable(bool rtcp) const;

    MCNAPI bool
    $SendRtpPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCNAPI bool
    $SendRtcpPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCNAPI bool $IsSrtpActive() const;

    MCNAPI void $UpdateRtpHeaderExtensionMap(::std::vector<::webrtc::RtpExtension> const& header_extensions);

    MCNAPI bool
    $RegisterRtpDemuxerSink(::webrtc::RtpDemuxerCriteria const& criteria, ::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI bool $UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI void $OnNetworkRouteChanged(::std::optional<::webrtc::NetworkRoute> network_route);

    MCNAPI void $OnRtpPacketReceived(::webrtc::ReceivedIpPacket const& received_packet);

    MCNAPI void $OnRtcpPacketReceived(::webrtc::ReceivedIpPacket const& received_packet);

    MCNAPI void $OnWritableState(::webrtc::PacketTransportInternal* packet_transport);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
