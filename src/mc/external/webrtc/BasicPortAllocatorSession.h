#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PortAllocatorSession.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AllocationSequence; }
namespace webrtc { class BasicPortAllocator; }
namespace webrtc { class Candidate; }
namespace webrtc { class CandidateStats; }
namespace webrtc { class Network; }
namespace webrtc { class Port; }
namespace webrtc { class PortInterface; }
namespace webrtc { struct PortConfiguration; }
// clang-format on

namespace webrtc {

class BasicPortAllocatorSession : public ::webrtc::PortAllocatorSession {
public:
    // BasicPortAllocatorSession inner types declare
    // clang-format off
    class PortData;
    // clang-format on

    // BasicPortAllocatorSession inner types define
    class PortData {
    public:
        // PortData inner types define
        enum class State : int {
            Inprogress = 0,
            Complete   = 1,
            Error      = 2,
            Pruned     = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk84db46;
        ::ll::UntypedStorage<8, 8> mUnk18154c;
        ::ll::UntypedStorage<1, 1> mUnk21a1d8;
        ::ll::UntypedStorage<4, 4> mUnk8ce439;
        // NOLINTEND

    public:
        // prevent constructor by default
        PortData& operator=(PortData const&);
        PortData(PortData const&);
        PortData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3855b9;
    ::ll::UntypedStorage<8, 8>  mUnk8ab780;
    ::ll::UntypedStorage<8, 8>  mUnk395d97;
    ::ll::UntypedStorage<1, 1>  mUnk2ae5ec;
    ::ll::UntypedStorage<1, 1>  mUnk9e71fb;
    ::ll::UntypedStorage<1, 1>  mUnkee2490;
    ::ll::UntypedStorage<8, 24> mUnk195187;
    ::ll::UntypedStorage<8, 24> mUnk67354f;
    ::ll::UntypedStorage<8, 24> mUnk1838a2;
    ::ll::UntypedStorage<8, 24> mUnkcbf181;
    ::ll::UntypedStorage<4, 4>  mUnkd0653d;
    ::ll::UntypedStorage<4, 4>  mUnkba2086;
    ::ll::UntypedStorage<4, 4>  mUnk6d8693;
    ::ll::UntypedStorage<4, 4>  mUnk10e83e;
    ::ll::UntypedStorage<8, 8>  mUnkee7bb0;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicPortAllocatorSession& operator=(BasicPortAllocatorSession const&);
    BasicPortAllocatorSession(BasicPortAllocatorSession const&);
    BasicPortAllocatorSession();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BasicPortAllocatorSession() /*override*/;

    virtual ::webrtc::BasicPortAllocator* allocator();

    virtual void SetCandidateFilter(uint filter) /*override*/;

    virtual void StartGettingPorts() /*override*/;

    virtual void StopGettingPorts() /*override*/;

    virtual void ClearGettingPorts() /*override*/;

    virtual bool IsGettingPorts() /*override*/;

    virtual bool IsCleared() const /*override*/;

    virtual bool IsStopped() const /*override*/;

    virtual ::std::vector<::webrtc::PortInterface*> ReadyPorts() const /*override*/;

    virtual ::std::vector<::webrtc::Candidate> ReadyCandidates() const /*override*/;

    virtual bool CandidatesAllocationDone() const /*override*/;

    virtual void RegatherOnFailedNetworks() /*override*/;

    virtual void GetCandidateStatsFromReadyPorts(::std::vector<::webrtc::CandidateStats>* candidate_stats_list) const
        /*override*/;

    virtual void
    SetStunKeepaliveIntervalForReadyPorts(::std::optional<int> const& stun_keepalive_interval) /*override*/;

    virtual void PruneAllPorts() /*override*/;

    virtual void UpdateIceParametersInternal() /*override*/;

    virtual void GetPortConfigurations();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAllocatedPort(::webrtc::Port* port, ::webrtc::AllocationSequence* seq);

    MCNAPI BasicPortAllocatorSession(
        ::webrtc::BasicPortAllocator* allocator,
        ::std::string_view            content_name,
        int                           component,
        ::std::string_view            ice_ufrag,
        ::std::string_view            ice_pwd
    );

    MCNAPI bool CandidatePairable(::webrtc::Candidate const& c, ::webrtc::Port const* port) const;

    MCNAPI void ConfigReady(::std::unique_ptr<::webrtc::PortConfiguration> config);

    MCNAPI void DoAllocate();

    MCNAPI void GetCandidatesFromPort(
        ::webrtc::BasicPortAllocatorSession::PortData const& data,
        ::std::vector<::webrtc::Candidate>*                  candidates
    ) const;

    MCNAPI ::std::vector<::webrtc::Network const*> GetFailedNetworks();

    MCNAPI ::std::vector<::webrtc::Network const*> GetNetworks();

    MCNAPI ::std::vector<::webrtc::BasicPortAllocatorSession::PortData*>
    GetUnprunedPorts(::std::vector<::webrtc::Network const*> const& networks);

    MCNAPI void MaybeSignalCandidatesAllocationDone();

    MCNAPI void OnCandidateReady(::webrtc::Port* port, ::webrtc::Candidate const& c);

    MCNAPI void OnNetworksChanged();

    MCNAPI void OnPortComplete(::webrtc::Port* port);

    MCNAPI void OnPortError(::webrtc::Port* port);

    MCNAPI bool PruneNewlyPairableTurnPort(::webrtc::BasicPortAllocatorSession::PortData* newly_pairable_port_data);

    MCNAPI void
    PrunePortsAndRemoveCandidates(::std::vector<::webrtc::BasicPortAllocatorSession::PortData*> const& port_data_list);

    MCNAPI bool PruneTurnPorts(::webrtc::Port* newly_pairable_turn_port);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::webrtc::Network const*>
    SelectIPv6Networks(::std::vector<::webrtc::Network const*>& all_ipv6_networks, int max_ipv6_networks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::BasicPortAllocator* allocator,
        ::std::string_view            content_name,
        int                           component,
        ::std::string_view            ice_ufrag,
        ::std::string_view            ice_pwd
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
    MCNAPI ::webrtc::BasicPortAllocator* $allocator();

    MCNAPI void $SetCandidateFilter(uint filter);

    MCNAPI void $StartGettingPorts();

    MCNAPI void $StopGettingPorts();

    MCNAPI void $ClearGettingPorts();

    MCNAPI bool $IsGettingPorts();

    MCNAPI bool $IsCleared() const;

    MCNAPI bool $IsStopped() const;

    MCNAPI ::std::vector<::webrtc::PortInterface*> $ReadyPorts() const;

    MCNAPI ::std::vector<::webrtc::Candidate> $ReadyCandidates() const;

    MCNAPI bool $CandidatesAllocationDone() const;

    MCNAPI void $RegatherOnFailedNetworks();

    MCNAPI void $GetCandidateStatsFromReadyPorts(::std::vector<::webrtc::CandidateStats>* candidate_stats_list) const;

    MCNAPI void $SetStunKeepaliveIntervalForReadyPorts(::std::optional<int> const& stun_keepalive_interval);

    MCNAPI void $PruneAllPorts();

    MCNAPI void $UpdateIceParametersInternal();

    MCNAPI void $GetPortConfigurations();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
