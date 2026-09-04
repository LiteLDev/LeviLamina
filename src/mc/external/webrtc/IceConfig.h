#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ContinualGatheringPolicy.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RTCError; }
// clang-format on

namespace webrtc {

struct IceConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkec217c;
    ::ll::UntypedStorage<4, 8> mUnk8c29ce;
    ::ll::UntypedStorage<4, 4> mUnk321000;
    ::ll::UntypedStorage<1, 1> mUnk2f034e;
    ::ll::UntypedStorage<4, 8> mUnkd41cc5;
    ::ll::UntypedStorage<1, 1> mUnkd9be63;
    ::ll::UntypedStorage<1, 1> mUnk5fd657;
    ::ll::UntypedStorage<4, 8> mUnk617603;
    ::ll::UntypedStorage<4, 8> mUnk5c97c5;
    ::ll::UntypedStorage<4, 4> mUnk903037;
    ::ll::UntypedStorage<4, 8> mUnk16a8a0;
    ::ll::UntypedStorage<4, 8> mUnkfcd130;
    ::ll::UntypedStorage<4, 8> mUnk4ce428;
    ::ll::UntypedStorage<4, 8> mUnk20d8b0;
    ::ll::UntypedStorage<4, 8> mUnk25f069;
    ::ll::UntypedStorage<4, 8> mUnk2d62a3;
    ::ll::UntypedStorage<4, 8> mUnk1e2771;
    ::ll::UntypedStorage<4, 8> mUnkab8689;
    ::ll::UntypedStorage<4, 4> mUnk92d115;
    ::ll::UntypedStorage<1, 1> mUnk15af62;
    // NOLINTEND

public:
    // prevent constructor by default
    IceConfig& operator=(IceConfig const&);
    IceConfig(IceConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceConfig();

    MCNAPI explicit IceConfig(::webrtc::PeerConnectionInterface::RTCConfiguration const& config);

    MCNAPI IceConfig(
        int                                receiving_timeout_ms,
        int                                backup_connection_ping_interval,
        ::webrtc::ContinualGatheringPolicy gathering_policy,
        bool                               prioritize_most_likely_candidate_pairs,
        int                                stable_writable_connection_ping_interval_ms,
        bool                               presume_writable_when_fully_relayed,
        int                                regather_on_failed_networks_interval_ms,
        int                                receiving_switching_delay_ms
    );

    MCNAPI ::webrtc::RTCError IsValid() const;

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

    MCNAPI void* $ctor(::webrtc::PeerConnectionInterface::RTCConfiguration const& config);

    MCNAPI void* $ctor(
        int                                receiving_timeout_ms,
        int                                backup_connection_ping_interval,
        ::webrtc::ContinualGatheringPolicy gathering_policy,
        bool                               prioritize_most_likely_candidate_pairs,
        int                                stable_writable_connection_ping_interval_ms,
        bool                               presume_writable_when_fully_relayed,
        int                                regather_on_failed_networks_interval_ms,
        int                                receiving_switching_delay_ms
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
