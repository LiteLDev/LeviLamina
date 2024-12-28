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
    RateControlInput& operator=(RateControlInput const&);
    RateControlInput(RateControlInput const&);
    RateControlInput();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RateControlInput(::webrtc::BandwidthUsage, ::std::optional<::webrtc::DataRate> const&);

    MCAPI ~RateControlInput();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::BandwidthUsage, ::std::optional<::webrtc::DataRate> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
