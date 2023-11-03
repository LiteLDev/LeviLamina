#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated inclusion list
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/resources/PacketPriority.h"
#include "mc/resources/PacketReliability.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct NetworkAdapter; }
namespace RakNet { struct Packet; }
namespace RakNet { struct PublicKey; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SocketDescriptor; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class RakPeer : public RakPeerInterface {
public:
    // RakPeer inner types declare
    // clang-format off
    struct BufferedCommandStruct;
    struct RemoteSystemStruct;
    struct RequestedConnectionStruct;
    struct SocketQueryOutput;
    // clang-format on

    // RakPeer inner types define
    struct BufferedCommandStruct {
    public:
        // prevent constructor by default
        BufferedCommandStruct& operator=(BufferedCommandStruct const&);
        BufferedCommandStruct(BufferedCommandStruct const&);
        BufferedCommandStruct();
    };

    struct RemoteSystemStruct {
    public:
        // RemoteSystemStruct inner types define
        enum class ConnectMode {};

    public:
        // prevent constructor by default
        RemoteSystemStruct& operator=(RemoteSystemStruct const&);
        RemoteSystemStruct(RemoteSystemStruct const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0RemoteSystemStruct@RakPeer@RakNet@@QEAA@XZ
        MCAPI RemoteSystemStruct();

        // symbol: ??1RemoteSystemStruct@RakPeer@RakNet@@QEAA@XZ
        MCAPI ~RemoteSystemStruct();

        // NOLINTEND
    };

    struct RequestedConnectionStruct {
    public:
        // prevent constructor by default
        RequestedConnectionStruct& operator=(RequestedConnectionStruct const&);
        RequestedConnectionStruct(RequestedConnectionStruct const&);
        RequestedConnectionStruct();
    };

    struct SocketQueryOutput {
    public:
        // prevent constructor by default
        SocketQueryOutput& operator=(SocketQueryOutput const&);
        SocketQueryOutput(SocketQueryOutput const&);
        SocketQueryOutput();
    };

public:
    // prevent constructor by default
    RakPeer& operator=(RakPeer const&);
    RakPeer(RakPeer const&);

public:
    // NOLINTBEGIN
    // symbol: ?AddToBanList@RakPeer@RakNet@@UEAAXPEBDI@Z
    MCVAPI void AddToBanList(char const*, uint);

    // symbol: ?AddToSecurityExceptionList@RakPeer@RakNet@@UEAAXPEBD@Z
    MCVAPI void AddToSecurityExceptionList(char const*);

    // symbol: ?AdvertiseSystem@RakPeer@RakNet@@UEAA_NPEBDG0HI@Z
    MCVAPI bool AdvertiseSystem(char const*, ushort, char const*, int, uint);

    // symbol: ?AllocRNS2RecvStruct@RakPeer@RakNet@@MEAAPEAURNS2RecvStruct@2@PEBDI@Z
    MCVAPI struct RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint);

    // symbol: ?AllocatePacket@RakPeer@RakNet@@UEAAPEAUPacket@2@I@Z
    MCVAPI struct RakNet::Packet* AllocatePacket(uint);

    // symbol: ?AllowConnectionResponseIPMigration@RakPeer@RakNet@@UEAAX_N@Z
    MCVAPI void AllowConnectionResponseIPMigration(bool);

    // symbol: ?ApplyNetworkSimulator@RakPeer@RakNet@@UEAAXMGG@Z
    MCVAPI void ApplyNetworkSimulator(float, ushort, ushort);

    // symbol: ?AttachPlugin@RakPeer@RakNet@@UEAAXPEAVPluginInterface2@2@@Z
    MCVAPI void AttachPlugin(class RakNet::PluginInterface2*);

    // symbol: ?CancelConnectionAttempt@RakPeer@RakNet@@UEAAXUSystemAddress@2@@Z
    MCVAPI void CancelConnectionAttempt(struct RakNet::SystemAddress);

    // symbol: ?ChangeSystemAddress@RakPeer@RakNet@@UEAAXURakNetGUID@2@AEBUSystemAddress@2@@Z
    MCVAPI void ChangeSystemAddress(struct RakNet::RakNetGUID, struct RakNet::SystemAddress const&);

