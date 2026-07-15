#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BufferT.h"
#include "mc/external/webrtc/RtpTransport.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class PacketTransportInternal; }
namespace webrtc { class ReceivedIpPacket; }
namespace webrtc { class RtpPacketSinkInterface; }
namespace webrtc { struct AsyncSocketPacketOptions; }
namespace webrtc { struct NetworkRoute; }
// clang-format on

namespace webrtc {

class SrtpTransport : public ::webrtc::RtpTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfda4b5;
    ::ll::UntypedStorage<8, 8>  mUnk1d3d3a;
    ::ll::UntypedStorage<8, 8>  mUnkd8ecff;
    ::ll::UntypedStorage<8, 8>  mUnkd64893;
    ::ll::UntypedStorage<8, 8>  mUnkc48ed5;
    ::ll::UntypedStorage<4, 8>  mUnk69d279;
    ::ll::UntypedStorage<4, 8>  mUnk129ed6;
    ::ll::UntypedStorage<8, 24> mUnk96fea3;
    ::ll::UntypedStorage<8, 24> mUnk24ab60;
    ::ll::UntypedStorage<1, 1>  mUnkcc3a05;
    ::ll::UntypedStorage<1, 1>  mUnke5116d;
    ::ll::UntypedStorage<4, 4>  mUnkc2972a;
    ::ll::UntypedStorage<4, 4>  mUnk917354;
    ::ll::UntypedStorage<8, 8>  mUnkd42084;
    // NOLINTEND

public:
    // prevent constructor by default
    SrtpTransport& operator=(SrtpTransport const&);
    SrtpTransport(SrtpTransport const&);
    SrtpTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SrtpTransport() /*override*/;

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

    virtual bool IsWritable(bool rtcp) const /*override*/;

    virtual bool UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink) /*override*/;

    virtual void OnRtpPacketReceived(::webrtc::ReceivedIpPacket const& packet) /*override*/;

    virtual void OnRtcpPacketReceived(::webrtc::ReceivedIpPacket const& packet) /*override*/;

    virtual void OnNetworkRouteChanged(::std::optional<::webrtc::NetworkRoute> network_route) /*override*/;

    virtual void OnWritableState(::webrtc::PacketTransportInternal* packet_transport) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void EnableExternalAuth();

    MCNAPI void MaybeUpdateWritableState();

    MCNAPI void ResetParams();

    MCNAPI bool SetRtcpParams(
        int                                send_crypto_suite,
        ::webrtc::BufferT<uchar, 1> const& send_key,
        ::std::vector<int> const&          send_extension_ids,
        int                                recv_crypto_suite,
        ::webrtc::BufferT<uchar, 1> const& recv_key,
        ::std::vector<int> const&          recv_extension_ids
    );

    MCNAPI bool SetRtpParams(
        int                                send_crypto_suite,
        ::webrtc::BufferT<uchar, 1> const& send_key,
        ::std::vector<int> const&          send_extension_ids,
        int                                recv_crypto_suite,
        ::webrtc::BufferT<uchar, 1> const& recv_key,
        ::std::vector<int> const&          recv_extension_ids
    );

    MCNAPI SrtpTransport(bool rtcp_mux_enabled, ::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool rtcp_mux_enabled, ::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool
    $SendRtpPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCNAPI bool
    $SendRtcpPacket(::webrtc::CopyOnWriteBuffer* packet, ::webrtc::AsyncSocketPacketOptions const& options, int flags);

    MCNAPI bool $IsSrtpActive() const;

    MCNAPI bool $IsWritable(bool rtcp) const;

    MCNAPI bool $UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI void $OnRtpPacketReceived(::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void $OnRtcpPacketReceived(::webrtc::ReceivedIpPacket const& packet);

    MCNAPI void $OnNetworkRouteChanged(::std::optional<::webrtc::NetworkRoute> network_route);

    MCNAPI void $OnWritableState(::webrtc::PacketTransportInternal* packet_transport);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
