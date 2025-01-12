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
    MCAPI bool DtlsHandshakeCompleted();

    MCAPI DtlsSrtpTransport(bool, ::webrtc::FieldTrialsView const&);

    MCAPI bool
    ExtractParams(::cricket::DtlsTransportInternal*, int*, ::rtc::BufferT<uchar, 1>*, ::rtc::BufferT<uchar, 1>*);

    MCAPI bool IsDtlsActive();

    MCAPI bool IsDtlsConnected();

    MCAPI bool IsDtlsWritable();

    MCAPI void MaybeSetupDtlsSrtp();

    MCAPI void OnDtlsState(::cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    MCAPI void SetDtlsTransport(::cricket::DtlsTransportInternal*, ::cricket::DtlsTransportInternal**);

    MCAPI void SetDtlsTransports(::cricket::DtlsTransportInternal*, ::cricket::DtlsTransportInternal*);

    MCAPI void SetOnDtlsStateChange(::std::function<void()>);

    MCAPI void SetRtcpDtlsTransport(::cricket::DtlsTransportInternal*);

    MCAPI void SetRtpDtlsTransport(::cricket::DtlsTransportInternal*);

    MCAPI void SetupRtcpDtlsSrtp();

    MCAPI void SetupRtpDtlsSrtp();

    MCAPI void UpdateRecvEncryptedHeaderExtensionIds(::std::vector<int> const&);

    MCAPI void UpdateSendEncryptedHeaderExtensionIds(::std::vector<int> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool, ::webrtc::FieldTrialsView const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
