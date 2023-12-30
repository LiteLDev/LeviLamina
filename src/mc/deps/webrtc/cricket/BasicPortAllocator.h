#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VpnPreference.h"
#include "mc/deps/webrtc/cricket/IceRegatheringReason.h"
#include "mc/deps/webrtc/cricket/PortAllocator.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class CandidateStats; }
namespace cricket { class PortAllocator; }
namespace cricket { class PortAllocatorSession; }
namespace cricket { class RelayPortFactoryInterface; }
namespace rtc { class NetworkManager; }
namespace rtc { class NetworkMask; }
namespace rtc { class PacketSocketFactory; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TurnCustomizer; }
// clang-format on

namespace cricket {

class BasicPortAllocator : public ::cricket::PortAllocator {
public:
    // prevent constructor by default
    BasicPortAllocator& operator=(BasicPortAllocator const&);
    BasicPortAllocator(BasicPortAllocator const&);
    BasicPortAllocator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicPortAllocator@cricket@@UEAA@XZ
    virtual ~BasicPortAllocator();

    // vIndex: 3, symbol: ?SetNetworkIgnoreMask@BasicPortAllocator@cricket@@UEAAXH@Z
    virtual void SetNetworkIgnoreMask(int);

    // vIndex: 5, symbol:
    // ?SetVpnList@BasicPortAllocator@cricket@@UEAAXAEBV?$vector@VNetworkMask@rtc@@V?$allocator@VNetworkMask@rtc@@@std@@@std@@@Z
    virtual void SetVpnList(std::vector<class rtc::NetworkMask> const&);

    // vIndex: 7, symbol:
    // ?CreateSessionInternal@BasicPortAllocator@cricket@@UEAAPEAVPortAllocatorSession@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@H00@Z
    virtual class cricket::PortAllocatorSession*
    CreateSessionInternal(std::string_view, int, std::string_view, std::string_view);

    // vIndex: 8, symbol: ?MdnsObfuscationEnabled@BasicPortAllocator@cricket@@EEBA_NXZ
    virtual bool MdnsObfuscationEnabled() const;

    // symbol:
    // ??0BasicPortAllocator@cricket@@QEAA@PEAVNetworkManager@rtc@@PEAVPacketSocketFactory@3@PEAVTurnCustomizer@webrtc@@PEAVRelayPortFactoryInterface@1@PEBVFieldTrialsView@6@@Z
    MCAPI
    BasicPortAllocator(class rtc::NetworkManager*, class rtc::PacketSocketFactory*, class webrtc::TurnCustomizer*, class cricket::RelayPortFactoryInterface*, class webrtc::FieldTrialsView const*);

    // symbol: ?GetNetworkIgnoreMask@BasicPortAllocator@cricket@@QEBAHXZ
    MCAPI int GetNetworkIgnoreMask() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Init@BasicPortAllocator@cricket@@AEAAXPEAVRelayPortFactoryInterface@2@@Z
    MCAPI void Init(class cricket::RelayPortFactoryInterface*);

    // symbol: ?OnIceRegathering@BasicPortAllocator@cricket@@AEAAXPEAVPortAllocatorSession@2@W4IceRegatheringReason@2@@Z
    MCAPI void OnIceRegathering(class cricket::PortAllocatorSession*, ::cricket::IceRegatheringReason);

    // NOLINTEND
};

}; // namespace cricket
