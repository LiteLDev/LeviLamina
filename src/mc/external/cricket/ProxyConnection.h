#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class PortInterface; }
// clang-format on

namespace cricket {

class ProxyConnection {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProxyConnection(::rtc::WeakPtr<::cricket::PortInterface>, uint64, ::cricket::Candidate const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::WeakPtr<::cricket::PortInterface>, uint64, ::cricket::Candidate const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
