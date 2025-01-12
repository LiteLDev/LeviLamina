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
    MCAPI void Clear();

    MCAPI explicit DtlsTransport(::std::unique_ptr<::cricket::DtlsTransportInternal>);

    MCAPI void OnInternalDtlsState(::cricket::DtlsTransportInternal*, ::webrtc::DtlsTransportState);

    MCAPI void UpdateInformation();

    MCAPI void set_info(::webrtc::DtlsTransportInformation&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::cricket::DtlsTransportInternal>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
