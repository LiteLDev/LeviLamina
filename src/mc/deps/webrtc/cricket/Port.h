#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/IceRole.h"
#include "mc/deps/webrtc/cricket/ProtocolType.h"
#include "mc/deps/webrtc/rtc/DiffServCodePoint.h"
#include "mc/deps/webrtc/rtc/WeakPtr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class Connection; }
namespace cricket { class IceMessage; }
namespace cricket { class PortInterface; }
namespace cricket { class StunMessage; }
namespace cricket { class StunStats; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class SocketAddress; }
namespace rtc { struct PacketInfo; }
namespace rtc { struct ProxyInfo; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class TaskQueueBase; }
// clang-format on

namespace cricket {

class Port {
public:
    // prevent constructor by default
    Port& operator=(Port const&);
    Port(Port const&);
    Port();

public:
    // NOLINTBEGIN
    // symbol: ?CanHandleIncomingPacketsFrom@Port@cricket@@UEBA_NAEBVSocketAddress@rtc@@@Z
    MCVAPI bool CanHandleIncomingPacketsFrom(class rtc::SocketAddress const&) const;

    // symbol:
    // ?Candidates@Port@cricket@@UEBAAEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@XZ
    MCVAPI std::vector<class cricket::Candidate> const& Candidates() const;

    // symbol: ?EnablePortPackets@Port@cricket@@UEAAXXZ
    MCVAPI void EnablePortPackets();

    // symbol: ?GetConnection@Port@cricket@@UEAAPEAVConnection@2@AEBVSocketAddress@rtc@@@Z
    MCVAPI class cricket::Connection* GetConnection(class rtc::SocketAddress const&);

    // symbol: ?GetIceRole@Port@cricket@@UEBA?AW4IceRole@2@XZ
    MCVAPI ::cricket::IceRole GetIceRole() const;

    // symbol: ?GetStunStats@Port@cricket@@UEAAXPEAV?$optional@VStunStats@cricket@@@std@@@Z
    MCVAPI void GetStunStats(std::optional<class cricket::StunStats>*);

    // symbol: ?HandleConnectionDestroyed@Port@cricket@@MEAAXPEAVConnection@2@@Z
    MCVAPI void HandleConnectionDestroyed(class cricket::Connection*);

    // symbol: ?HandleIncomingPacket@Port@cricket@@UEAA_NPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@_J@Z
    MCVAPI bool
    HandleIncomingPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64);

    // symbol: ?IceTiebreaker@Port@cricket@@UEBA_KXZ
    MCVAPI uint64 IceTiebreaker() const;

    // symbol: ?Network@Port@cricket@@UEBAPEBV0rtc@@XZ
    MCVAPI class rtc::Network const* Network() const;

    // symbol: ?PostAddAddress@Port@cricket@@MEAAX_N@Z
    MCVAPI void PostAddAddress(bool);

    // symbol:
    // ?SendBindingErrorResponse@Port@cricket@@UEAAXPEAVStunMessage@2@AEBVSocketAddress@rtc@@HV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI void
    SendBindingErrorResponse(class cricket::StunMessage*, class rtc::SocketAddress const&, int, std::string_view);

    // symbol: ?SetIceRole@Port@cricket@@UEAAXW4IceRole@2@@Z
    MCVAPI void SetIceRole(::cricket::IceRole);

    // symbol: ?SetIceTiebreaker@Port@cricket@@UEAAX_K@Z
    MCVAPI void SetIceTiebreaker(uint64);

    // symbol: ?SharedSocket@Port@cricket@@UEBA_NXZ
    MCVAPI bool SharedSocket() const;

    // symbol: ?StunDscpValue@Port@cricket@@MEBA?AW4DiffServCodePoint@rtc@@XZ
    MCVAPI ::rtc::DiffServCodePoint StunDscpValue() const;

    // symbol: ?SubscribePortDestroyed@Port@cricket@@UEAAXV?$function@$$A6AXPEAVPortInterface@cricket@@@Z@std@@@Z
    MCVAPI void SubscribePortDestroyed(std::function<void(class cricket::PortInterface*)>);

