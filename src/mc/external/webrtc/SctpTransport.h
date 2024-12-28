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
    // prevent constructor by default
    SctpTransport& operator=(SctpTransport const&);
    SctpTransport(SctpTransport const&);
    SctpTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Clear();

    MCAPI void OnAssociationChangeCommunicationUp();

    MCAPI void OnDtlsStateChange(::cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    MCAPI
    SctpTransport(::std::unique_ptr<::cricket::SctpTransportInternal>, ::webrtc::scoped_refptr<::webrtc::DtlsTransport>);

    MCAPI void Start(int, int, int);

    MCAPI void UpdateInformation(::webrtc::SctpTransportState);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
        $ctor(::std::unique_ptr<::cricket::SctpTransportInternal>, ::webrtc::scoped_refptr<::webrtc::DtlsTransport>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForSctpTransportInterface();

    MCAPI static void** $vftableForDataChannelTransportInterface();
    // NOLINTEND
};

} // namespace webrtc
