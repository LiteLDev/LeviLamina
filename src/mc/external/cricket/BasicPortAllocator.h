#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class RelayPortFactoryInterface; }
namespace rtc { class NetworkManager; }
namespace rtc { class PacketSocketFactory; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class BasicPortAllocator {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    BasicPortAllocator(::rtc::NetworkManager*, ::rtc::PacketSocketFactory*, ::webrtc::TurnCustomizer*, ::cricket::RelayPortFactoryInterface*, ::webrtc::FieldTrialsView const*);

    MCAPI int GetNetworkIgnoreMask() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::rtc::NetworkManager*, ::rtc::PacketSocketFactory*, ::webrtc::TurnCustomizer*, ::cricket::RelayPortFactoryInterface*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
