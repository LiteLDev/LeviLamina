#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/SctpTransportState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class SctpTransportInternal; }
namespace webrtc { class DtlsTransport; }
// clang-format on

namespace webrtc {

class SctpTransport {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI void OnAssociationChangeCommunicationUp();

    MCNAPI void OnDtlsStateChange(::cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    MCNAPI
    SctpTransport(::std::unique_ptr<::cricket::SctpTransportInternal>, ::webrtc::scoped_refptr<::webrtc::DtlsTransport>);

    MCNAPI void Start(int, int, int);

    MCNAPI void UpdateInformation(::webrtc::SctpTransportState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
        $ctor(::std::unique_ptr<::cricket::SctpTransportInternal>, ::webrtc::scoped_refptr<::webrtc::DtlsTransport>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForSctpTransportInterface();

    MCNAPI static void** $vftableForDataChannelTransportInterface();
    // NOLINTEND
};

} // namespace webrtc
