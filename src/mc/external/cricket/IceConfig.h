#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContinualGatheringPolicy.h"

namespace cricket {

struct IceConfig {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceConfig();

    MCNAPI IceConfig(int, int, ::cricket::ContinualGatheringPolicy, bool, int, bool, int, int);

    MCNAPI int backup_connection_ping_interval_or_default() const;

    MCNAPI int ice_check_interval_strong_connectivity_or_default() const;

    MCNAPI int ice_check_interval_weak_connectivity_or_default() const;

    MCNAPI int ice_check_min_interval_or_default() const;

    MCNAPI int ice_inactive_timeout_or_default() const;

    MCNAPI int ice_unwritable_min_checks_or_default() const;

    MCNAPI int ice_unwritable_timeout_or_default() const;

    MCNAPI int receiving_switching_delay_or_default() const;

    MCNAPI int receiving_timeout_or_default() const;

    MCNAPI int regather_on_failed_networks_interval_or_default() const;

    MCNAPI int stable_writable_connection_ping_interval_or_default() const;

    MCNAPI int stun_keepalive_interval_or_default() const;

    MCNAPI ~IceConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(int, int, ::cricket::ContinualGatheringPolicy, bool, int, bool, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
