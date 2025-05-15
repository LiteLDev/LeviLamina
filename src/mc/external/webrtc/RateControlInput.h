#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/BandwidthUsage.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
// clang-format on

namespace webrtc {

struct RateControlInput {
public:
    // prevent constructor by default
    RateControlInput();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RateControlInput(::webrtc::BandwidthUsage, ::std::optional<::webrtc::DataRate> const&);

    MCNAPI ~RateControlInput();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::BandwidthUsage, ::std::optional<::webrtc::DataRate> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