    // symbol: ?ToString@Port@cricket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string ToString() const;

    // symbol: ?Type@Port@cricket@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string const& Type() const;

    // symbol: ?UpdateNetworkCost@Port@cricket@@MEAAXXZ
    MCVAPI void UpdateNetworkCost();

    // symbol: ??1Port@cricket@@UEAA@XZ
    MCVAPI ~Port();

    // symbol: ?AddPrflxCandidate@Port@cricket@@QEAAXAEBVCandidate@2@@Z
    MCAPI void AddPrflxCandidate(class cricket::Candidate const&);

    // symbol: ?CancelPendingTasks@Port@cricket@@QEAAXXZ
    MCAPI void CancelPendingTasks();

    // symbol:
    // ?ComputeFoundation@Port@cricket@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@00AEBVSocketAddress@rtc@@@Z
    MCAPI std::string
          ComputeFoundation(std::string_view, std::string_view, std::string_view, class rtc::SocketAddress const&);

    // symbol:
    // ?CreateStunUsername@Port@cricket@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI std::string CreateStunUsername(std::string_view) const;

    // symbol: ?Destroy@Port@cricket@@QEAAXXZ
    MCAPI void Destroy();

    // symbol: ?KeepAliveUntilPruned@Port@cricket@@QEAAXXZ
    MCAPI void KeepAliveUntilPruned();

    // symbol:
    // ?MaybeIceRoleConflict@Port@cricket@@QEAA_NAEBVSocketAddress@rtc@@PEAVIceMessage@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool MaybeIceRoleConflict(class rtc::SocketAddress const&, class cricket::IceMessage*, std::string_view);

    // symbol: ?OnReadyToSend@Port@cricket@@QEAAXXZ
    MCAPI void OnReadyToSend();

    // symbol:
    // ?ParseStunUsername@Port@cricket@@QEBA_NPEBVStunMessage@2@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI bool ParseStunUsername(class cricket::StunMessage const*, std::string*, std::string*) const;

    // symbol:
    // ??0Port@cricket@@QEAA@PEAVTaskQueueBase@webrtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVPacketSocketFactory@rtc@@PEBVNetwork@7@11PEBVFieldTrialsView@3@@Z
    MCAPI
    Port(class webrtc::TaskQueueBase*, std::string_view, class rtc::PacketSocketFactory*, class rtc::Network const*, std::string_view, std::string_view, class webrtc::FieldTrialsView const*);

    // symbol:
    // ??0Port@cricket@@QEAA@PEAVTaskQueueBase@webrtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@PEAVPacketSocketFactory@rtc@@PEBVNetwork@7@GG11PEBVFieldTrialsView@3@@Z
    MCAPI
    Port(class webrtc::TaskQueueBase*, std::string_view, class rtc::PacketSocketFactory*, class rtc::Network const*, ushort, ushort, std::string_view, std::string_view, class webrtc::FieldTrialsView const*);

    // symbol: ?Prune@Port@cricket@@QEAAXXZ
    MCAPI void Prune();

    // symbol: ?SendPortDestroyed@Port@cricket@@QEAAXPEAV12@@Z
    MCAPI void SendPortDestroyed(class cricket::Port*);

    // symbol:
    // ?SendUnknownAttributesErrorResponse@Port@cricket@@QEAAXPEAVStunMessage@2@AEBVSocketAddress@rtc@@AEBV?$vector@GV?$allocator@G@std@@@std@@@Z
    MCAPI void
    SendUnknownAttributesErrorResponse(class cricket::StunMessage*, class rtc::SocketAddress const&, std::vector<ushort> const&);

    // symbol: ?SetIceParameters@Port@cricket@@QEAAXHV?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    MCAPI void SetIceParameters(int, std::string_view, std::string_view);

    // symbol: ?set_content_name@Port@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void set_content_name(std::string_view);

