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
    // prevent constructor by default
    BasicPortAllocator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BasicPortAllocator(::rtc::NetworkManager*, ::rtc::PacketSocketFactory*, ::webrtc::TurnCustomizer*, ::cricket::RelayPortFactoryInterface*, ::webrtc::FieldTrialsView const*);

    MCNAPI int GetNetworkIgnoreMask() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::rtc::NetworkManager*, ::rtc::PacketSocketFactory*, ::webrtc::TurnCustomizer*, ::cricket::RelayPortFactoryInterface*, ::webrtc::FieldTrialsView const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
