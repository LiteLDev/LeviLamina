#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceRegatheringReason.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AllocationSequence; }
namespace cricket { class BasicPortAllocator; }
namespace cricket { class Candidate; }
namespace cricket { class Port; }
namespace cricket { class PortInterface; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct PortConfiguration; }
namespace rtc { class Network; }
// clang-format on

namespace cricket {

class BasicPortAllocatorSession {
public:
    // BasicPortAllocatorSession inner types declare
    // clang-format off
    class PortData;
    // clang-format on

    // BasicPortAllocatorSession inner types define
    class PortData {};

public:
    // prevent constructor by default
    BasicPortAllocatorSession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddAllocatedPort(::cricket::Port*, ::cricket::AllocationSequence*);

    MCNAPI void AllocatePorts();

    MCNAPI BasicPortAllocatorSession(
        ::cricket::BasicPortAllocator*,
        ::std::string_view,
        int,
        ::std::string_view,
        ::std::string_view
    );

    MCNAPI bool CandidatePairable(::cricket::Candidate const&, ::cricket::Port const*) const;

    MCNAPI bool CheckCandidateFilter(::cricket::Candidate const&) const;

    MCNAPI void ConfigReady(::std::unique_ptr<::cricket::PortConfiguration>);

    MCNAPI void DisableEquivalentPhases(::rtc::Network const*, ::cricket::PortConfiguration*, uint*);

    MCNAPI void DoAllocate(bool);

    MCNAPI ::cricket::BasicPortAllocatorSession::PortData* FindPort(::cricket::Port*);

    MCNAPI ::cricket::Port* GetBestTurnPortForNetwork(::std::string_view) const;

    MCNAPI void
    GetCandidatesFromPort(::cricket::BasicPortAllocatorSession::PortData const&, ::std::vector<::cricket::Candidate>*)
        const;

    MCNAPI ::std::vector<::rtc::Network const*> GetFailedNetworks();

    MCNAPI ::std::vector<::rtc::Network const*> GetNetworks();

    MCNAPI ::std::vector<::cricket::BasicPortAllocatorSession::PortData*>
    GetUnprunedPorts(::std::vector<::rtc::Network const*> const&);

    MCNAPI void MaybeSignalCandidatesAllocationDone();

    MCNAPI void OnAllocate(int);

    MCNAPI void OnAllocationSequenceObjectsCreated();

    MCNAPI void OnCandidateError(::cricket::Port*, ::cricket::IceCandidateErrorEvent const&);

    MCNAPI void OnCandidateReady(::cricket::Port*, ::cricket::Candidate const&);

    MCNAPI void OnConfigReady(::std::unique_ptr<::cricket::PortConfiguration>);

    MCNAPI void OnConfigStop();

    MCNAPI void OnNetworksChanged();

    MCNAPI void OnPortAllocationComplete();

    MCNAPI void OnPortComplete(::cricket::Port*);

    MCNAPI void OnPortDestroyed(::cricket::PortInterface*);

    MCNAPI void OnPortError(::cricket::Port*);

    MCNAPI bool PruneNewlyPairableTurnPort(::cricket::BasicPortAllocatorSession::PortData*);

    MCNAPI void PrunePortsAndRemoveCandidates(::std::vector<::cricket::BasicPortAllocatorSession::PortData*> const&);

    MCNAPI bool PruneTurnPorts(::cricket::Port*);

    MCNAPI void Regather(::std::vector<::rtc::Network const*> const&, bool, ::cricket::IceRegatheringReason);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::rtc::Network const*> SelectIPv6Networks(::std::vector<::rtc::Network const*>&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::BasicPortAllocator*, ::std::string_view, int, ::std::string_view, ::std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
