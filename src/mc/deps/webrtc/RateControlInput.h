#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/BandwidthUsage.h"

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
    // NOLINTBEGIN
    // symbol: ??0RateControlInput@webrtc@@QEAA@W4BandwidthUsage@1@AEBV?$optional@VDataRate@webrtc@@@std@@@Z
    MCAPI RateControlInput(::webrtc::BandwidthUsage, std::optional<class webrtc::DataRate> const&);

    // symbol: ??1RateControlInput@webrtc@@QEAA@XZ
    MCAPI ~RateControlInput();

    // NOLINTEND
};

}; // namespace webrtc