    // symbol: ?ClearBanList@RakPeer@RakNet@@UEAAXXZ
    MCVAPI void ClearBanList();

    // symbol: ?CloseConnection@RakPeer@RakNet@@UEAAXUAddressOrGUID@2@_NEW4PacketPriority@@@Z
    MCVAPI void CloseConnection(struct RakNet::AddressOrGUID, bool, uchar, ::PacketPriority);

    // symbol: ?Connect@RakPeer@RakNet@@UEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAUPublicKey@2@IIII@Z
    MCVAPI ::RakNet::ConnectionAttemptResult
    Connect(char const*, ushort, char const*, int, struct RakNet::PublicKey*, uint, uint, uint, uint);

    // symbol:
    // ?ConnectWithSocket@RakPeer@RakNet@@UEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAVRakNetSocket2@2@PEAUPublicKey@2@III@Z
    MCVAPI ::RakNet::ConnectionAttemptResult ConnectWithSocket(
        char const*,
        ushort,
        char const*,
        int,
        class RakNet::RakNetSocket2*,
        struct RakNet::PublicKey*,
        uint,
        uint,
        uint
    );

    // symbol: ?DeallocRNS2RecvStruct@RakPeer@RakNet@@MEAAXPEAURNS2RecvStruct@2@PEBDI@Z
    MCVAPI void DeallocRNS2RecvStruct(struct RakNet::RNS2RecvStruct*, char const*, uint);

    // symbol: ?DeallocatePacket@RakPeer@RakNet@@UEAAXPEAUPacket@2@@Z
    MCVAPI void DeallocatePacket(struct RakNet::Packet*);

    // symbol: ?DetachPlugin@RakPeer@RakNet@@UEAAXPEAVPluginInterface2@2@@Z
    MCVAPI void DetachPlugin(class RakNet::PluginInterface2*);

    // symbol: ?DisableSecurity@RakPeer@RakNet@@UEAAXXZ
    MCVAPI void DisableSecurity();

    // symbol: ?GetAveragePing@RakPeer@RakNet@@UEAAHUAddressOrGUID@2@@Z
    MCVAPI int GetAveragePing(struct RakNet::AddressOrGUID);

    // symbol: ?GetClientPublicKeyFromSystemAddress@RakPeer@RakNet@@UEBA_NUSystemAddress@2@PEAD@Z
    MCVAPI bool GetClientPublicKeyFromSystemAddress(struct RakNet::SystemAddress, char*) const;

    // symbol: ?GetClockDifferential@RakPeer@RakNet@@UEAA_KUAddressOrGUID@2@@Z
    MCVAPI uint64 GetClockDifferential(struct RakNet::AddressOrGUID);

    // symbol: ?GetConnectionList@RakPeer@RakNet@@UEBA_NPEAUSystemAddress@2@PEAG@Z
    MCVAPI bool GetConnectionList(struct RakNet::SystemAddress*, ushort*) const;

    // symbol: ?GetConnectionState@RakPeer@RakNet@@UEAA?AW4ConnectionState@2@UAddressOrGUID@2@@Z
    MCVAPI ::RakNet::ConnectionState GetConnectionState(struct RakNet::AddressOrGUID);

    // symbol: ?GetExternalID@RakPeer@RakNet@@UEBA?AUSystemAddress@2@U32@@Z
    MCVAPI struct RakNet::SystemAddress GetExternalID(struct RakNet::SystemAddress) const;

    // symbol: ?GetGUIDFromIndex@RakPeer@RakNet@@UEAA?AURakNetGUID@2@I@Z
    MCVAPI struct RakNet::RakNetGUID GetGUIDFromIndex(uint);

    // symbol: ?GetGuidFromSystemAddress@RakPeer@RakNet@@UEBAAEBURakNetGUID@2@USystemAddress@2@@Z
    MCVAPI struct RakNet::RakNetGUID const& GetGuidFromSystemAddress(struct RakNet::SystemAddress) const;

    // symbol: ?GetIncomingPassword@RakPeer@RakNet@@UEAAXPEADPEAH@Z
    MCVAPI void GetIncomingPassword(char*, int*);

    // symbol: ?GetIndexFromSystemAddress@RakPeer@RakNet@@UEBAHUSystemAddress@2@@Z
    MCVAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress) const;

