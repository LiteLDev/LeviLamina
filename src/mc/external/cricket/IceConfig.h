#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContinualGatheringPolicy.h"

namespace cricket {

struct IceConfig {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI IceConfig();

    MCAPI IceConfig(int, int, ::cricket::ContinualGatheringPolicy, bool, int, bool, int, int);

    MCAPI int backup_connection_ping_interval_or_default() const;

    MCAPI int ice_check_interval_strong_connectivity_or_default() const;

    MCAPI int ice_check_interval_weak_connectivity_or_default() const;

    MCAPI int ice_check_min_interval_or_default() const;

    MCAPI int ice_inactive_timeout_or_default() const;

    MCAPI int ice_unwritable_min_checks_or_default() const;

    MCAPI int ice_unwritable_timeout_or_default() const;

    MCAPI int receiving_switching_delay_or_default() const;

    MCAPI int receiving_timeout_or_default() const;

    MCAPI int regather_on_failed_networks_interval_or_default() const;

    MCAPI int stable_writable_connection_ping_interval_or_default() const;

    MCAPI int stun_keepalive_interval_or_default() const;

    MCAPI ~IceConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(int, int, ::cricket::ContinualGatheringPolicy, bool, int, bool, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
