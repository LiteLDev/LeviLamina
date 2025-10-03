#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtpTransport.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class ReceivedPacket; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketOptions; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class RtpPacketSinkInterface; }
// clang-format on

namespace webrtc {

class SrtpTransport : public ::webrtc::RtpTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8092d9;
    ::ll::UntypedStorage<8, 8>  mUnkfe375f;
    ::ll::UntypedStorage<8, 8>  mUnkfea983;
    ::ll::UntypedStorage<8, 8>  mUnkd385e7;
    ::ll::UntypedStorage<8, 8>  mUnk62d06f;
    ::ll::UntypedStorage<4, 8>  mUnk69d279;
    ::ll::UntypedStorage<4, 8>  mUnk129ed6;
    ::ll::UntypedStorage<8, 24> mUnk109469;
    ::ll::UntypedStorage<8, 24> mUnk904e8c;
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
    // vIndex: 0
    virtual ~SrtpTransport() /*override*/;

    // vIndex: 8
    virtual bool
    SendRtpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags) /*override*/;

    // vIndex: 9
    virtual bool
    SendRtcpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags) /*override*/;

    // vIndex: 11
    virtual bool IsSrtpActive() const /*override*/;

    // vIndex: 7
    virtual bool IsWritable(bool rtcp) const /*override*/;

    // vIndex: 13
    virtual bool UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink) /*override*/;

    // vIndex: 15
    virtual void OnRtpPacketReceived(::rtc::ReceivedPacket const& packet) /*override*/;

    // vIndex: 16
    virtual void OnRtcpPacketReceived(::rtc::ReceivedPacket const& packet) /*override*/;

    // vIndex: 14
    virtual void OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute> network_route) /*override*/;

    // vIndex: 17
    virtual void OnWritableState(::rtc::PacketTransportInternal* packet_transport) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateSrtpSessions();

    MCNAPI void EnableExternalAuth();

    MCNAPI bool GetSrtpOverhead(int* srtp_overhead) const;

    MCNAPI void MaybeUpdateWritableState();

    MCNAPI bool ProtectRtcp(void* p, int in_len, int max_len, int* out_len);

    MCNAPI bool ProtectRtp(void* p, int in_len, int max_len, int* out_len);

    MCNAPI void ResetParams();

    MCNAPI bool SetRtcpParams(
        int                       send_crypto_suite,
        uchar const*              send_key,
        int                       send_key_len,
        ::std::vector<int> const& send_extension_ids,
        int                       recv_crypto_suite,
        uchar const*              recv_key,
        int                       recv_key_len,
        ::std::vector<int> const& recv_extension_ids
    );

    MCNAPI bool SetRtpParams(
        int                       send_crypto_suite,
        uchar const*              send_key,
        int                       send_key_len,
        ::std::vector<int> const& send_extension_ids,
        int                       recv_crypto_suite,
        uchar const*              recv_key,
        int                       recv_key_len,
        ::std::vector<int> const& recv_extension_ids
    );

    MCNAPI SrtpTransport(bool rtcp_mux_enabled, ::webrtc::FieldTrialsView const& field_trials);

    MCNAPI bool UnprotectRtcp(void* p, int in_len, int* out_len);

    MCNAPI bool UnprotectRtp(void* p, int in_len, int* out_len);
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
    MCNAPI bool $SendRtpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags);

    MCNAPI bool $SendRtcpPacket(::rtc::CopyOnWriteBuffer* packet, ::rtc::PacketOptions const& options, int flags);

    MCNAPI bool $IsSrtpActive() const;

    MCNAPI bool $IsWritable(bool rtcp) const;

    MCNAPI bool $UnregisterRtpDemuxerSink(::webrtc::RtpPacketSinkInterface* sink);

    MCNAPI void $OnRtpPacketReceived(::rtc::ReceivedPacket const& packet);

    MCNAPI void $OnRtcpPacketReceived(::rtc::ReceivedPacket const& packet);

    MCNAPI void $OnNetworkRouteChanged(::std::optional<::rtc::NetworkRoute> network_route);

    MCNAPI void $OnWritableState(::rtc::PacketTransportInternal* packet_transport);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
