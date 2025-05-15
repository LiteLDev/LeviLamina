#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
// clang-format on

namespace webrtc {

struct RtpBitrateConfigurator {
public:
    // prevent constructor by default
    RtpBitrateConfigurator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::BitrateConstraints GetConfig() const;

    MCNAPI explicit RtpBitrateConfigurator(::webrtc::BitrateConstraints const&);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateConstraints(::std::optional<int> const&);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithClientPreferences(::webrtc::BitrateSettings const&);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithRelayCap(::webrtc::DataRate);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithSdpParameters(::webrtc::BitrateConstraints const&);

    MCNAPI ~RtpBitrateConfigurator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::BitrateConstraints const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
