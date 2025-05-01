#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class UDPPort; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunBindingRequest {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunBindingRequest(::cricket::UDPPort*, ::rtc::SocketAddress const&, int64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::UDPPort*, ::rtc::SocketAddress const&, int64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
