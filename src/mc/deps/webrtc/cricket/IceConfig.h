#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/ContinualGatheringPolicy.h"

namespace cricket {

struct IceConfig {
public:
    // prevent constructor by default
    IceConfig& operator=(IceConfig const&);
    IceConfig(IceConfig const&);

public:
    // NOLINTBEGIN
    // symbol: ??0IceConfig@cricket@@QEAA@XZ
    MCAPI IceConfig();

    // symbol: ??0IceConfig@cricket@@QEAA@HHW4ContinualGatheringPolicy@1@_NH1HH@Z
    MCAPI IceConfig(int, int, ::cricket::ContinualGatheringPolicy, bool, int, bool, int, int);

    // symbol: ?backup_connection_ping_interval_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int backup_connection_ping_interval_or_default() const;

    // symbol: ?ice_check_interval_strong_connectivity_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int ice_check_interval_strong_connectivity_or_default() const;

    // symbol: ?ice_check_interval_weak_connectivity_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int ice_check_interval_weak_connectivity_or_default() const;

    // symbol: ?ice_check_min_interval_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int ice_check_min_interval_or_default() const;

    // symbol: ?ice_inactive_timeout_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int ice_inactive_timeout_or_default() const;

    // symbol: ?ice_unwritable_min_checks_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int ice_unwritable_min_checks_or_default() const;

    // symbol: ?ice_unwritable_timeout_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int ice_unwritable_timeout_or_default() const;

    // symbol: ?receiving_switching_delay_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int receiving_switching_delay_or_default() const;

    // symbol: ?receiving_timeout_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int receiving_timeout_or_default() const;

    // symbol: ?regather_on_failed_networks_interval_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int regather_on_failed_networks_interval_or_default() const;

    // symbol: ?stable_writable_connection_ping_interval_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int stable_writable_connection_ping_interval_or_default() const;

    // symbol: ?stun_keepalive_interval_or_default@IceConfig@cricket@@QEBAHXZ
    MCAPI int stun_keepalive_interval_or_default() const;

    // symbol: ??1IceConfig@cricket@@QEAA@XZ
    MCAPI ~IceConfig();

    // NOLINTEND
};

}; // namespace cricket
