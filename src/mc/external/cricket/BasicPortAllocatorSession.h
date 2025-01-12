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
    // member functions
    // NOLINTBEGIN
    MCAPI void AddAllocatedPort(::cricket::Port*, ::cricket::AllocationSequence*);

    MCAPI void AllocatePorts();

    MCAPI BasicPortAllocatorSession(
        ::cricket::BasicPortAllocator*,
        ::std::string_view,
        int,
        ::std::string_view,
        ::std::string_view
    );

    MCAPI bool CandidatePairable(::cricket::Candidate const&, ::cricket::Port const*) const;

    MCAPI bool CheckCandidateFilter(::cricket::Candidate const&) const;

    MCAPI void ConfigReady(::std::unique_ptr<::cricket::PortConfiguration>);

    MCAPI void DisableEquivalentPhases(::rtc::Network const*, ::cricket::PortConfiguration*, uint*);

    MCAPI void DoAllocate(bool);

    MCAPI ::cricket::BasicPortAllocatorSession::PortData* FindPort(::cricket::Port*);

    MCAPI ::cricket::Port* GetBestTurnPortForNetwork(::std::string_view) const;

    MCAPI void
    GetCandidatesFromPort(::cricket::BasicPortAllocatorSession::PortData const&, ::std::vector<::cricket::Candidate>*)
        const;

    MCAPI ::std::vector<::rtc::Network const*> GetFailedNetworks();

    MCAPI ::std::vector<::rtc::Network const*> GetNetworks();

    MCAPI ::std::vector<::cricket::BasicPortAllocatorSession::PortData*>
    GetUnprunedPorts(::std::vector<::rtc::Network const*> const&);

    MCAPI void MaybeSignalCandidatesAllocationDone();

    MCAPI void OnAllocate(int);

    MCAPI void OnAllocationSequenceObjectsCreated();

    MCAPI void OnCandidateError(::cricket::Port*, ::cricket::IceCandidateErrorEvent const&);

    MCAPI void OnCandidateReady(::cricket::Port*, ::cricket::Candidate const&);

    MCAPI void OnConfigReady(::std::unique_ptr<::cricket::PortConfiguration>);

    MCAPI void OnConfigStop();

    MCAPI void OnNetworksChanged();

    MCAPI void OnPortAllocationComplete();

    MCAPI void OnPortComplete(::cricket::Port*);

    MCAPI void OnPortDestroyed(::cricket::PortInterface*);

    MCAPI void OnPortError(::cricket::Port*);

    MCAPI bool PruneNewlyPairableTurnPort(::cricket::BasicPortAllocatorSession::PortData*);

    MCAPI void PrunePortsAndRemoveCandidates(::std::vector<::cricket::BasicPortAllocatorSession::PortData*> const&);

    MCAPI bool PruneTurnPorts(::cricket::Port*);

    MCAPI void Regather(::std::vector<::rtc::Network const*> const&, bool, ::cricket::IceRegatheringReason);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::rtc::Network const*> SelectIPv6Networks(::std::vector<::rtc::Network const*>&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::BasicPortAllocator*, ::std::string_view, int, ::std::string_view, ::std::string_view);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
