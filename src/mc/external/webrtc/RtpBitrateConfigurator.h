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
    RtpBitrateConfigurator& operator=(RtpBitrateConfigurator const&);
    RtpBitrateConfigurator(RtpBitrateConfigurator const&);
    RtpBitrateConfigurator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::BitrateConstraints GetConfig() const;

    MCAPI explicit RtpBitrateConfigurator(::webrtc::BitrateConstraints const&);

    MCAPI ::std::optional<::webrtc::BitrateConstraints> UpdateConstraints(::std::optional<int> const&);

    MCAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithClientPreferences(::webrtc::BitrateSettings const&);

    MCAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithRelayCap(::webrtc::DataRate);

    MCAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithSdpParameters(::webrtc::BitrateConstraints const&);

    MCAPI ~RtpBitrateConfigurator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::BitrateConstraints const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
