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
    // prevent constructor by default
    StunXorAddressAttribute();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::rtc::IPAddress GetXoredIP() const;

    MCNAPI StunXorAddressAttribute(ushort, ::rtc::SocketAddress const&);

    MCNAPI StunXorAddressAttribute(ushort, ushort, ::cricket::StunMessage*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(ushort, ::rtc::SocketAddress const&);

    MCNAPI void* $ctor(ushort, ushort, ::cricket::StunMessage*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
