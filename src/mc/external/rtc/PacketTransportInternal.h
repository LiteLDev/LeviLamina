#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class ReceivedPacket; }
// clang-format on

namespace rtc {

class PacketTransportInternal {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void DeregisterReceivedPacketCallback(void*);

    MCAPI void NotifyOnClose();

    MCAPI void NotifyPacketReceived(::rtc::ReceivedPacket const&);

    MCAPI PacketTransportInternal();

    MCAPI void
    RegisterReceivedPacketCallback(void*, ::absl::AnyInvocable<void(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&)>);

    MCAPI void SetOnCloseCallback(::absl::AnyInvocable<void() &&>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
