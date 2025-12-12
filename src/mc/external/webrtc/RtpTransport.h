#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/EcnMarking.h"
#include "mc/external/rtc/Socket.h"
#include "mc/external/webrtc/RtpTransportInternal.h"
#include "mc/external/webrtc/flat_tree.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class ReceivedPacket; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct SentPacket; }
namespace webrtc { class RtpDemuxerCriteria; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { class Timestamp; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct identity; }
// clang-format on

namespace webrtc {

class RtpTransport : public ::webrtc::RtpTransportInternal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk8562fd;
    ::ll::UntypedStorage<8, 8>   mUnkb8d2f7;
    ::ll::UntypedStorage<8, 8>   mUnk10d3d3;
    ::ll::UntypedStorage<1, 1>   mUnk97e80b;
    ::ll::UntypedStorage<1, 1>   mUnkae4dea;
    ::ll::UntypedStorage<1, 1>   mUnk267e0f;
    ::ll::UntypedStorage<8, 248> mUnkdfc999;
    ::ll::UntypedStorage<1, 22>  mUnk8b2dfc;
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

    virtual int SetRtpOption(::rtc::Socket::Option opt, int value) /*override*/;

    virtual int SetRtcpOption(::rtc::Socket::Option opt, int value) /*override*/;

    virtual bool IsReadyToSend() const /*override*/;

    virtual bool IsWritable(bool rtcp) const /*override*/;

    virtual bool
    SendRtpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags) /*override*/;

    virtual bool
    SendRtcpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags) /*override*/;

    virtual bool IsSrtpActive() const /*override*/;

    virtual void
    UpdateRtpHeaderExtensionMap(::std::vector<::webrtc::RtpExtension> const& header_extensions) /*override*/;

    virtual bool RegisterRtpDemuxerSink(
        ::webrtc::RtpDemuxerCriteria const& criteria,
        ::webrtc::RtpPacketSinkInterface*   sink
    ) /*override*/;

    virtual bool UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink) /*override*/;

    virtual void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute> network_route);

    virtual void OnRtpPacketReceived(::rtc::ReceivedPacket const& received_packet);

    virtual void OnRtcpPacketReceived(::rtc::ReceivedPacket const& received_packet);

    virtual void OnWritableState(::rtc::PacketTransportInternal* packet_transport);

    virtual ~RtpTransport() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void DemuxPacket(::rtc::CopyOnWriteBuffer packet, ::webrtc::Timestamp arrival_time, ::rtc::EcnMarking ecn);

    MCNAPI ::webrtc::flat_containers_internal::
        flat_tree<uint, ::webrtc::identity, ::std::less<void>, ::std::vector<uint>>
        GetSsrcsForSink(::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI bool IsTransportWritable();

    MCNAPI void MaybeSignalReadyToSend();

    MCNAPI void OnReadPacket(::rtc::PacketTransportInternal* transport, ::rtc::ReceivedPacket const& received_packet);

    MCNAPI void OnReadyToSend(::rtc::PacketTransportInternal* transport);

    MCNAPI void OnSentPacket(::rtc::PacketTransportInternal* packet_transport, ::rtc::SentPacket const& sent_packet);

    MCNAPI bool SendPacket(bool rtcp, ::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags);

    MCNAPI void SetReadyToSend(bool rtcp, bool ready);

    MCNAPI void SetRtcpPacketTransport(::rtc::PacketTransportInternal* new_packet_transport);

    MCNAPI void SetRtpPacketTransport(::rtc::PacketTransportInternal* new_packet_transport);
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

    MCNAPI int $SetRtpOption(::rtc::Socket::Option opt, int value);

    MCNAPI int $SetRtcpOption(::rtc::Socket::Option opt, int value);

    MCNAPI bool $IsReadyToSend() const;

    MCNAPI bool $IsWritable(bool rtcp) const;

    MCNAPI bool $SendRtpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags);

    MCNAPI bool $SendRtcpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags);

    MCNAPI bool $IsSrtpActive() const;

    MCNAPI void $UpdateRtpHeaderExtensionMap(::std::vector<::webrtc::RtpExtension> const& header_extensions);

    MCNAPI bool
    $RegisterRtpDemuxerSink(::webrtc::RtpDemuxerCriteria const& criteria, ::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI bool $UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI void $OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute> network_route);

    MCNAPI void $OnRtpPacketReceived(::rtc::ReceivedPacket const& received_packet);

    MCNAPI void $OnRtcpPacketReceived(::rtc::ReceivedPacket const& received_packet);

    MCNAPI void $OnWritableState(::rtc::PacketTransportInternal* packet_transport);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