    // symbol: ?GetInternalID@RakPeer@RakNet@@UEBA?AUSystemAddress@2@U32@H@Z
    MCVAPI struct RakNet::SystemAddress GetInternalID(struct RakNet::SystemAddress, int) const;

    // symbol: ?GetLastPing@RakPeer@RakNet@@UEBAHUAddressOrGUID@2@@Z
    MCVAPI int GetLastPing(struct RakNet::AddressOrGUID) const;

    // symbol: ?GetLocalAdapter@RakPeer@RakNet@@UEAAAEAUNetworkAdapter@2@I@Z
    MCVAPI struct RakNet::NetworkAdapter& GetLocalAdapter(uint);

    // symbol: ?GetLocalIP@RakPeer@RakNet@@UEAAPEBDI@Z
    MCVAPI char const* GetLocalIP(uint);

    // symbol: ?GetLowestPing@RakPeer@RakNet@@UEBAHUAddressOrGUID@2@@Z
    MCVAPI int GetLowestPing(struct RakNet::AddressOrGUID) const;

    // symbol: ?GetMTUSize@RakPeer@RakNet@@UEBAHUSystemAddress@2@@Z
    MCVAPI int GetMTUSize(struct RakNet::SystemAddress) const;

    // symbol: ?GetMaximumIncomingConnections@RakPeer@RakNet@@UEBAIXZ
    MCVAPI uint GetMaximumIncomingConnections() const;

    // symbol: ?GetMaximumNumberOfPeers@RakPeer@RakNet@@UEBAIXZ
    MCVAPI uint GetMaximumNumberOfPeers() const;

    // symbol: ?GetMyBoundAddress@RakPeer@RakNet@@UEAA?AUSystemAddress@2@H@Z
    MCVAPI struct RakNet::SystemAddress GetMyBoundAddress(int);

    // symbol: ?GetMyGUID@RakPeer@RakNet@@UEBA?BURakNetGUID@2@XZ
    MCVAPI struct RakNet::RakNetGUID const GetMyGUID() const;

    // symbol: ?GetNextSendReceipt@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetNextSendReceipt();

    // symbol: ?GetNumberOfAdapters@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetNumberOfAdapters();

    // symbol: ?GetNumberOfAddresses@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetNumberOfAddresses();

    // symbol: ?GetOfflinePingResponse@RakPeer@RakNet@@UEAAXPEAPEADPEAI@Z
    MCVAPI void GetOfflinePingResponse(char**, uint*);

    // symbol: ?GetReceiveBufferSize@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetReceiveBufferSize();

    // symbol: ?GetSocket@RakPeer@RakNet@@UEAAPEAVRakNetSocket2@2@USystemAddress@2@@Z
    MCVAPI class RakNet::RakNetSocket2* GetSocket(struct RakNet::SystemAddress);

    // symbol: ?GetSockets@RakPeer@RakNet@@UEAAXAEAV?$List@PEAVRakNetSocket2@RakNet@@@DataStructures@@@Z
    MCVAPI void GetSockets(class DataStructures::List<class RakNet::RakNetSocket2*>&);

    // symbol: ?GetSplitMessageProgressInterval@RakPeer@RakNet@@UEBAHXZ
    MCVAPI int GetSplitMessageProgressInterval() const;

    // symbol: ?GetStatistics@RakPeer@RakNet@@UEAA_NIPEAURakNetStatistics@2@@Z
    MCVAPI bool GetStatistics(uint, struct RakNet::RakNetStatistics*);

    // symbol: ?GetStatistics@RakPeer@RakNet@@UEAAPEAURakNetStatistics@2@USystemAddress@2@PEAU32@@Z
    MCVAPI struct RakNet::RakNetStatistics*
    GetStatistics(struct RakNet::SystemAddress, struct RakNet::RakNetStatistics*);

    // symbol:
    // ?GetStatisticsList@RakPeer@RakNet@@UEAAXAEAV?$List@USystemAddress@RakNet@@@DataStructures@@AEAV?$List@URakNetGUID@RakNet@@@4@AEAV?$List@URakNetStatistics@RakNet@@@4@@Z
    MCVAPI void
    GetStatisticsList(class DataStructures::List<struct RakNet::SystemAddress>&, class DataStructures::List<struct RakNet::RakNetGUID>&, class DataStructures::List<struct RakNet::RakNetStatistics>&);

