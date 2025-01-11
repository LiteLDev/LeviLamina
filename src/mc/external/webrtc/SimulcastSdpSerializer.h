#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class SimulcastDescription; }
namespace cricket { struct RidDescription; }
// clang-format on

namespace webrtc {

struct SimulcastSdpSerializer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTCErrorOr<::cricket::RidDescription> DeserializeRidDescription(::std::string_view) const;

    MCAPI ::webrtc::RTCErrorOr<::cricket::SimulcastDescription> DeserializeSimulcastDescription(::std::string_view
    ) const;

    MCAPI ::std::string SerializeRidDescription(::cricket::RidDescription const&) const;

    MCAPI ::std::string SerializeSimulcastDescription(::cricket::SimulcastDescription const&) const;
    // NOLINTEND
};

} // namespace webrtc
