#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class IceTransportInternal; }
// clang-format on

namespace cricket {

class StreamInterfaceChannel {
public:
    // prevent constructor by default
    StreamInterfaceChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool OnPacketReceived(char const*, uint64);

    MCNAPI explicit StreamInterfaceChannel(::cricket::IceTransportInternal*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::IceTransportInternal*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
