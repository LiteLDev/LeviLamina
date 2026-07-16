#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCErrorOr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class MediaContentDescription; }
namespace webrtc { class SimulcastDescription; }
namespace webrtc { struct RidDescription; }
// clang-format on

namespace webrtc {

class SimulcastSdpSerializer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::webrtc::RidDescription>
    DeserializeRidDescription(::webrtc::MediaContentDescription const& media_desc, ::std::string_view string) const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::SimulcastDescription>
    DeserializeSimulcastDescription(::std::string_view string) const;

    MCNAPI ::std::string SerializeRidDescription(
        ::webrtc::MediaContentDescription const& media_desc,
        ::webrtc::RidDescription const&          rid_description
    ) const;

    MCNAPI ::std::string SerializeSimulcastDescription(::webrtc::SimulcastDescription const& simulcast) const;
    // NOLINTEND
};

} // namespace webrtc
