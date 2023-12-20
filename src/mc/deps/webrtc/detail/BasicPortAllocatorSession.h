#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/IceRegatheringReason.h"
#include "mc/deps/webrtc/detail/PortAllocatorSession.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AllocationSequence; }
namespace cricket { class BasicPortAllocator; }
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class Port; }
namespace cricket { class PortAllocatorSession; }
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
        // prevent constructor by default
        PortData& operator=(PortData const&);
        PortData(PortData const&);
        PortData();
    };

public:
    // prevent constructor by default
    BasicPortAllocatorSession& operator=(BasicPortAllocatorSession const&);
    BasicPortAllocatorSession(BasicPortAllocatorSession const&);
    BasicPortAllocatorSession();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicPortAllocatorSession@cricket@@UEAA@XZ
    virtual ~BasicPortAllocatorSession();

    // vIndex: 1, symbol: ?SetCandidateFilter@BasicPortAllocatorSession@cricket@@UEAAXI@Z
    virtual void SetCandidateFilter(uint);

    // vIndex: 2, symbol: ?StartGettingPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void StartGettingPorts();

    // vIndex: 3, symbol: ?StopGettingPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void StopGettingPorts();

    // vIndex: 4, symbol: ?IsGettingPorts@BasicPortAllocatorSession@cricket@@UEAA_NXZ
    virtual bool IsGettingPorts();

    // vIndex: 5, symbol: ?ClearGettingPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void ClearGettingPorts();

    // vIndex: 6, symbol: ?IsCleared@BasicPortAllocatorSession@cricket@@UEBA_NXZ
    virtual bool IsCleared() const;

    // vIndex: 7, symbol: ?IsStopped@BasicPortAllocatorSession@cricket@@UEBA_NXZ
    virtual bool IsStopped() const;

    // vIndex: 8, symbol: ?RegatherOnFailedNetworks@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void RegatherOnFailedNetworks();

    // vIndex: 9, symbol:
    // ?GetCandidateStatsFromReadyPorts@BasicPortAllocatorSession@cricket@@UEBAXPEAV?$vector@VCandidateStats@cricket@@V?$allocator@VCandidateStats@cricket@@@std@@@std@@@Z
    virtual void GetCandidateStatsFromReadyPorts(std::vector<class cricket::CandidateStats>*) const;

    // vIndex: 10, symbol:
    // ?SetStunKeepaliveIntervalForReadyPorts@BasicPortAllocatorSession@cricket@@UEAAXAEBV?$optional@H@std@@@Z
    virtual void SetStunKeepaliveIntervalForReadyPorts(std::optional<int> const&);

    // vIndex: 11, symbol:
    // ?ReadyPorts@BasicPortAllocatorSession@cricket@@UEBA?AV?$vector@PEAVPortInterface@cricket@@V?$allocator@PEAVPortInterface@cricket@@@std@@@std@@XZ
    virtual std::vector<class cricket::PortInterface*> ReadyPorts() const;

    // vIndex: 12, symbol:
    // ?ReadyCandidates@BasicPortAllocatorSession@cricket@@UEBA?AV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@XZ
    virtual std::vector<class cricket::Candidate> ReadyCandidates() const;

    // vIndex: 13, symbol: ?CandidatesAllocationDone@BasicPortAllocatorSession@cricket@@UEBA_NXZ
    virtual bool CandidatesAllocationDone() const;

    // vIndex: 14, symbol: ?PruneAllPorts@BasicPortAllocatorSession@cricket@@UEAAXXZ
    virtual void PruneAllPorts();

    // vIndex: 17, symbol: ?UpdateIceParametersInternal@BasicPortAllocatorSession@cricket@@MEAAXXZ
    virtual void UpdateIceParametersInternal();

    // vIndex: 18, symbol: ?allocator@BasicPortAllocatorSession@cricket@@UEAAPEAVBasicPortAllocator@2@XZ
    virtual class cricket::BasicPortAllocator* allocator();

    // vIndex: 19, symbol: ?GetPortConfigurations@BasicPortAllocatorSession@cricket@@MEAAXXZ
    virtual void GetPortConfigurations();

    // symbol:
    // ??0BasicPortAllocatorSession@cricket@@QEAA@PEAVBasicPortAllocator@1@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H11@Z
    MCAPI BasicPortAllocatorSession(
        class cricket::BasicPortAllocator*,
        std::string_view,
        int,
        std::string_view,
        std::string_view
    );

    // symbol:
    // ?SelectIPv6Networks@BasicPortAllocatorSession@cricket@@SA?AV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@std@@AEAV34@H@Z
    MCAPI static std::vector<class rtc::Network const*>
    SelectIPv6Networks(std::vector<class rtc::Network const*>&, int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?ConfigReady@BasicPortAllocatorSession@cricket@@IEAAXV?$unique_ptr@UPortConfiguration@cricket@@U?$default_delete@UPortConfiguration@cricket@@@std@@@std@@@Z
    MCAPI void ConfigReady(std::unique_ptr<struct cricket::PortConfiguration>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddAllocatedPort@BasicPortAllocatorSession@cricket@@AEAAXPEAVPort@2@PEAVAllocationSequence@2@@Z
    MCAPI void AddAllocatedPort(class cricket::Port*, class cricket::AllocationSequence*);

    // symbol: ?AllocatePorts@BasicPortAllocatorSession@cricket@@AEAAXXZ
    MCAPI void AllocatePorts();

    // symbol: ?CandidatePairable@BasicPortAllocatorSession@cricket@@AEBA_NAEBVCandidate@2@PEBVPort@2@@Z
    MCAPI bool CandidatePairable(class cricket::Candidate const&, class cricket::Port const*) const;

    // symbol: ?CheckCandidateFilter@BasicPortAllocatorSession@cricket@@AEBA_NAEBVCandidate@2@@Z
    MCAPI bool CheckCandidateFilter(class cricket::Candidate const&) const;

    // symbol:
    // ?DisableEquivalentPhases@BasicPortAllocatorSession@cricket@@AEAAXPEBVNetwork@rtc@@PEAUPortConfiguration@2@PEAI@Z
    MCAPI void DisableEquivalentPhases(class rtc::Network const*, struct cricket::PortConfiguration*, uint*);

    // symbol: ?DoAllocate@BasicPortAllocatorSession@cricket@@AEAAX_N@Z
    MCAPI void DoAllocate(bool);

    // symbol: ?FindPort@BasicPortAllocatorSession@cricket@@AEAAPEAVPortData@12@PEAVPort@2@@Z
    MCAPI class cricket::BasicPortAllocatorSession::PortData* FindPort(class cricket::Port*);

    // symbol:
    // ?GetBestTurnPortForNetwork@BasicPortAllocatorSession@cricket@@AEBAPEAVPort@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class cricket::Port* GetBestTurnPortForNetwork(std::string_view) const;

    // symbol:
    // ?GetCandidatesFromPort@BasicPortAllocatorSession@cricket@@AEBAXAEBVPortData@12@PEAV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
    MCAPI void
    GetCandidatesFromPort(class cricket::BasicPortAllocatorSession::PortData const&, std::vector<class cricket::Candidate>*)
        const;

    // symbol:
    // ?GetFailedNetworks@BasicPortAllocatorSession@cricket@@AEAA?AV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@std@@XZ
    MCAPI std::vector<class rtc::Network const*> GetFailedNetworks();

    // symbol:
    // ?GetNetworks@BasicPortAllocatorSession@cricket@@AEAA?AV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@std@@XZ
    MCAPI std::vector<class rtc::Network const*> GetNetworks();

    // symbol:
    // ?GetUnprunedPorts@BasicPortAllocatorSession@cricket@@AEAA?AV?$vector@PEAVPortData@BasicPortAllocatorSession@cricket@@V?$allocator@PEAVPortData@BasicPortAllocatorSession@cricket@@@std@@@std@@AEBV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@4@@Z
    MCAPI std::vector<class cricket::BasicPortAllocatorSession::PortData*>
          GetUnprunedPorts(std::vector<class rtc::Network const*> const&);

    // symbol: ?MaybeSignalCandidatesAllocationDone@BasicPortAllocatorSession@cricket@@AEAAXXZ
    MCAPI void MaybeSignalCandidatesAllocationDone();

    // symbol: ?OnAllocate@BasicPortAllocatorSession@cricket@@AEAAXH@Z
    MCAPI void OnAllocate(int);

    // symbol: ?OnAllocationSequenceObjectsCreated@BasicPortAllocatorSession@cricket@@AEAAXXZ
    MCAPI void OnAllocationSequenceObjectsCreated();

    // symbol: ?OnCandidateError@BasicPortAllocatorSession@cricket@@AEAAXPEAVPort@2@AEBUIceCandidateErrorEvent@2@@Z
    MCAPI void OnCandidateError(class cricket::Port*, struct cricket::IceCandidateErrorEvent const&);

    // symbol: ?OnCandidateReady@BasicPortAllocatorSession@cricket@@AEAAXPEAVPort@2@AEBVCandidate@2@@Z
    MCAPI void OnCandidateReady(class cricket::Port*, class cricket::Candidate const&);

    // symbol:
    // ?OnConfigReady@BasicPortAllocatorSession@cricket@@AEAAXV?$unique_ptr@UPortConfiguration@cricket@@U?$default_delete@UPortConfiguration@cricket@@@std@@@std@@@Z
    MCAPI void OnConfigReady(std::unique_ptr<struct cricket::PortConfiguration>);

    // symbol: ?OnConfigStop@BasicPortAllocatorSession@cricket@@AEAAXXZ
    MCAPI void OnConfigStop();

    // symbol: ?OnNetworksChanged@BasicPortAllocatorSession@cricket@@AEAAXXZ
    MCAPI void OnNetworksChanged();

    // symbol: ?OnPortAllocationComplete@BasicPortAllocatorSession@cricket@@AEAAXXZ
    MCAPI void OnPortAllocationComplete();

    // symbol: ?OnPortComplete@BasicPortAllocatorSession@cricket@@AEAAXPEAVPort@2@@Z
    MCAPI void OnPortComplete(class cricket::Port*);

    // symbol: ?OnPortDestroyed@BasicPortAllocatorSession@cricket@@AEAAXPEAVPortInterface@2@@Z
    MCAPI void OnPortDestroyed(class cricket::PortInterface*);

    // symbol: ?OnPortError@BasicPortAllocatorSession@cricket@@AEAAXPEAVPort@2@@Z
    MCAPI void OnPortError(class cricket::Port*);

    // symbol: ?PruneNewlyPairableTurnPort@BasicPortAllocatorSession@cricket@@AEAA_NPEAVPortData@12@@Z
    MCAPI bool PruneNewlyPairableTurnPort(class cricket::BasicPortAllocatorSession::PortData*);

    // symbol:
    // ?PrunePortsAndRemoveCandidates@BasicPortAllocatorSession@cricket@@AEAAXAEBV?$vector@PEAVPortData@BasicPortAllocatorSession@cricket@@V?$allocator@PEAVPortData@BasicPortAllocatorSession@cricket@@@std@@@std@@@Z
    MCAPI void PrunePortsAndRemoveCandidates(std::vector<class cricket::BasicPortAllocatorSession::PortData*> const&);

    // symbol: ?PruneTurnPorts@BasicPortAllocatorSession@cricket@@AEAA_NPEAVPort@2@@Z
    MCAPI bool PruneTurnPorts(class cricket::Port*);

    // symbol:
    // ?Regather@BasicPortAllocatorSession@cricket@@AEAAXAEBV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@std@@_NW4IceRegatheringReason@2@@Z
    MCAPI void Regather(std::vector<class rtc::Network const*> const&, bool, ::cricket::IceRegatheringReason);

    // NOLINTEND
};

}; // namespace cricket
