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

class SimulcastSdpSerializer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::cricket::RidDescription> DeserializeRidDescription(::std::string_view string) const;

    MCNAPI ::webrtc::RTCErrorOr<::cricket::SimulcastDescription>
    DeserializeSimulcastDescription(::std::string_view string) const;

    MCNAPI ::std::string SerializeRidDescription(::cricket::RidDescription const& rid_description) const;

    MCNAPI ::std::string SerializeSimulcastDescription(::cricket::SimulcastDescription const& simulcast) const;
    // NOLINTEND
};

} // namespace webrtc
