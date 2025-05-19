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
    MCNAPI void DeregisterReceivedPacketCallback(void*);

    MCNAPI void NotifyOnClose();

    MCNAPI void NotifyPacketReceived(::rtc::ReceivedPacket const&);

    MCNAPI PacketTransportInternal();

    MCNAPI void RegisterReceivedPacketCallback(
        void*,
        ::absl::AnyInvocable<void(::rtc::PacketTransportInternal*, ::rtc::ReceivedPacket const&)>
    );

    MCNAPI void SetOnCloseCallback(::absl::AnyInvocable<void() &&>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace rtc
