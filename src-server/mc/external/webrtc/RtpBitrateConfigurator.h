#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { struct BitrateConstraints; }
namespace webrtc { struct BitrateSettings; }
// clang-format on

namespace webrtc {

class RtpBitrateConfigurator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk613ab5;
    ::ll::UntypedStorage<4, 24> mUnk4964c1;
    ::ll::UntypedStorage<4, 12> mUnkc7bf8a;
    ::ll::UntypedStorage<8, 8> mUnk9b9140;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpBitrateConfigurator& operator=(RtpBitrateConfigurator const&);
    RtpBitrateConfigurator(RtpBitrateConfigurator const&);
    RtpBitrateConfigurator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::BitrateConstraints GetConfig() const;

    MCNAPI explicit RtpBitrateConfigurator(::webrtc::BitrateConstraints const& bitrate_config);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateConstraints(::std::optional<int> const& new_start);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithClientPreferences(::webrtc::BitrateSettings const& bitrate_mask);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithRelayCap(::webrtc::DataRate cap);

    MCNAPI ::std::optional<::webrtc::BitrateConstraints> UpdateWithSdpParameters(::webrtc::BitrateConstraints const& bitrate_config);

    MCNAPI ~RtpBitrateConfigurator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::BitrateConstraints const& bitrate_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
