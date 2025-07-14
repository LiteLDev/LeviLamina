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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3f7b6a;
    ::ll::UntypedStorage<8, 16> mUnk15845d;
    // NOLINTEND

public:
    // prevent constructor by default
    RateControlInput& operator=(RateControlInput const&);
    RateControlInput(RateControlInput const&);
    RateControlInput();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RateControlInput(
        ::webrtc::BandwidthUsage                   bw_state,
        ::std::optional<::webrtc::DataRate> const& estimated_throughput
    );

    MCNAPI ~RateControlInput();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::webrtc::BandwidthUsage bw_state, ::std::optional<::webrtc::DataRate> const& estimated_throughput);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