    // symbol: ?GetSystemAddressFromGuid@RakPeer@RakNet@@UEBA?AUSystemAddress@2@URakNetGUID@2@@Z
    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID) const;

    // symbol: ?GetSystemAddressFromIndex@RakPeer@RakNet@@UEAA?AUSystemAddress@2@I@Z
    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromIndex(uint);

    // symbol:
    // ?GetSystemList@RakPeer@RakNet@@UEBAXAEAV?$List@USystemAddress@RakNet@@@DataStructures@@AEAV?$List@URakNetGUID@RakNet@@@4@@Z
    MCVAPI void
    GetSystemList(class DataStructures::List<struct RakNet::SystemAddress>&, class DataStructures::List<struct RakNet::RakNetGUID>&)
        const;

    // symbol: ?GetTimeoutTime@RakPeer@RakNet@@UEAAIUSystemAddress@2@@Z
    MCVAPI uint GetTimeoutTime(struct RakNet::SystemAddress);

    // symbol: ?IncrementNextSendReceipt@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint IncrementNextSendReceipt();

    // symbol: ?InitializeSecurity@RakPeer@RakNet@@UEAA_NPEBD0_N@Z
    MCVAPI bool InitializeSecurity(char const*, char const*, bool);

    // symbol: ?IsActive@RakPeer@RakNet@@UEBA_NXZ
    MCVAPI bool IsActive() const;

    // symbol: ?IsBanned@RakPeer@RakNet@@UEAA_NPEBD@Z
    MCVAPI bool IsBanned(char const*);

    // symbol: ?IsInSecurityExceptionList@RakPeer@RakNet@@UEAA_NPEBD@Z
    MCVAPI bool IsInSecurityExceptionList(char const*);

    // symbol: ?IsLocalIP@RakPeer@RakNet@@UEAA_NPEBD@Z
    MCVAPI bool IsLocalIP(char const*);

    // symbol: ?IsNetworkSimulatorActive@RakPeer@RakNet@@UEAA_NXZ
    MCVAPI bool IsNetworkSimulatorActive();

    // symbol: ?NumberOfConnections@RakPeer@RakNet@@UEBAGXZ
    MCVAPI ushort NumberOfConnections() const;

    // symbol: ?OnRNS2Recv@RakPeer@RakNet@@MEAAXPEAURNS2RecvStruct@2@@Z
    MCVAPI void OnRNS2Recv(struct RakNet::RNS2RecvStruct*);

    // symbol: ?Ping@RakPeer@RakNet@@UEAAXUSystemAddress@2@@Z
    MCVAPI void Ping(struct RakNet::SystemAddress);

    // symbol: ?Ping@RakPeer@RakNet@@UEAA_NPEBDG_NI@Z
    MCVAPI bool Ping(char const*, ushort, bool, uint);

    // symbol: ?PushBackPacket@RakPeer@RakNet@@UEAAXPEAUPacket@2@_N@Z
    MCVAPI void PushBackPacket(struct RakNet::Packet*, bool);

    // symbol: ?Receive@RakPeer@RakNet@@UEAAPEAUPacket@2@XZ
    MCVAPI struct RakNet::Packet* Receive();

    // symbol: ?ReleaseSockets@RakPeer@RakNet@@UEAAXAEAV?$List@PEAVRakNetSocket2@RakNet@@@DataStructures@@@Z
    MCVAPI void ReleaseSockets(class DataStructures::List<class RakNet::RakNetSocket2*>&);

    // symbol: ?RemoveFromBanList@RakPeer@RakNet@@UEAAXPEBD@Z
    MCVAPI void RemoveFromBanList(char const*);

    // symbol: ?RemoveFromSecurityExceptionList@RakPeer@RakNet@@UEAAXPEBD@Z
    MCVAPI void RemoveFromSecurityExceptionList(char const*);

    // symbol: ?RunUpdateCycle@RakPeer@RakNet@@UEAA_NAEAVBitStream@2@@Z
    MCVAPI bool RunUpdateCycle(class RakNet::BitStream&);

    // symbol: ?Send@RakPeer@RakNet@@UEAAIPEBDHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z
    MCVAPI uint
    Send(char const*, int, ::PacketPriority, ::PacketReliability, char, struct RakNet::AddressOrGUID, bool, uint);

    // symbol: ?Send@RakPeer@RakNet@@UEAAIPEBVBitStream@2@W4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z
    MCVAPI uint Send(
        class RakNet::BitStream const*,
        ::PacketPriority,
        ::PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        uint
    );

    // symbol: ?SendList@RakPeer@RakNet@@UEAAIPEAPEBDPEBHHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z
    MCVAPI uint SendList(
        char const**,
        int const*,
        int,
        ::PacketPriority,
        ::PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        uint
    );

    // symbol: ?SendLoopback@RakPeer@RakNet@@UEAAXPEBDH@Z
    MCVAPI void SendLoopback(char const*, int);

    // symbol: ?SendNatTraversalMessage@RakPeer@RakNet@@UEAAXUSystemAddress@2@@Z
    MCVAPI void SendNatTraversalMessage(struct RakNet::SystemAddress);

    // symbol: ?SendOutOfBand@RakPeer@RakNet@@UEAA_NPEBDG0II@Z
    MCVAPI bool SendOutOfBand(char const*, ushort, char const*, uint, uint);

    // symbol: ?SendTTL@RakPeer@RakNet@@UEAAXPEBDGHI@Z
    MCVAPI void SendTTL(char const*, ushort, int, uint);

    // symbol: ?SetIncomingDatagramEventHandler@RakPeer@RakNet@@UEAAXP6A_NPEAURNS2RecvStruct@2@@Z@Z
    MCVAPI void SetIncomingDatagramEventHandler(bool (*)(struct RakNet::RNS2RecvStruct*));

    // symbol: ?SetIncomingPassword@RakPeer@RakNet@@UEAAXPEBDH@Z
    MCVAPI void SetIncomingPassword(char const*, int);

    // symbol: ?SetInternalID@RakPeer@RakNet@@UEAAXUSystemAddress@2@H@Z
    MCVAPI void SetInternalID(struct RakNet::SystemAddress, int);

    // symbol: ?SetLimitIPConnectionFrequency@RakPeer@RakNet@@UEAAX_N@Z
    MCVAPI void SetLimitIPConnectionFrequency(bool);

    // symbol: ?SetMaximumIncomingConnections@RakPeer@RakNet@@UEAAXG@Z
    MCVAPI void SetMaximumIncomingConnections(ushort);

    // symbol: ?SetOccasionalPing@RakPeer@RakNet@@UEAAX_N@Z
    MCVAPI void SetOccasionalPing(bool);

    // symbol: ?SetOfflinePingResponse@RakPeer@RakNet@@UEAAXPEBDI@Z
    MCVAPI void SetOfflinePingResponse(char const*, uint);

    // symbol: ?SetPerConnectionOutgoingBandwidthLimit@RakPeer@RakNet@@UEAAXI@Z
    MCVAPI void SetPerConnectionOutgoingBandwidthLimit(uint);

    // symbol: ?SetSplitMessageProgressInterval@RakPeer@RakNet@@UEAAXH@Z
    MCVAPI void SetSplitMessageProgressInterval(int);

    // symbol: ?SetTimeoutTime@RakPeer@RakNet@@UEAAXIUSystemAddress@2@@Z
    MCVAPI void SetTimeoutTime(uint, struct RakNet::SystemAddress);

    // symbol: ?SetUnreliableTimeout@RakPeer@RakNet@@UEAAXI@Z
    MCVAPI void SetUnreliableTimeout(uint);

    // symbol: ?SetUserUpdateThread@RakPeer@RakNet@@UEAAXP6AXPEAVRakPeerInterface@2@PEAX@Z1@Z
    MCVAPI void SetUserUpdateThread(void (*)(class RakNet::RakPeerInterface*, void*), void*);

    // symbol: ?Shutdown@RakPeer@RakNet@@UEAAXIEW4PacketPriority@@@Z
    MCVAPI void Shutdown(uint, uchar, ::PacketPriority);

    // symbol: ?Startup@RakPeer@RakNet@@UEAA?AW4StartupResult@2@IPEAUSocketDescriptor@2@IH@Z
    MCVAPI ::RakNet::StartupResult Startup(uint, struct RakNet::SocketDescriptor*, uint, int);

    // symbol: ?WriteOutOfBandHeader@RakPeer@RakNet@@UEAAXPEAVBitStream@2@@Z
    MCVAPI void WriteOutOfBandHeader(class RakNet::BitStream*);

    // symbol: ?resetMyGUID@RakPeer@RakNet@@UEAAXXZ
    MCVAPI void resetMyGUID();

    // symbol: ??1RakPeer@RakNet@@UEAA@XZ
    MCVAPI ~RakPeer();

    // symbol: ??0RakPeer@RakNet@@QEAA@XZ
    MCAPI RakPeer();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?AddPacketToProducer@RakPeer@RakNet@@IEAAXPEAUPacket@2@@Z
    MCAPI void AddPacketToProducer(struct RakNet::Packet*);

    // symbol: ?AllocPacket@RakPeer@RakNet@@IEAAPEAUPacket@2@IPEBDI@Z
    MCAPI struct RakNet::Packet* AllocPacket(uint, char const*, uint);

    // symbol: ?AllocPacket@RakPeer@RakNet@@IEAAPEAUPacket@2@IPEAEPEBDI@Z
    MCAPI struct RakNet::Packet* AllocPacket(uint, uchar*, char const*, uint);

    // symbol: ?AllowIncomingConnections@RakPeer@RakNet@@IEBA_NXZ
    MCAPI bool AllowIncomingConnections() const;

    // symbol:
    // ?AssignSystemAddressToRemoteSystemList@RakPeer@RakNet@@IEAAPEAURemoteSystemStruct@12@USystemAddress@2@W4ConnectMode@312@PEAVRakNetSocket2@2@PEA_NU42@HURakNetGUID@2@_N@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        struct RakNet::SystemAddress,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        class RakNet::RakNetSocket2*,
        bool*,
        struct RakNet::SystemAddress,
        int,
        struct RakNet::RakNetGUID,
        bool
    );

    // symbol:
    // ?CallPluginCallbacks@RakPeer@RakNet@@IEAAXAEAV?$List@PEAVPluginInterface2@RakNet@@@DataStructures@@PEAUPacket@2@@Z
    MCAPI void
    CallPluginCallbacks(class DataStructures::List<class RakNet::PluginInterface2*>&, struct RakNet::Packet*);

    // symbol: ?ClearBufferedCommands@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearBufferedCommands();

    // symbol: ?ClearBufferedPackets@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearBufferedPackets();

    // symbol: ?ClearRequestedConnectionList@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearRequestedConnectionList();

    // symbol: ?ClearSocketQueryOutput@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearSocketQueryOutput();

    // symbol: ?CloseConnectionInternal@RakPeer@RakNet@@IEAAXAEBUAddressOrGUID@2@_N1EW4PacketPriority@@@Z
    MCAPI void CloseConnectionInternal(struct RakNet::AddressOrGUID const&, bool, bool, uchar, ::PacketPriority);

    // symbol: ?DerefAllSockets@RakPeer@RakNet@@IEAAXXZ
    MCAPI void DerefAllSockets();

    // symbol: ?DereferenceRemoteSystem@RakPeer@RakNet@@IEAAXAEBUSystemAddress@2@@Z
    MCAPI void DereferenceRemoteSystem(struct RakNet::SystemAddress const&);

    // symbol: ?FillIPList@RakPeer@RakNet@@IEAAXXZ
    MCAPI void FillIPList();

    // symbol: ?GenerateGUID@RakPeer@RakNet@@IEAAXXZ
    MCAPI void GenerateGUID();

    // symbol: ?GetIndexFromSystemAddress@RakPeer@RakNet@@IEBAHUSystemAddress@2@_N@Z
    MCAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress, bool) const;

    // symbol: ?GetRakNetSocketFromUserConnectionSocketIndex@RakPeer@RakNet@@IEBAII@Z
    MCAPI uint GetRakNetSocketFromUserConnectionSocketIndex(uint) const;

    // symbol: ?GetRemoteSystem@RakPeer@RakNet@@IEBAPEAURemoteSystemStruct@12@UAddressOrGUID@2@_N1@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystem(struct RakNet::AddressOrGUID, bool, bool) const;

    // symbol: ?GetRemoteSystemFromGUID@RakPeer@RakNet@@IEBAPEAURemoteSystemStruct@12@URakNetGUID@2@_N@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystemFromGUID(struct RakNet::RakNetGUID, bool) const;

    // symbol: ?GetRemoteSystemFromSystemAddress@RakPeer@RakNet@@IEBAPEAURemoteSystemStruct@12@USystemAddress@2@_N1@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystemFromSystemAddress(struct RakNet::SystemAddress, bool, bool) const;

    // symbol: ?GetRemoteSystemIndex@RakPeer@RakNet@@IEBAIAEBUSystemAddress@2@@Z
    MCAPI uint GetRemoteSystemIndex(struct RakNet::SystemAddress const&) const;

    // symbol: ?NotifyAndFlagForShutdown@RakPeer@RakNet@@IEAAXUSystemAddress@2@_NEW4PacketPriority@@@Z
    MCAPI void NotifyAndFlagForShutdown(struct RakNet::SystemAddress, bool, uchar, ::PacketPriority);

    // symbol: ?OnConnectedPong@RakPeer@RakNet@@IEAAX_K0PEAURemoteSystemStruct@12@@Z
    MCAPI void OnConnectedPong(uint64, uint64, struct RakNet::RakPeer::RemoteSystemStruct*);

    // symbol: ?OnConnectionRequest@RakPeer@RakNet@@IEAAXPEAURemoteSystemStruct@12@_K@Z
    MCAPI void OnConnectionRequest(struct RakNet::RakPeer::RemoteSystemStruct*, uint64);

    // symbol: ?ParseConnectionRequestPacket@RakPeer@RakNet@@IEAAXPEAURemoteSystemStruct@12@AEBUSystemAddress@2@PEBDH@Z
    MCAPI void ParseConnectionRequestPacket(
        struct RakNet::RakPeer::RemoteSystemStruct*,
        struct RakNet::SystemAddress const&,
        char const*,
        int
    );

    // symbol: ?PingInternal@RakPeer@RakNet@@IEAAXUSystemAddress@2@_NW4PacketReliability@@@Z
    MCAPI void PingInternal(struct RakNet::SystemAddress, bool, ::PacketReliability);

    // symbol: ?ReferenceRemoteSystem@RakPeer@RakNet@@IEAAXAEBUSystemAddress@2@I@Z
    MCAPI void ReferenceRemoteSystem(struct RakNet::SystemAddress const&, uint);

    // symbol:
    // ?SendBuffered@RakPeer@RakNet@@IEAAXPEBDIW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NW4ConnectMode@RemoteSystemStruct@12@I@Z
    MCAPI void SendBuffered(
        char const*,
        uint,
        ::PacketPriority,
        ::PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        uint
    );

    // symbol:
    // ?SendBufferedList@RakPeer@RakNet@@IEAAXPEAPEBDPEBHHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NW4ConnectMode@RemoteSystemStruct@12@I@Z
    MCAPI void SendBufferedList(
        char const**,
        int const*,
        int,
        ::PacketPriority,
        ::PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        uint
    );

    // symbol: ?SendConnectionRequest@RakPeer@RakNet@@IEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAUPublicKey@2@IIIII@Z
    MCAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*,
        ushort,
        char const*,
        int,
        struct RakNet::PublicKey*,
        uint,
        uint,
        uint,
        uint,
        uint
    );

    // symbol:
    // ?SendConnectionRequest@RakPeer@RakNet@@IEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAUPublicKey@2@IIIIIPEAVRakNetSocket2@2@@Z
    MCAPI ::RakNet::ConnectionAttemptResult
    SendConnectionRequest(char const*, ushort, char const*, int, struct RakNet::PublicKey*, uint, uint, uint, uint, uint, class RakNet::RakNetSocket2*);

    // symbol:
    // ?SendImmediate@RakPeer@RakNet@@IEAA_NPEADIW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_N4_KI@Z
    MCAPI bool SendImmediate(
        char*,
        uint,
        ::PacketPriority,
        ::PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        bool,
        uint64,
        uint
    );

    // symbol: ?ShiftIncomingTimestamp@RakPeer@RakNet@@IEBAXPEAEAEBUSystemAddress@2@@Z
    MCAPI void ShiftIncomingTimestamp(uchar*, struct RakNet::SystemAddress const&) const;

    // NOLINTEND
};

}; // namespace RakNet