    // symbol: ?set_proxy@Port@cricket@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBUProxyInfo@rtc@@@Z
    MCAPI void set_proxy(std::string_view, struct rtc::ProxyInfo const&);

    // symbol: ?username_fragment@Port@cricket@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const username_fragment() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?AddAddress@Port@cricket@@IEAAXAEBVSocketAddress@rtc@@00V?$basic_string_view@DU?$char_traits@D@std@@@std@@111II1_N@Z
    MCAPI void AddAddress(
        class rtc::SocketAddress const&,
        class rtc::SocketAddress const&,
        class rtc::SocketAddress const&,
        std::string_view,
        std::string_view,
        std::string_view,
        std::string_view,
        uint,
        uint,
        std::string_view,
        bool
    );

    // symbol: ?AddOrReplaceConnection@Port@cricket@@IEAAXPEAVConnection@2@@Z
    MCAPI void AddOrReplaceConnection(class cricket::Connection*);

    // symbol: ?CopyPortInformationToPacketInfo@Port@cricket@@IEBAXPEAUPacketInfo@rtc@@@Z
    MCAPI void CopyPortInformationToPacketInfo(struct rtc::PacketInfo*) const;

    // symbol: ?DestroyAllConnections@Port@cricket@@IEAAXXZ
    MCAPI void DestroyAllConnections();

    // symbol: ?FinishAddingAddress@Port@cricket@@IEAAXAEBVCandidate@2@_N@Z
    MCAPI void FinishAddingAddress(class cricket::Candidate const&, bool);

    // symbol:
    // ?GetStunMessage@Port@cricket@@IEAA_NPEBD_KAEBVSocketAddress@rtc@@PEAV?$unique_ptr@VIceMessage@cricket@@U?$default_delete@VIceMessage@cricket@@@std@@@std@@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@6@@Z
    MCAPI bool
    GetStunMessage(char const*, uint64, class rtc::SocketAddress const&, std::unique_ptr<class cricket::IceMessage>*, std::string*);

    // symbol: ?IsCompatibleAddress@Port@cricket@@IEAA_NAEBVSocketAddress@rtc@@@Z
    MCAPI bool IsCompatibleAddress(class rtc::SocketAddress const&);

    // symbol: ?NewWeakPtr@Port@cricket@@IEAA?AV?$WeakPtr@VPort@cricket@@@rtc@@XZ
    MCAPI class rtc::WeakPtr<class cricket::Port> NewWeakPtr();

    // symbol: ?OnReadPacket@Port@cricket@@IEAAXPEBD_KAEBVSocketAddress@rtc@@W4ProtocolType@2@@Z
    MCAPI void OnReadPacket(char const*, uint64, class rtc::SocketAddress const&, ::cricket::ProtocolType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?Construct@Port@cricket@@AEAAXXZ
    MCAPI void Construct();

    // symbol: ?DestroyConnectionInternal@Port@cricket@@AEAAXPEAVConnection@2@_N@Z
    MCAPI void DestroyConnectionInternal(class cricket::Connection*, bool);

    // symbol: ?DestroyIfDead@Port@cricket@@AEAAXXZ
    MCAPI void DestroyIfDead();

    // symbol:
    // ?MaybeObfuscateAddress@Port@cricket@@AEAA_NPEAVCandidate@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI bool MaybeObfuscateAddress(class cricket::Candidate*, std::string_view, bool);

    // symbol: ?OnConnectionDestroyed@Port@cricket@@AEAA_NPEAVConnection@2@@Z
    MCAPI bool OnConnectionDestroyed(class cricket::Connection*);

    // symbol: ?OnNetworkTypeChanged@Port@cricket@@AEAAXPEBVNetwork@rtc@@@Z
    MCAPI void OnNetworkTypeChanged(class rtc::Network const*);

    // symbol: ?PostDestroyIfDead@Port@cricket@@AEAAX_N@Z
    MCAPI void PostDestroyIfDead(bool);

    // NOLINTEND
};

}; // namespace cricket
