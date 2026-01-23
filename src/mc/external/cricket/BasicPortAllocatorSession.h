#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/PortAllocatorSession.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AllocationSequence; }
namespace cricket { class BasicPortAllocator; }
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class Port; }
namespace cricket { class PortInterface; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct PortConfiguration; }
namespace rtc { class Network; }
// clang-format on

namespace cricket {

class BasicPortAllocatorSession : public ::cricket::PortAllocatorSession {
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
        ::ll::UntypedStorage<8, 8> mUnk1ab1ad;
        ::ll::UntypedStorage<8, 8> mUnkda84a8;
        ::ll::UntypedStorage<1, 1> mUnkdc257d;
        ::ll::UntypedStorage<4, 4> mUnkd7c9d4;
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
    ::ll::UntypedStorage<8, 8>  mUnkd9aad7;
    ::ll::UntypedStorage<8, 8>  mUnk36bec8;
    ::ll::UntypedStorage<8, 8>  mUnk3ac552;
    ::ll::UntypedStorage<1, 1>  mUnk693578;
    ::ll::UntypedStorage<1, 1>  mUnkcc9ebd;
    ::ll::UntypedStorage<1, 1>  mUnkb12569;
    ::ll::UntypedStorage<8, 24> mUnk1df45d;
    ::ll::UntypedStorage<8, 24> mUnkfca51f;
    ::ll::UntypedStorage<8, 24> mUnk3475f3;
    ::ll::UntypedStorage<8, 24> mUnkf43108;
    ::ll::UntypedStorage<4, 4>  mUnkfbe6e2;
    ::ll::UntypedStorage<4, 4>  mUnk6dcbc0;
    ::ll::UntypedStorage<4, 4>  mUnk9702fe;
    ::ll::UntypedStorage<4, 4>  mUnk4ba6e4;
    ::ll::UntypedStorage<8, 8>  mUnk91bd92;
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

    virtual ::cricket::BasicPortAllocator* allocator();

    virtual void SetCandidateFilter(uint filter) /*override*/;

    virtual void StartGettingPorts() /*override*/;

    virtual void StopGettingPorts() /*override*/;

    virtual void ClearGettingPorts() /*override*/;

    virtual bool IsGettingPorts() /*override*/;

    virtual bool IsCleared() const /*override*/;

    virtual bool IsStopped() const /*override*/;

    virtual ::std::vector<::cricket::PortInterface*> ReadyPorts() const /*override*/;

    virtual ::std::vector<::cricket::Candidate> ReadyCandidates() const /*override*/;

    virtual bool CandidatesAllocationDone() const /*override*/;

    virtual void RegatherOnFailedNetworks() /*override*/;

    virtual void GetCandidateStatsFromReadyPorts(::std::vector<::cricket::CandidateStats>* candidate_stats_list) const
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
    MCNAPI void AddAllocatedPort(::cricket::Port* port, ::cricket::AllocationSequence* seq);

    MCNAPI BasicPortAllocatorSession(
        ::cricket::BasicPortAllocator* allocator,
        ::std::string_view             content_name,
        int                            component,
        ::std::string_view             ice_ufrag,
        ::std::string_view             ice_pwd
    );

    MCNAPI bool CandidatePairable(::cricket::Candidate const& c, ::cricket::Port const* port) const;

    MCNAPI void ConfigReady(::std::unique_ptr<::cricket::PortConfiguration> config);

    MCNAPI void DoAllocate(bool disable_equivalent);

    MCNAPI void GetCandidatesFromPort(
        ::cricket::BasicPortAllocatorSession::PortData const& data,
        ::std::vector<::cricket::Candidate>*                  candidates
    ) const;

    MCNAPI ::std::vector<::rtc::Network const*> GetFailedNetworks();

    MCNAPI ::std::vector<::rtc::Network const*> GetNetworks();

    MCNAPI ::std::vector<::cricket::BasicPortAllocatorSession::PortData*>
    GetUnprunedPorts(::std::vector<::rtc::Network const*> const& networks);

    MCNAPI void MaybeSignalCandidatesAllocationDone();

    MCNAPI void OnCandidateError(::cricket::Port* port, ::cricket::IceCandidateErrorEvent const& event);

    MCNAPI void OnCandidateReady(::cricket::Port* port, ::cricket::Candidate const& c);

    MCNAPI void OnNetworksChanged();

    MCNAPI void OnPortComplete(::cricket::Port* port);

    MCNAPI void OnPortError(::cricket::Port* port);

    MCNAPI bool PruneNewlyPairableTurnPort(::cricket::BasicPortAllocatorSession::PortData* newly_pairable_port_data);

    MCNAPI void
    PrunePortsAndRemoveCandidates(::std::vector<::cricket::BasicPortAllocatorSession::PortData*> const& port_data_list);

    MCNAPI bool PruneTurnPorts(::cricket::Port* newly_pairable_turn_port);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::rtc::Network const*>
    SelectIPv6Networks(::std::vector<::rtc::Network const*>& all_ipv6_networks, int max_ipv6_networks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::cricket::BasicPortAllocator* allocator,
        ::std::string_view             content_name,
        int                            component,
        ::std::string_view             ice_ufrag,
        ::std::string_view             ice_pwd
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
    MCNAPI ::cricket::BasicPortAllocator* $allocator();

    MCNAPI void $SetCandidateFilter(uint filter);

    MCNAPI void $StartGettingPorts();

    MCNAPI void $StopGettingPorts();

    MCNAPI void $ClearGettingPorts();

    MCNAPI bool $IsGettingPorts();

    MCNAPI bool $IsCleared() const;

    MCNAPI bool $IsStopped() const;

    MCNAPI ::std::vector<::cricket::PortInterface*> $ReadyPorts() const;

    MCNAPI ::std::vector<::cricket::Candidate> $ReadyCandidates() const;

    MCNAPI bool $CandidatesAllocationDone() const;

    MCNAPI void $RegatherOnFailedNetworks();

    MCNAPI void $GetCandidateStatsFromReadyPorts(::std::vector<::cricket::CandidateStats>* candidate_stats_list) const;

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

} // namespace cricket
