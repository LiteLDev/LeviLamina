#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class StunMessage; }
namespace rtc { class IPAddress; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class StunXorAddressAttribute {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::rtc::IPAddress GetXoredIP() const;

    MCAPI StunXorAddressAttribute(ushort, ::rtc::SocketAddress const&);

    MCAPI StunXorAddressAttribute(ushort, ushort, ::cricket::StunMessage*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort, ::rtc::SocketAddress const&);

    MCAPI void* $ctor(ushort, ushort, ::cricket::StunMessage*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
