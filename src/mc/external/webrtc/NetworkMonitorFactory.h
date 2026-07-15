#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class NetworkMonitorInterface; }
// clang-format on

namespace webrtc {

class NetworkMonitorFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::NetworkMonitorInterface* CreateNetworkMonitor(::webrtc::FieldTrialsView const&) = 0;

    virtual ~NetworkMonitorFactory() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
