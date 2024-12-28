#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class P2PTransportChannel; }
// clang-format on

namespace webrtc {

class DefaultIceTransport {
public:
    // prevent constructor by default
    DefaultIceTransport& operator=(DefaultIceTransport const&);
    DefaultIceTransport(DefaultIceTransport const&);
    DefaultIceTransport();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DefaultIceTransport(::std::unique_ptr<::cricket::P2PTransportChannel>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::unique_ptr<::cricket::P2PTransportChannel>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
