#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/NetworkBindingResult.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
// clang-format on

namespace rtc {

class NetworkBinderInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::rtc::NetworkBindingResult BindSocketToNetwork(int, ::rtc::IPAddress const&) = 0;

    // vIndex: 1
    virtual ~NetworkBinderInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
