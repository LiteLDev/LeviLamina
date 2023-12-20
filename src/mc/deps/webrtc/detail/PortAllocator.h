#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PortPrunePolicy.h"
#include "mc/deps/webrtc/VpnPreference.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class PortAllocatorSession; }
namespace cricket { struct IceParameters; }
namespace cricket { struct RelayServerConfig; }
namespace rtc { class NetworkMask; }
namespace rtc { class SocketAddress; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class PortAllocator {
public:
    // prevent constructor by default
    PortAllocator& operator=(PortAllocator const&);
    PortAllocator(PortAllocator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PortAllocator@cricket@@UEAA@XZ
    virtual ~PortAllocator();

    // vIndex: 1, symbol: ?Initialize@PortAllocator@cricket@@UEAAXXZ
    virtual void Initialize();

    // vIndex: 2, symbol: ?set_restrict_ice_credentials_change@PortAllocator@cricket@@UEAAX_N@Z
    virtual void set_restrict_ice_credentials_change(bool);

    // vIndex: 3, symbol: ?SetNetworkIgnoreMask@BasicPortAllocator@cricket@@UEAAXH@Z
    virtual void SetNetworkIgnoreMask(int) = 0;

    // vIndex: 4, symbol: ?SetVpnPreference@PortAllocator@cricket@@UEAAXW4VpnPreference@webrtc@@@Z
    virtual void SetVpnPreference(::webrtc::VpnPreference);

    // vIndex: 5, symbol:
    // ?SetVpnList@PortAllocator@cricket@@UEAAXAEBV?$vector@VNetworkMask@rtc@@V?$allocator@VNetworkMask@rtc@@@std@@@std@@@Z
    virtual void SetVpnList(std::vector<class rtc::NetworkMask> const&);

    // vIndex: 6, symbol:
    // ?GetCandidateStatsFromPooledSessions@PortAllocator@cricket@@UEAAXPEAV?$vector@VCandidateStats@cricket@@V?$allocator@VCandidateStats@cricket@@@std@@@std@@@Z
    virtual void GetCandidateStatsFromPooledSessions(std::vector<class cricket::CandidateStats>*);

    // vIndex: 7, symbol:
    // ?CreateSessionInternal@BasicPortAllocator@cricket@@UEAAPEAVPortAllocatorSession@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H00@Z
    virtual class cricket::PortAllocatorSession*
    CreateSessionInternal(std::string_view, int, std::string_view, std::string_view) = 0;

    // vIndex: 8, symbol: ?MdnsObfuscationEnabled@PortAllocator@cricket@@MEBA_NXZ
    virtual bool MdnsObfuscationEnabled() const;

    // symbol:
    // ?CreateSession@PortAllocator@cricket@@QEAA?AV?$unique_ptr@VPortAllocatorSession@cricket@@U?$default_delete@VPortAllocatorSession@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@H00@Z
    MCAPI std::unique_ptr<class cricket::PortAllocatorSession>
          CreateSession(std::string_view, int, std::string_view, std::string_view);

    // symbol: ?DiscardCandidatePool@PortAllocator@cricket@@QEAAXXZ
    MCAPI void DiscardCandidatePool();

    // symbol: ?FreezeCandidatePool@PortAllocator@cricket@@QEAAXXZ
    MCAPI void FreezeCandidatePool();

    // symbol:
    // ?GetPooledIceCredentials@PortAllocator@cricket@@QEAA?AV?$vector@UIceParameters@cricket@@V?$allocator@UIceParameters@cricket@@@std@@@std@@XZ
    MCAPI std::vector<struct cricket::IceParameters> GetPooledIceCredentials();

    // symbol: ??0PortAllocator@cricket@@QEAA@XZ
    MCAPI PortAllocator();

    // symbol: ?SanitizeCandidate@PortAllocator@cricket@@QEBA?AVCandidate@2@AEBV32@@Z
    MCAPI class cricket::Candidate SanitizeCandidate(class cricket::Candidate const&) const;

    // symbol: ?SetCandidateFilter@PortAllocator@cricket@@QEAAXI@Z
    MCAPI void SetCandidateFilter(uint);

    // symbol:
    // ?SetConfiguration@PortAllocator@cricket@@QEAA_NAEBV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@std@@AEBV?$vector@URelayServerConfig@cricket@@V?$allocator@URelayServerConfig@cricket@@@std@@@4@HW4PortPrunePolicy@webrtc@@PEAVTurnCustomizer@7@AEBV?$optional@H@4@@Z
    MCAPI bool
    SetConfiguration(std::set<class rtc::SocketAddress> const&, std::vector<struct cricket::RelayServerConfig> const&, int, ::webrtc::PortPrunePolicy, class webrtc::TurnCustomizer*, std::optional<int> const&);

    // symbol: ?SetIceTiebreaker@PortAllocator@cricket@@QEAAX_K@Z
    MCAPI void SetIceTiebreaker(uint64);

    // symbol:
    // ?TakePooledSession@PortAllocator@cricket@@QEAA?AV?$unique_ptr@VPortAllocatorSession@cricket@@U?$default_delete@VPortAllocatorSession@cricket@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@H00@Z
    MCAPI std::unique_ptr<class cricket::PortAllocatorSession>
          TakePooledSession(std::string_view, int, std::string_view, std::string_view);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?FindPooledSession@PortAllocator@cricket@@AEBA?AV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VPortAllocatorSession@cricket@@U?$default_delete@VPortAllocatorSession@cricket@@@std@@@std@@@std@@@std@@@std@@PEBUIceParameters@2@@Z
    MCAPI std::_Vector_const_iterator<
        std::_Vector_val<std::_Simple_types<std::unique_ptr<class cricket::PortAllocatorSession>>>>
    FindPooledSession(struct cricket::IceParameters const*) const;

    // NOLINTEND
};

}; // namespace cricket
