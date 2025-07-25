#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class PortInterface; }
// clang-format on

namespace cricket {

class PortAllocatorSession : public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk349827;
    ::ll::UntypedStorage<8, 48> mUnk9ad0db;
    ::ll::UntypedStorage<8, 48> mUnkfff650;
    ::ll::UntypedStorage<8, 48> mUnkb58b50;
    ::ll::UntypedStorage<8, 48> mUnkfa08f6;
    ::ll::UntypedStorage<8, 48> mUnk6b08f1;
    ::ll::UntypedStorage<8, 48> mUnkd78f5b;
    ::ll::UntypedStorage<4, 4>  mUnkb4f5d4;
    ::ll::UntypedStorage<4, 4>  mUnkb49548;
    ::ll::UntypedStorage<8, 32> mUnkacb616;
    ::ll::UntypedStorage<4, 4>  mUnk1b147c;
    ::ll::UntypedStorage<8, 32> mUnkdc2ec0;
    ::ll::UntypedStorage<8, 32> mUnk788487;
    ::ll::UntypedStorage<1, 1>  mUnkdafaae;
    // NOLINTEND

public:
    // prevent constructor by default
    PortAllocatorSession& operator=(PortAllocatorSession const&);
    PortAllocatorSession(PortAllocatorSession const&);
    PortAllocatorSession();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PortAllocatorSession() /*override*/;

    // vIndex: 1
    virtual void SetCandidateFilter(uint filter) = 0;

    // vIndex: 2
    virtual void StartGettingPorts() = 0;

    // vIndex: 3
    virtual void StopGettingPorts() = 0;

    // vIndex: 4
    virtual bool IsGettingPorts() = 0;

    // vIndex: 5
    virtual void ClearGettingPorts() = 0;

    // vIndex: 6
    virtual bool IsCleared() const;

    // vIndex: 7
    virtual bool IsStopped() const;

    // vIndex: 8
    virtual void RegatherOnFailedNetworks();

    // vIndex: 9
    virtual void GetCandidateStatsFromReadyPorts(::std::vector<::cricket::CandidateStats>* candidate_stats_list) const;

    // vIndex: 10
    virtual void SetStunKeepaliveIntervalForReadyPorts(::std::optional<int> const& stun_keepalive_interval);

    // vIndex: 11
    virtual ::std::vector<::cricket::PortInterface*> ReadyPorts() const = 0;

    // vIndex: 12
    virtual ::std::vector<::cricket::Candidate> ReadyCandidates() const = 0;

    // vIndex: 13
    virtual bool CandidatesAllocationDone() const = 0;

    // vIndex: 14
    virtual void PruneAllPorts();

    // vIndex: 15
    virtual uint generation();

    // vIndex: 16
    virtual void set_generation(uint generation);

    // vIndex: 17
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

    MCNAPI void $GetCandidateStatsFromReadyPorts(::std::vector<::cricket::CandidateStats>* candidate_stats_list) const;

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

} // namespace cricket
