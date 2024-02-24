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
namespace RakNet { class ShadowBanList; }
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
    MCVAPI void AddToBanList(char const* IP, uint milliseconds);

    // symbol: ?AddToSecurityExceptionList@RakPeer@RakNet@@UEAAXPEBD@Z
    MCVAPI void AddToSecurityExceptionList(char const* ip);

    // symbol: ?AdvertiseSystem@RakPeer@RakNet@@UEAA_NPEBDG0HI@Z
    MCVAPI bool
    AdvertiseSystem(char const* host, ushort remotePort, char const* data, int dataLength, uint connectionSocketIndex);

    // symbol: ?AllocRNS2RecvStruct@RakPeer@RakNet@@MEAAPEAURNS2RecvStruct@2@PEBDI@Z
    MCVAPI struct RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const* file, uint line);

    // symbol: ?AllocatePacket@RakPeer@RakNet@@UEAAPEAUPacket@2@I@Z
    MCVAPI struct RakNet::Packet* AllocatePacket(uint dataSize);

    // symbol: ?AllowConnectionResponseIPMigration@RakPeer@RakNet@@UEAAX_N@Z
    MCVAPI void AllowConnectionResponseIPMigration(bool allow);

    // symbol: ?ApplyNetworkSimulator@RakPeer@RakNet@@UEAAXMGG@Z
    MCVAPI void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance);

    // symbol: ?AttachPlugin@RakPeer@RakNet@@UEAAXPEAVPluginInterface2@2@@Z
    MCVAPI void AttachPlugin(class RakNet::PluginInterface2* plugin);

    // symbol: ?CancelConnectionAttempt@RakPeer@RakNet@@UEAAXUSystemAddress@2@@Z
    MCVAPI void CancelConnectionAttempt(struct RakNet::SystemAddress target);

    // symbol: ?ChangeSystemAddress@RakPeer@RakNet@@UEAAXURakNetGUID@2@AEBUSystemAddress@2@@Z
    MCVAPI void ChangeSystemAddress(struct RakNet::RakNetGUID guid, struct RakNet::SystemAddress const& systemAddress);

    // symbol: ?ClearBanList@RakPeer@RakNet@@UEAAXXZ
    MCVAPI void ClearBanList();

    // symbol: ?CloseConnection@RakPeer@RakNet@@UEAAXUAddressOrGUID@2@_NEW4PacketPriority@@@Z
    MCVAPI void CloseConnection(
        struct RakNet::AddressOrGUID target,
        bool                         sendDisconnectionNotification,
        uchar                        orderingChannel,
        ::PacketPriority             disconnectionNotificationPriority
    );

    // symbol: ?Connect@RakPeer@RakNet@@UEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAUPublicKey@2@IIII@Z
    MCVAPI ::RakNet::ConnectionAttemptResult Connect(
        char const*               host,
        ushort                    remotePort,
        char const*               passwordData,
        int                       passwordDataLength,
        struct RakNet::PublicKey* publicKey,
        uint                      connectionSocketIndex,
        uint                      sendConnectionAttemptCount,
        uint                      timeBetweenSendConnectionAttemptsMS,
        uint                      timeoutTime
    );

    // symbol:
    // ?ConnectWithSocket@RakPeer@RakNet@@UEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAVRakNetSocket2@2@PEAUPublicKey@2@III@Z
    MCVAPI ::RakNet::ConnectionAttemptResult ConnectWithSocket(
        char const*                  host,
        ushort                       remotePort,
        char const*                  passwordData,
        int                          passwordDataLength,
        class RakNet::RakNetSocket2* socket,
        struct RakNet::PublicKey*    publicKey,
        uint                         sendConnectionAttemptCount,
        uint                         timeBetweenSendConnectionAttemptsMS,
        uint                         timeoutTime
    );

    // symbol: ?DeallocRNS2RecvStruct@RakPeer@RakNet@@MEAAXPEAURNS2RecvStruct@2@PEBDI@Z
    MCVAPI void DeallocRNS2RecvStruct(struct RakNet::RNS2RecvStruct* s, char const* file, uint line);

    // symbol: ?DeallocatePacket@RakPeer@RakNet@@UEAAXPEAUPacket@2@@Z
    MCVAPI void DeallocatePacket(struct RakNet::Packet* packet);

    // symbol: ?DetachPlugin@RakPeer@RakNet@@UEAAXPEAVPluginInterface2@2@@Z
    MCVAPI void DetachPlugin(class RakNet::PluginInterface2* plugin);

    // symbol: ?DisableSecurity@RakPeer@RakNet@@UEAAXXZ
    MCVAPI void DisableSecurity();

    // symbol: ?GetAveragePing@RakPeer@RakNet@@UEAAHUAddressOrGUID@2@@Z
    MCVAPI int GetAveragePing(struct RakNet::AddressOrGUID systemIdentifier);

    // symbol: ?GetClientPublicKeyFromSystemAddress@RakPeer@RakNet@@UEBA_NUSystemAddress@2@PEAD@Z
    MCVAPI bool GetClientPublicKeyFromSystemAddress(struct RakNet::SystemAddress input, char* client_public_key) const;

    // symbol: ?GetClockDifferential@RakPeer@RakNet@@UEAA_KUAddressOrGUID@2@@Z
    MCVAPI uint64 GetClockDifferential(struct RakNet::AddressOrGUID systemIdentifier);

    // symbol: ?GetConnectionList@RakPeer@RakNet@@UEBA_NPEAUSystemAddress@2@PEAG@Z
    MCVAPI bool GetConnectionList(struct RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    // symbol: ?GetConnectionState@RakPeer@RakNet@@UEAA?AW4ConnectionState@2@UAddressOrGUID@2@@Z
    MCVAPI ::RakNet::ConnectionState GetConnectionState(struct RakNet::AddressOrGUID systemIdentifier);

    // symbol: ?GetExternalID@RakPeer@RakNet@@UEBA?AUSystemAddress@2@U32@@Z
    MCVAPI struct RakNet::SystemAddress GetExternalID(struct RakNet::SystemAddress target) const;

    // symbol: ?GetGUIDFromIndex@RakPeer@RakNet@@UEAA?AURakNetGUID@2@I@Z
    MCVAPI struct RakNet::RakNetGUID GetGUIDFromIndex(uint index);

    // symbol: ?GetGuidFromSystemAddress@RakPeer@RakNet@@UEBAAEBURakNetGUID@2@USystemAddress@2@@Z
    MCVAPI struct RakNet::RakNetGUID const& GetGuidFromSystemAddress(struct RakNet::SystemAddress input) const;

    // symbol: ?GetIncomingPassword@RakPeer@RakNet@@UEAAXPEADPEAH@Z
    MCVAPI void GetIncomingPassword(char* passwordData, int* passwordDataLength);

    // symbol: ?GetIndexFromSystemAddress@RakPeer@RakNet@@UEBAHUSystemAddress@2@@Z
    MCVAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress systemAddress) const;

    // symbol: ?GetInternalID@RakPeer@RakNet@@UEBA?AUSystemAddress@2@U32@H@Z
    MCVAPI struct RakNet::SystemAddress GetInternalID(struct RakNet::SystemAddress systemAddress, int index) const;

    // symbol: ?GetLastPing@RakPeer@RakNet@@UEBAHUAddressOrGUID@2@@Z
    MCVAPI int GetLastPing(struct RakNet::AddressOrGUID systemIdentifier) const;

    // symbol: ?GetLocalAdapter@RakPeer@RakNet@@UEAAAEAUNetworkAdapter@2@I@Z
    MCVAPI struct RakNet::NetworkAdapter& GetLocalAdapter(uint index);

    // symbol: ?GetLocalIP@RakPeer@RakNet@@UEAAPEBDI@Z
    MCVAPI char const* GetLocalIP(uint index);

    // symbol: ?GetLowestPing@RakPeer@RakNet@@UEBAHUAddressOrGUID@2@@Z
    MCVAPI int GetLowestPing(struct RakNet::AddressOrGUID systemIdentifier) const;

    // symbol: ?GetMTUSize@RakPeer@RakNet@@UEBAHUSystemAddress@2@@Z
    MCVAPI int GetMTUSize(struct RakNet::SystemAddress target) const;

    // symbol: ?GetMaximumIncomingConnections@RakPeer@RakNet@@UEBAIXZ
    MCVAPI uint GetMaximumIncomingConnections() const;

    // symbol: ?GetMaximumNumberOfPeers@RakPeer@RakNet@@UEBAIXZ
    MCVAPI uint GetMaximumNumberOfPeers() const;

    // symbol: ?GetMyBoundAddress@RakPeer@RakNet@@UEAA?AUSystemAddress@2@H@Z
    MCVAPI struct RakNet::SystemAddress GetMyBoundAddress(int socketIndex);

    // symbol: ?GetMyGUID@RakPeer@RakNet@@UEBA?BURakNetGUID@2@XZ
    MCVAPI struct RakNet::RakNetGUID const GetMyGUID() const;

    // symbol: ?GetNextSendReceipt@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetNextSendReceipt();

    // symbol: ?GetNumberOfAdapters@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetNumberOfAdapters();

    // symbol: ?GetNumberOfAddresses@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetNumberOfAddresses();

    // symbol: ?GetOfflinePingResponse@RakPeer@RakNet@@UEAAXPEAPEADPEAI@Z
    MCVAPI void GetOfflinePingResponse(char** data, uint* length);

    // symbol: ?GetReceiveBufferSize@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint GetReceiveBufferSize();

    // symbol: ?GetSocket@RakPeer@RakNet@@UEAAPEAVRakNetSocket2@2@USystemAddress@2@@Z
    MCVAPI class RakNet::RakNetSocket2* GetSocket(struct RakNet::SystemAddress target);

    // symbol: ?GetSockets@RakPeer@RakNet@@UEAAXAEAV?$List@PEAVRakNetSocket2@RakNet@@@DataStructures@@@Z
    MCVAPI void GetSockets(class DataStructures::List<class RakNet::RakNetSocket2*>& sockets);

    // symbol: ?GetSplitMessageProgressInterval@RakPeer@RakNet@@UEBAHXZ
    MCVAPI int GetSplitMessageProgressInterval() const;

    // symbol: ?GetStatistics@RakPeer@RakNet@@UEAA_NIPEAURakNetStatistics@2@@Z
    MCVAPI bool GetStatistics(uint index, struct RakNet::RakNetStatistics* rns);

    // symbol: ?GetStatistics@RakPeer@RakNet@@UEAAPEAURakNetStatistics@2@USystemAddress@2@PEAU32@@Z
    MCVAPI struct RakNet::RakNetStatistics*
    GetStatistics(struct RakNet::SystemAddress systemAddress, struct RakNet::RakNetStatistics* rns);

    // symbol:
    // ?GetStatisticsList@RakPeer@RakNet@@UEAAXAEAV?$List@USystemAddress@RakNet@@@DataStructures@@AEAV?$List@URakNetGUID@RakNet@@@4@AEAV?$List@URakNetStatistics@RakNet@@@4@@Z
    MCVAPI void GetStatisticsList(
        class DataStructures::List<struct RakNet::SystemAddress>&    addresses,
        class DataStructures::List<struct RakNet::RakNetGUID>&       guids,
        class DataStructures::List<struct RakNet::RakNetStatistics>& statistics
    );

    // symbol: ?GetSystemAddressFromGuid@RakPeer@RakNet@@UEBA?AUSystemAddress@2@URakNetGUID@2@@Z
    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID input) const;

    // symbol: ?GetSystemAddressFromIndex@RakPeer@RakNet@@UEAA?AUSystemAddress@2@I@Z
    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromIndex(uint index);

    // symbol:
    // ?GetSystemList@RakPeer@RakNet@@UEBAXAEAV?$List@USystemAddress@RakNet@@@DataStructures@@AEAV?$List@URakNetGUID@RakNet@@@4@@Z
    MCVAPI void GetSystemList(
        class DataStructures::List<struct RakNet::SystemAddress>& addresses,
        class DataStructures::List<struct RakNet::RakNetGUID>&    guids
    ) const;

    // symbol: ?GetTimeoutTime@RakPeer@RakNet@@UEAAIUSystemAddress@2@@Z
    MCVAPI uint GetTimeoutTime(struct RakNet::SystemAddress target);

    // symbol: ?IncrementNextSendReceipt@RakPeer@RakNet@@UEAAIXZ
    MCVAPI uint IncrementNextSendReceipt();

    // symbol:
    // ?InitializeConfiguration@RakPeer@RakNet@@UEAAXV?$unique_ptr@VShadowBanList@RakNet@@U?$default_delete@VShadowBanList@RakNet@@@std@@@std@@@Z
    MCVAPI void InitializeConfiguration(std::unique_ptr<class RakNet::ShadowBanList>);

    // symbol: ?InitializeSecurity@RakPeer@RakNet@@UEAA_NPEBD0_N@Z
    MCVAPI bool InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey);

    // symbol: ?IsActive@RakPeer@RakNet@@UEBA_NXZ
    MCVAPI bool IsActive() const;

    // symbol: ?IsBanned@RakPeer@RakNet@@UEAA_NPEBD@Z
    MCVAPI bool IsBanned(char const* IP);

    // symbol: ?IsInSecurityExceptionList@RakPeer@RakNet@@UEAA_NPEBD@Z
    MCVAPI bool IsInSecurityExceptionList(char const* ip);

    // symbol: ?IsLocalIP@RakPeer@RakNet@@UEAA_NPEBD@Z
    MCVAPI bool IsLocalIP(char const* ip);

    // symbol: ?IsNetworkSimulatorActive@RakPeer@RakNet@@UEAA_NXZ
    MCVAPI bool IsNetworkSimulatorActive();

    // symbol: ?NumberOfConnections@RakPeer@RakNet@@UEBAGXZ
    MCVAPI ushort NumberOfConnections() const;

    // symbol: ?OnRNS2Recv@RakPeer@RakNet@@MEAAXPEAURNS2RecvStruct@2@@Z
    MCVAPI void OnRNS2Recv(struct RakNet::RNS2RecvStruct* recvStruct);

    // symbol: ?Ping@RakPeer@RakNet@@UEAAXUSystemAddress@2@@Z
    MCVAPI void Ping(struct RakNet::SystemAddress target);

    // symbol: ?Ping@RakPeer@RakNet@@UEAA_NPEBDG_NI@Z
    MCVAPI bool
    Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex);

    // symbol: ?PushBackPacket@RakPeer@RakNet@@UEAAXPEAUPacket@2@_N@Z
    MCVAPI void PushBackPacket(struct RakNet::Packet* packet, bool pushAtHead);

    // symbol: ?Receive@RakPeer@RakNet@@UEAAPEAUPacket@2@XZ
    MCVAPI struct RakNet::Packet* Receive();

    // symbol: ?ReleaseSockets@RakPeer@RakNet@@UEAAXAEAV?$List@PEAVRakNetSocket2@RakNet@@@DataStructures@@@Z
    MCVAPI void ReleaseSockets(class DataStructures::List<class RakNet::RakNetSocket2*>& sockets);

    // symbol: ?RemoveFromBanList@RakPeer@RakNet@@UEAAXPEBD@Z
    MCVAPI void RemoveFromBanList(char const* IP);

    // symbol: ?RemoveFromSecurityExceptionList@RakPeer@RakNet@@UEAAXPEBD@Z
    MCVAPI void RemoveFromSecurityExceptionList(char const* ip);

    // symbol: ?RunUpdateCycle@RakPeer@RakNet@@UEAA_NAEAVBitStream@2@@Z
    MCVAPI bool RunUpdateCycle(class RakNet::BitStream& updateBitStream);

    // symbol: ?Send@RakPeer@RakNet@@UEAAIPEBVBitStream@2@W4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z
    MCVAPI uint Send(
        class RakNet::BitStream const* bitStream,
        ::PacketPriority               priority,
        ::PacketReliability            reliability,
        char                           orderingChannel,
        struct RakNet::AddressOrGUID   systemIdentifier,
        bool                           broadcast,
        uint                           forceReceiptNumber
    );

    // symbol: ?Send@RakPeer@RakNet@@UEAAIPEBDHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z
    MCVAPI uint Send(
        char const*                  data,
        int                          length,
        ::PacketPriority             priority,
        ::PacketReliability          reliability,
        char                         orderingChannel,
        struct RakNet::AddressOrGUID systemIdentifier,
        bool                         broadcast,
        uint                         forceReceiptNumber
    );

    // symbol: ?SendList@RakPeer@RakNet@@UEAAIPEAPEBDPEBHHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NI@Z
    MCVAPI uint SendList(
        char const**                 data,
        int const*                   lengths,
        int                          numParameters,
        ::PacketPriority             priority,
        ::PacketReliability          reliability,
        char                         orderingChannel,
        struct RakNet::AddressOrGUID systemIdentifier,
        bool                         broadcast,
        uint                         forceReceiptNumber
    );

    // symbol: ?SendLoopback@RakPeer@RakNet@@UEAAXPEBDH@Z
    MCVAPI void SendLoopback(char const* data, int length);

    // symbol: ?SendNatTraversalMessage@RakPeer@RakNet@@UEAAXUSystemAddress@2@@Z
    MCVAPI void SendNatTraversalMessage(struct RakNet::SystemAddress target);

    // symbol: ?SendOutOfBand@RakPeer@RakNet@@UEAA_NPEBDG0II@Z
    MCVAPI bool
    SendOutOfBand(char const* host, ushort remotePort, char const* data, uint dataLength, uint connectionSocketIndex);

    // symbol: ?SendTTL@RakPeer@RakNet@@UEAAXPEBDGHI@Z
    MCVAPI void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex);

    // symbol: ?SetApplicationHandshakeCompleted@RakPeer@RakNet@@UEAA_NUAddressOrGUID@2@@Z
    MCVAPI bool SetApplicationHandshakeCompleted(struct RakNet::AddressOrGUID);

    // symbol: ?SetIncomingDatagramEventHandler@RakPeer@RakNet@@UEAAXP6A_NPEAURNS2RecvStruct@2@@Z@Z
    MCVAPI void SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(struct RakNet::RNS2RecvStruct*));

    // symbol: ?SetIncomingPassword@RakPeer@RakNet@@UEAAXPEBDH@Z
    MCVAPI void SetIncomingPassword(char const* passwordData, int passwordDataLength);

    // symbol: ?SetInternalID@RakPeer@RakNet@@UEAAXUSystemAddress@2@H@Z
    MCVAPI void SetInternalID(struct RakNet::SystemAddress systemAddress, int index);

    // symbol: ?SetLimitIPConnectionFrequency@RakPeer@RakNet@@UEAAX_N@Z
    MCVAPI void SetLimitIPConnectionFrequency(bool b);

    // symbol: ?SetMaximumIncomingConnections@RakPeer@RakNet@@UEAAXG@Z
    MCVAPI void SetMaximumIncomingConnections(ushort numberAllowed);

    // symbol: ?SetOccasionalPing@RakPeer@RakNet@@UEAAX_N@Z
    MCVAPI void SetOccasionalPing(bool doPing);

    // symbol: ?SetOfflinePingResponse@RakPeer@RakNet@@UEAAXPEBDI@Z
    MCVAPI void SetOfflinePingResponse(char const* data, uint length);

    // symbol: ?SetPerConnectionOutgoingBandwidthLimit@RakPeer@RakNet@@UEAAXI@Z
    MCVAPI void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond);

    // symbol: ?SetSplitMessageProgressInterval@RakPeer@RakNet@@UEAAXH@Z
    MCVAPI void SetSplitMessageProgressInterval(int interval);

    // symbol: ?SetTimeoutTime@RakPeer@RakNet@@UEAAXIUSystemAddress@2@@Z
    MCVAPI void SetTimeoutTime(uint timeMS, struct RakNet::SystemAddress target);

    // symbol: ?SetUnreliableTimeout@RakPeer@RakNet@@UEAAXI@Z
    MCVAPI void SetUnreliableTimeout(uint timeoutMS);

    // symbol: ?SetUserUpdateThread@RakPeer@RakNet@@UEAAXP6AXPEAVRakPeerInterface@2@PEAX@Z1@Z
    MCVAPI void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(class RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    );

    // symbol: ?Shutdown@RakPeer@RakNet@@UEAAXIEW4PacketPriority@@@Z
    MCVAPI void Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority);

    // symbol: ?Startup@RakPeer@RakNet@@UEAA?AW4StartupResult@2@IPEAUSocketDescriptor@2@IH@Z
    MCVAPI ::RakNet::StartupResult Startup(
        uint                             maxConnections,
        struct RakNet::SocketDescriptor* socketDescriptors,
        uint                             socketDescriptorCount,
        int                              threadPriority
    );

    // symbol: ?WriteOutOfBandHeader@RakPeer@RakNet@@UEAAXPEAVBitStream@2@@Z
    MCVAPI void WriteOutOfBandHeader(class RakNet::BitStream* bitStream);

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
    MCAPI void AddPacketToProducer(struct RakNet::Packet* p);

    // symbol: ?AllocPacket@RakPeer@RakNet@@IEAAPEAUPacket@2@IPEBDI@Z
    MCAPI struct RakNet::Packet* AllocPacket(uint dataSize, char const* file, uint line);

    // symbol: ?AllocPacket@RakPeer@RakNet@@IEAAPEAUPacket@2@IPEAEPEBDI@Z
    MCAPI struct RakNet::Packet* AllocPacket(uint dataSize, uchar* data, char const* file, uint line);

    // symbol: ?AllowIncomingConnections@RakPeer@RakNet@@IEBA_NXZ
    MCAPI bool AllowIncomingConnections() const;

    // symbol:
    // ?AssignSystemAddressToRemoteSystemList@RakPeer@RakNet@@IEAAPEAURemoteSystemStruct@12@USystemAddress@2@W4ConnectMode@312@PEAVRakNetSocket2@2@PEA_NU42@HURakNetGUID@2@_N@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        struct RakNet::SystemAddress                       systemAddress,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        class RakNet::RakNetSocket2*                       incomingRakNetSocket,
        bool*                                              thisIPConnectedRecently,
        struct RakNet::SystemAddress                       bindingAddress,
        int                                                incomingMTU,
        struct RakNet::RakNetGUID                          guid,
        bool                                               useSecurity
    );

    // symbol:
    // ?CallPluginCallbacks@RakPeer@RakNet@@IEAAXAEAV?$List@PEAVPluginInterface2@RakNet@@@DataStructures@@PEAUPacket@2@@Z
    MCAPI void CallPluginCallbacks(
        class DataStructures::List<class RakNet::PluginInterface2*>& pluginList,
        struct RakNet::Packet*                                       packet
    );

    // symbol: ?ClearBufferedCommands@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearBufferedCommands();

    // symbol: ?ClearBufferedPackets@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearBufferedPackets();

    // symbol: ?ClearRequestedConnectionList@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearRequestedConnectionList();

    // symbol: ?ClearSocketQueryOutput@RakPeer@RakNet@@IEAAXXZ
    MCAPI void ClearSocketQueryOutput();

    // symbol: ?CloseConnectionInternal@RakPeer@RakNet@@IEAAXAEBUAddressOrGUID@2@_N1EW4PacketPriority@@@Z
    MCAPI void CloseConnectionInternal(
        struct RakNet::AddressOrGUID const& systemIdentifier,
        bool                                sendDisconnectionNotification,
        bool                                performImmediate,
        uchar                               orderingChannel,
        ::PacketPriority                    disconnectionNotificationPriority
    );

    // symbol: ?DerefAllSockets@RakPeer@RakNet@@IEAAXXZ
    MCAPI void DerefAllSockets();

    // symbol: ?DereferenceRemoteSystem@RakPeer@RakNet@@IEAAXAEBUSystemAddress@2@@Z
    MCAPI void DereferenceRemoteSystem(struct RakNet::SystemAddress const& sa);

    // symbol: ?FillIPList@RakPeer@RakNet@@IEAAXXZ
    MCAPI void FillIPList();

    // symbol: ?GenerateGUID@RakPeer@RakNet@@IEAAXXZ
    MCAPI void GenerateGUID();

    // symbol: ?GetIndexFromSystemAddress@RakPeer@RakNet@@IEBAHUSystemAddress@2@_N@Z
    MCAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress systemAddress, bool calledFromNetworkThread) const;

    // symbol: ?GetRakNetSocketFromUserConnectionSocketIndex@RakPeer@RakNet@@IEBAII@Z
    MCAPI uint GetRakNetSocketFromUserConnectionSocketIndex(uint userIndex) const;

    // symbol: ?GetRemoteSystem@RakPeer@RakNet@@IEBAPEAURemoteSystemStruct@12@UAddressOrGUID@2@_N1@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystem(struct RakNet::AddressOrGUID systemIdentifier, bool calledFromNetworkThread, bool onlyActive) const;

    // symbol: ?GetRemoteSystemFromGUID@RakPeer@RakNet@@IEBAPEAURemoteSystemStruct@12@URakNetGUID@2@_N@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystemFromGUID(struct RakNet::RakNetGUID guid, bool onlyActive) const;

    // symbol: ?GetRemoteSystemFromSystemAddress@RakPeer@RakNet@@IEBAPEAURemoteSystemStruct@12@USystemAddress@2@_N1@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystemFromSystemAddress(
        struct RakNet::SystemAddress systemAddress,
        bool                         calledFromNetworkThread,
        bool                         onlyActive
    ) const;

    // symbol: ?GetRemoteSystemIndex@RakPeer@RakNet@@IEBAIAEBUSystemAddress@2@@Z
    MCAPI uint GetRemoteSystemIndex(struct RakNet::SystemAddress const& sa) const;

    // symbol: ?NotifyAndFlagForShutdown@RakPeer@RakNet@@IEAAXUSystemAddress@2@_NEW4PacketPriority@@@Z
    MCAPI void NotifyAndFlagForShutdown(
        struct RakNet::SystemAddress systemAddress,
        bool                         performImmediate,
        uchar                        orderingChannel,
        ::PacketPriority             disconnectionNotificationPriority
    );

    // symbol: ?OnConnectedPong@RakPeer@RakNet@@IEAAX_K0PEAURemoteSystemStruct@12@@Z
    MCAPI void
    OnConnectedPong(uint64 sendPingTime, uint64 sendPongTime, struct RakNet::RakPeer::RemoteSystemStruct* remoteSystem);

    // symbol: ?OnConnectionRequest@RakPeer@RakNet@@IEAAXPEAURemoteSystemStruct@12@_K@Z
    MCAPI void OnConnectionRequest(struct RakNet::RakPeer::RemoteSystemStruct* remoteSystem, uint64 incomingTimestamp);

    // symbol: ?ParseConnectionRequestPacket@RakPeer@RakNet@@IEAAXPEAURemoteSystemStruct@12@AEBUSystemAddress@2@PEBDH@Z
    MCAPI void ParseConnectionRequestPacket(
        struct RakNet::RakPeer::RemoteSystemStruct* remoteSystem,
        struct RakNet::SystemAddress const&         systemAddress,
        char const*                                 data,
        int                                         byteSize
    );

    // symbol: ?PingInternal@RakPeer@RakNet@@IEAAXUSystemAddress@2@_NW4PacketReliability@@@Z
    MCAPI void
    PingInternal(struct RakNet::SystemAddress target, bool performImmediate, ::PacketReliability reliability);

    // symbol: ?ReferenceRemoteSystem@RakPeer@RakNet@@IEAAXAEBUSystemAddress@2@I@Z
    MCAPI void ReferenceRemoteSystem(struct RakNet::SystemAddress const& sa, uint remoteSystemListIndex);

    // symbol:
    // ?SendBuffered@RakPeer@RakNet@@IEAAXPEBDIW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NW4ConnectMode@RemoteSystemStruct@12@I@Z
    MCAPI void SendBuffered(
        char const*                                        data,
        uint                                               numberOfBitsToSend,
        ::PacketPriority                                   priority,
        ::PacketReliability                                reliability,
        char                                               orderingChannel,
        struct RakNet::AddressOrGUID                       systemIdentifier,
        bool                                               broadcast,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        uint                                               receipt
    );

    // symbol:
    // ?SendBufferedList@RakPeer@RakNet@@IEAAXPEAPEBDPEBHHW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_NW4ConnectMode@RemoteSystemStruct@12@I@Z
    MCAPI void SendBufferedList(
        char const**                                       data,
        int const*                                         lengths,
        int                                                numParameters,
        ::PacketPriority                                   priority,
        ::PacketReliability                                reliability,
        char                                               orderingChannel,
        struct RakNet::AddressOrGUID                       systemIdentifier,
        bool                                               broadcast,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        uint                                               receipt
    );

    // symbol: ?SendConnectionRequest@RakPeer@RakNet@@IEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAUPublicKey@2@IIIII@Z
    MCAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*               host,
        ushort                    remotePort,
        char const*               passwordData,
        int                       passwordDataLength,
        struct RakNet::PublicKey* publicKey,
        uint                      connectionSocketIndex,
        uint                      extraData,
        uint                      sendConnectionAttemptCount,
        uint                      timeBetweenSendConnectionAttemptsMS,
        uint                      timeoutTime
    );

    // symbol:
    // ?SendConnectionRequest@RakPeer@RakNet@@IEAA?AW4ConnectionAttemptResult@2@PEBDG0HPEAUPublicKey@2@IIIIIPEAVRakNetSocket2@2@@Z
    MCAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*                  host,
        ushort                       remotePort,
        char const*                  passwordData,
        int                          passwordDataLength,
        struct RakNet::PublicKey*    publicKey,
        uint                         connectionSocketIndex,
        uint                         extraData,
        uint                         sendConnectionAttemptCount,
        uint                         timeBetweenSendConnectionAttemptsMS,
        uint                         timeoutTime,
        class RakNet::RakNetSocket2* socket
    );

    // symbol:
    // ?SendImmediate@RakPeer@RakNet@@IEAA_NPEADIW4PacketPriority@@W4PacketReliability@@DUAddressOrGUID@2@_N4_KI@Z
    MCAPI bool SendImmediate(
        char*                        data,
        uint                         numberOfBitsToSend,
        ::PacketPriority             priority,
        ::PacketReliability          reliability,
        char                         orderingChannel,
        struct RakNet::AddressOrGUID systemIdentifier,
        bool                         broadcast,
        bool                         useCallerDataAllocation,
        uint64                       currentTime,
        uint                         receipt
    );

    // symbol: ?ShiftIncomingTimestamp@RakPeer@RakNet@@IEBAXPEAEAEBUSystemAddress@2@@Z
    MCAPI void ShiftIncomingTimestamp(uchar* data, struct RakNet::SystemAddress const& systemAddress) const;

    // NOLINTEND
};

}; // namespace RakNet
