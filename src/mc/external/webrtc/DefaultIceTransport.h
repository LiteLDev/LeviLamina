#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class P2PTransportChannel; }
// clang-format on

namespace webrtc {

class DefaultIceTransport {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DefaultIceTransport(::std::unique_ptr<::cricket::P2PTransportChannel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::unique_ptr<::cricket::P2PTransportChannel>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
