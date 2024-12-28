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
    StreamInterfaceChannel& operator=(StreamInterfaceChannel const&);
    StreamInterfaceChannel(StreamInterfaceChannel const&);
    StreamInterfaceChannel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool OnPacketReceived(char const*, uint64);

    MCAPI explicit StreamInterfaceChannel(::cricket::IceTransportInternal*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::IceTransportInternal*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
