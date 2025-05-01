#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtlsTransportState.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class DtlsTransportInternal; }
namespace webrtc { class DtlsTransportInformation; }
// clang-format on

namespace webrtc {

class DtlsTransport {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Clear();

    MCNAPI explicit DtlsTransport(::std::unique_ptr<::cricket::DtlsTransportInternal>);

    MCNAPI void OnInternalDtlsState(::cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    MCNAPI void UpdateInformation();

    MCNAPI void set_info(::webrtc::DtlsTransportInformation&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::cricket::DtlsTransportInternal>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
