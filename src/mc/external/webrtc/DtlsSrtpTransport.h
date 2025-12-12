#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/SrtpTransport.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace rtc { class PacketTransportInternal; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class DtlsSrtpTransport : public ::webrtc::SrtpTransport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd1f353;
    ::ll::UntypedStorage<8, 8>  mUnk68dfc5;
    ::ll::UntypedStorage<8, 32> mUnk3b1eb3;
    ::ll::UntypedStorage<8, 32> mUnkca8629;
    ::ll::UntypedStorage<1, 1>  mUnkdd5b6e;
    ::ll::UntypedStorage<8, 64> mUnk644414;
    // NOLINTEND

public:
    // prevent constructor by default
    DtlsSrtpTransport& operator=(DtlsSrtpTransport const&);
    DtlsSrtpTransport(DtlsSrtpTransport const&);
    DtlsSrtpTransport();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void SetRtcpMuxEnabled(bool enable) /*override*/;

    virtual void OnWritableState(::rtc::PacketTransportInternal* packet_transport) /*override*/;

    virtual ~DtlsSrtpTransport() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool DtlsHandshakeCompleted();

    MCNAPI DtlsSrtpTransport(bool rtcp_mux_enabled, ::webrtc::FieldTrialsView const& field_trials);

    MCNAPI bool ExtractParams(
        ::cricket::DtlsTransportInternal* dtls_transport,
        int*                              selected_crypto_suite,
        ::rtc::BufferT<uchar, 1>*         send_key,
        ::rtc::BufferT<uchar, 1>*         recv_key
    );

    MCNAPI bool IsDtlsActive();

    MCNAPI bool IsDtlsConnected();

    MCNAPI bool IsDtlsWritable();

    MCNAPI void MaybeSetupDtlsSrtp();

    MCNAPI void OnDtlsState(::cricket::DtlsTransportInternal* transport, ::webrtc::DtlsTransportState state);

    MCNAPI void SetDtlsTransport(
        ::cricket::DtlsTransportInternal*  new_dtls_transport,
        ::cricket::DtlsTransportInternal** old_dtls_transport
    );

    MCNAPI void SetDtlsTransports(
        ::cricket::DtlsTransportInternal* rtp_dtls_transport,
        ::cricket::DtlsTransportInternal* rtcp_dtls_transport
    );

    MCNAPI void SetOnDtlsStateChange(::std::function<void()> callback);

    MCNAPI void SetRtcpDtlsTransport(::cricket::DtlsTransportInternal* rtcp_dtls_transport);

    MCNAPI void SetRtpDtlsTransport(::cricket::DtlsTransportInternal* rtp_dtls_transport);

    MCNAPI void SetupRtcpDtlsSrtp();

    MCNAPI void SetupRtpDtlsSrtp();

    MCNAPI void UpdateRecvEncryptedHeaderExtensionIds(::std::vector<int> const& recv_extension_ids);

    MCNAPI void UpdateSendEncryptedHeaderExtensionIds(::std::vector<int> const& send_extension_ids);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool rtcp_mux_enabled, ::webrtc::FieldTrialsView const& field_trials);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $SetRtcpMuxEnabled(bool enable);

    MCNAPI void $OnWritableState(::rtc::PacketTransportInternal* packet_transport);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
