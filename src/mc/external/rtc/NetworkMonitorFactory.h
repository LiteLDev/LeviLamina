#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class NetworkMonitorInterface; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace rtc {

class NetworkMonitorFactory {
public:
    // prevent constructor by default
    NetworkMonitorFactory& operator=(NetworkMonitorFactory const&);
    NetworkMonitorFactory(NetworkMonitorFactory const&);
    NetworkMonitorFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::rtc::NetworkMonitorInterface* CreateNetworkMonitor(::webrtc::FieldTrialsView const&) = 0;

    // vIndex: 1
    virtual ~NetworkMonitorFactory() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace rtc
