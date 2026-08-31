#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class CandidateStats; }
namespace webrtc { class PortInterface; }
// clang-format on

namespace webrtc {

class PortAllocatorSession : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkfbfd97;
    ::ll::UntypedStorage<8, 48> mUnkd71f6b;
    ::ll::UntypedStorage<8, 48> mUnke2b6be;
    ::ll::UntypedStorage<8, 48> mUnk3afcfb;
    ::ll::UntypedStorage<8, 48> mUnkcf543e;
    ::ll::UntypedStorage<8, 48> mUnkb4c502;
    ::ll::UntypedStorage<8, 48> mUnk4c5a50;
    ::ll::UntypedStorage<4, 4>  mUnke9f622;
    ::ll::UntypedStorage<4, 4>  mUnk52d14f;
    ::ll::UntypedStorage<8, 32> mUnk49701e;
    ::ll::UntypedStorage<4, 4>  mUnk95a9b5;
    ::ll::UntypedStorage<8, 32> mUnk71c438;
    ::ll::UntypedStorage<8, 32> mUnk7053e4;
    ::ll::UntypedStorage<1, 1>  mUnk94d8d7;
    // NOLINTEND

public:
    // prevent constructor by default
    PortAllocatorSession& operator=(PortAllocatorSession const&);
    PortAllocatorSession(PortAllocatorSession const&);
    PortAllocatorSession();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortAllocatorSession() /*override*/;

    virtual void SetCandidateFilter(uint filter) = 0;

    virtual void StartGettingPorts() = 0;

    virtual void StopGettingPorts() = 0;

    virtual bool IsGettingPorts() = 0;

    virtual void ClearGettingPorts() = 0;

    virtual bool IsCleared() const;

    virtual bool IsStopped() const;

    virtual void RegatherOnFailedNetworks();

    virtual void GetCandidateStatsFromReadyPorts(::std::vector<::webrtc::CandidateStats>* candidate_stats_list) const;

    virtual void SetStunKeepaliveIntervalForReadyPorts(::std::optional<int> const& stun_keepalive_interval);

    virtual ::std::vector<::webrtc::PortInterface*> ReadyPorts() const = 0;

    virtual ::std::vector<::webrtc::Candidate> ReadyCandidates() const = 0;

    virtual bool CandidatesAllocationDone() const = 0;

    virtual void PruneAllPorts();

    virtual uint generation();

    virtual void set_generation(uint generation);

    virtual void UpdateIceParametersInternal();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PortAllocatorSession(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd,
        uint               flags
    );

    MCNAPI void SetIceParameters(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string_view content_name,
        int                component,
        ::std::string_view ice_ufrag,
        ::std::string_view ice_pwd,
        uint               flags
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $IsCleared() const;

    MCNAPI bool $IsStopped() const;

    MCNAPI void $RegatherOnFailedNetworks();

    MCNAPI void $GetCandidateStatsFromReadyPorts(::std::vector<::webrtc::CandidateStats>* candidate_stats_list) const;

    MCNAPI void $SetStunKeepaliveIntervalForReadyPorts(::std::optional<int> const& stun_keepalive_interval);

    MCNAPI void $PruneAllPorts();

    MCNAPI uint $generation();

    MCNAPI void $set_generation(uint generation);

    MCNAPI void $UpdateIceParametersInternal();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
