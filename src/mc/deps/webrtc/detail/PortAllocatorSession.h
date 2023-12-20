#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class BasicPortAllocator; }
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class PortInterface; }
// clang-format on

namespace cricket {

class PortAllocatorSession {
public:
    // prevent constructor by default
    PortAllocatorSession& operator=(PortAllocatorSession const&);
    PortAllocatorSession(PortAllocatorSession const&);
    PortAllocatorSession();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PortAllocatorSession@cricket@@UEAA@XZ
    virtual ~PortAllocatorSession();

    // vIndex: 1, symbol: ?SetCandidateFilter@BasicPortAllocatorSession@cricket@@UEAAXI@Z
    virtual void SetCandidateFilter(uint) = 0;

    // vIndex: 2, symbol: ?StartGettingPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void StartGettingPorts() = 0;

    // vIndex: 3, symbol: ?StopGettingPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void StopGettingPorts() = 0;

    // vIndex: 4, symbol: ?IsGettingPorts@BasicPortAllocatorSession@cricket@@UEAA_NXZ
    virtual bool IsGettingPorts() = 0;

    // vIndex: 5, symbol: ?ClearGettingPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void ClearGettingPorts() = 0;

    // vIndex: 6, symbol: ?IsCleared@PortAllocatorSession@cricket@@UEBA_NXZ
    virtual bool IsCleared() const;

    // vIndex: 7, symbol: ?IsStopped@PortAllocatorSession@cricket@@UEBA_NXZ
    virtual bool IsStopped() const;

    // vIndex: 8, symbol: ?RegatherOnFailedNetworks@PortAllocatorSession@cricket@@UEAAXXZ
    virtual void RegatherOnFailedNetworks();

    // vIndex: 9, symbol:
    // ?GetCandidateStatsFromReadyPorts@PortAllocatorSession@cricket@@UEBAXPEAV?$vector@VCandidateStats@cricket@@V?$allocator@VCandidateStats@cricket@@@std@@@std@@@Z
    virtual void GetCandidateStatsFromReadyPorts(std::vector<class cricket::CandidateStats>*) const;

    // vIndex: 10, symbol:
    // ?SetStunKeepaliveIntervalForReadyPorts@PortAllocatorSession@cricket@@UEAAXAEBV?$optional@H@std@@@Z
    virtual void SetStunKeepaliveIntervalForReadyPorts(std::optional<int> const&);

    // vIndex: 11, symbol:
    // ?ReadyPorts@BasicPortAllocatorSession@cricket@@UEBA?AV?$vector@PEAVPortInterface@cricket@@V?$allocator@PEAVPortInterface@cricket@@@std@@@std@@XZ
    virtual std::vector<class cricket::PortInterface*> ReadyPorts() const = 0;

    // vIndex: 12, symbol:
    // ?ReadyCandidates@BasicPortAllocatorSession@cricket@@UEBA?AV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@XZ
    virtual std::vector<class cricket::Candidate> ReadyCandidates() const = 0;

    // vIndex: 13, symbol: ?CandidatesAllocationDone@BasicPortAllocatorSession@cricket@@UEBA_NXZ
    virtual bool CandidatesAllocationDone() const = 0;

    // vIndex: 14, symbol: ?PruneAllPorts@PortAllocatorSession@cricket@@UEAAXXZ
    virtual void PruneAllPorts();

    // vIndex: 15, symbol: ?generation@PortAllocatorSession@cricket@@UEAAIXZ
    virtual uint generation();

    // vIndex: 16, symbol: ?set_generation@PortAllocatorSession@cricket@@UEAAXI@Z
    virtual void set_generation(uint);

    // vIndex: 17, symbol: ?UpdateIceParametersInternal@PortAllocatorSession@cricket@@MEAAXXZ
    virtual void UpdateIceParametersInternal();

    // vIndex: 18, symbol: ?allocator@BasicPortAllocatorSession@cricket@@UEAAPEAVBasicPortAllocator@2@XZ
    virtual class cricket::BasicPortAllocator* allocator();

    // symbol: ??0PortAllocatorSession@cricket@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H00I@Z
    MCAPI PortAllocatorSession(std::string_view, int, std::string_view, std::string_view, uint);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?SetIceParameters@PortAllocatorSession@cricket@@AEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@H00@Z
    MCAPI void SetIceParameters(std::string_view, int, std::string_view, std::string_view);

    // NOLINTEND
};

}; // namespace cricket
