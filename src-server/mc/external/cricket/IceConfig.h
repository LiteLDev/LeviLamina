#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContinualGatheringPolicy.h"

namespace cricket {

struct IceConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkce6ec6;
    ::ll::UntypedStorage<4, 8> mUnk61f627;
    ::ll::UntypedStorage<4, 4> mUnke841b4;
    ::ll::UntypedStorage<1, 1> mUnk8de774;
    ::ll::UntypedStorage<4, 8> mUnk782a76;
    ::ll::UntypedStorage<1, 1> mUnkccad25;
    ::ll::UntypedStorage<1, 1> mUnk81d7f5;
    ::ll::UntypedStorage<4, 8> mUnka58ed3;
    ::ll::UntypedStorage<4, 8> mUnk659302;
    ::ll::UntypedStorage<4, 4> mUnke23981;
    ::ll::UntypedStorage<4, 8> mUnk5537f0;
    ::ll::UntypedStorage<4, 8> mUnk397a90;
    ::ll::UntypedStorage<4, 8> mUnkab6cd5;
    ::ll::UntypedStorage<4, 8> mUnk9611a9;
    ::ll::UntypedStorage<4, 8> mUnkc23350;
    ::ll::UntypedStorage<4, 8> mUnk4d6751;
    ::ll::UntypedStorage<4, 8> mUnk9217a7;
    ::ll::UntypedStorage<4, 8> mUnk173296;
    ::ll::UntypedStorage<4, 4> mUnk745869;
    // NOLINTEND

public:
    // prevent constructor by default
    IceConfig& operator=(IceConfig const&);
    IceConfig(IceConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceConfig();

    MCNAPI IceConfig(
        int                                 receiving_timeout_ms,
        int                                 backup_connection_ping_interval,
        ::cricket::ContinualGatheringPolicy gathering_policy,
        bool                                prioritize_most_likely_candidate_pairs,
        int                                 stable_writable_connection_ping_interval_ms,
        bool                                presume_writable_when_fully_relayed,
        int                                 regather_on_failed_networks_interval_ms,
        int                                 receiving_switching_delay_ms
    );

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

    MCNAPI void* $ctor(
        int                                 receiving_timeout_ms,
        int                                 backup_connection_ping_interval,
        ::cricket::ContinualGatheringPolicy gathering_policy,
        bool                                prioritize_most_likely_candidate_pairs,
        int                                 stable_writable_connection_ping_interval_ms,
        bool                                presume_writable_when_fully_relayed,
        int                                 regather_on_failed_networks_interval_ms,
        int                                 receiving_switching_delay_ms
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
