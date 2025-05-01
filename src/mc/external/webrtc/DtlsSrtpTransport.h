#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/BufferT.h"
#include "mc/external/webrtc/DtlsTransportState.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class DtlsSrtpTransport {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool DtlsHandshakeCompleted();

    MCNAPI DtlsSrtpTransport(bool, ::webrtc::FieldTrialsView const&);

    MCNAPI bool
    ExtractParams(::cricket::DtlsTransportInternal*, int*, ::rtc::BufferT<uchar, 1>*, ::rtc::BufferT<uchar, 1>*);

    MCNAPI bool IsDtlsActive();

    MCNAPI bool IsDtlsConnected();

    MCNAPI bool IsDtlsWritable();

    MCNAPI void MaybeSetupDtlsSrtp();

    MCNAPI void OnDtlsState(::cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    MCNAPI void SetDtlsTransport(::cricket::DtlsTransportInternal*, ::cricket::DtlsTransportInternal**);

    MCNAPI void SetDtlsTransports(::cricket::DtlsTransportInternal*, ::cricket::DtlsTransportInternal*);

    MCNAPI void SetOnDtlsStateChange(::std::function<void()>);

    MCNAPI void SetRtcpDtlsTransport(::cricket::DtlsTransportInternal*);

    MCNAPI void SetRtpDtlsTransport(::cricket::DtlsTransportInternal*);

    MCNAPI void SetupRtcpDtlsSrtp();

    MCNAPI void SetupRtpDtlsSrtp();

    MCNAPI void UpdateRecvEncryptedHeaderExtensionIds(::std::vector<int> const&);

    MCNAPI void UpdateSendEncryptedHeaderExtensionIds(::std::vector<int> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
