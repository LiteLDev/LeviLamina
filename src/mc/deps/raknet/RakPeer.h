#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/deps/raknet/SystemAddress.h"

// auto generated inclusion list
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/data_structures/List.h"

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
        MCAPI RemoteSystemStruct();

        MCAPI ~RemoteSystemStruct();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$();

        MCAPI void dtor$();

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
    MCVAPI void AddToBanList(char const* IP, uint milliseconds);

    MCVAPI void AddToSecurityExceptionList(char const* ip);

    MCVAPI bool
    AdvertiseSystem(char const* host, ushort remotePort, char const* data, int dataLength, uint connectionSocketIndex);

    MCVAPI struct RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const* file, uint line);

    MCVAPI struct RakNet::Packet* AllocatePacket(uint dataSize);

    MCVAPI void AllowConnectionResponseIPMigration(bool allow);

    MCVAPI void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance);

    MCVAPI void AttachPlugin(class RakNet::PluginInterface2* plugin);

    MCVAPI void CancelConnectionAttempt(struct RakNet::SystemAddress target);

    MCVAPI void ChangeSystemAddress(struct RakNet::RakNetGUID guid, struct RakNet::SystemAddress const& systemAddress);

    MCVAPI void ClearBanList();

    MCVAPI void CloseConnection(
        struct RakNet::AddressOrGUID target,
        bool                         sendDisconnectionNotification,
        uchar                        orderingChannel,
        ::PacketPriority             disconnectionNotificationPriority
    );

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

    MCVAPI void DeallocRNS2RecvStruct(struct RakNet::RNS2RecvStruct* s, char const* file, uint line);

    MCVAPI void DeallocatePacket(struct RakNet::Packet* packet);

    MCVAPI void DetachPlugin(class RakNet::PluginInterface2* plugin);

    MCVAPI void DisableSecurity();

    MCVAPI int GetAveragePing(struct RakNet::AddressOrGUID systemIdentifier);

    MCVAPI bool GetClientPublicKeyFromSystemAddress(struct RakNet::SystemAddress input, char* client_public_key) const;

    MCVAPI uint64 GetClockDifferential(struct RakNet::AddressOrGUID systemIdentifier);

    MCVAPI bool GetConnectionList(struct RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCVAPI ::RakNet::ConnectionState GetConnectionState(struct RakNet::AddressOrGUID systemIdentifier);

    MCVAPI struct RakNet::SystemAddress GetExternalID(struct RakNet::SystemAddress target) const;

    MCVAPI struct RakNet::RakNetGUID GetGUIDFromIndex(uint index);

    MCVAPI struct RakNet::RakNetGUID const& GetGuidFromSystemAddress(struct RakNet::SystemAddress input) const;

    MCVAPI void GetIncomingPassword(char* passwordData, int* passwordDataLength);

    MCVAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress systemAddress) const;

    MCVAPI struct RakNet::SystemAddress GetInternalID(struct RakNet::SystemAddress systemAddress, int index) const;

    MCVAPI int GetLastPing(struct RakNet::AddressOrGUID systemIdentifier) const;

    MCVAPI struct RakNet::NetworkAdapter& GetLocalAdapter(uint index);

    MCVAPI char const* GetLocalIP(uint index);

    MCVAPI int GetLowestPing(struct RakNet::AddressOrGUID systemIdentifier) const;

    MCVAPI int GetMTUSize(struct RakNet::SystemAddress target) const;

    MCVAPI uint GetMaximumIncomingConnections() const;

    MCVAPI uint GetMaximumNumberOfPeers() const;

    MCVAPI struct RakNet::SystemAddress GetMyBoundAddress(int socketIndex);

    MCVAPI struct RakNet::RakNetGUID const GetMyGUID() const;

    MCVAPI uint GetNextSendReceipt();

    MCVAPI uint GetNumberOfAdapters();

    MCVAPI uint GetNumberOfAddresses();

    MCVAPI void GetOfflinePingResponse(char** data, uint* length);

    MCVAPI uint GetReceiveBufferSize();

    MCVAPI class RakNet::RakNetSocket2* GetSocket(struct RakNet::SystemAddress target);

    MCVAPI void GetSockets(class DataStructures::List<class RakNet::RakNetSocket2*>& sockets);

    MCVAPI int GetSplitMessageProgressInterval() const;

    MCVAPI bool GetStatistics(uint index, struct RakNet::RakNetStatistics* rns);

    MCVAPI struct RakNet::RakNetStatistics*
    GetStatistics(struct RakNet::SystemAddress systemAddress, struct RakNet::RakNetStatistics* rns);

    MCVAPI void GetStatisticsList(
        class DataStructures::List<struct RakNet::SystemAddress>&    addresses,
        class DataStructures::List<struct RakNet::RakNetGUID>&       guids,
        class DataStructures::List<struct RakNet::RakNetStatistics>& statistics
    );

    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID input) const;

    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromIndex(uint index);

    MCVAPI void GetSystemList(
        class DataStructures::List<struct RakNet::SystemAddress>& addresses,
        class DataStructures::List<struct RakNet::RakNetGUID>&    guids
    ) const;

    MCVAPI uint GetTimeoutTime(struct RakNet::SystemAddress target);

    MCVAPI uint IncrementNextSendReceipt();

    MCVAPI void InitializeConfiguration(std::unique_ptr<class RakNet::ShadowBanList> banList);

    MCVAPI bool InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey);

    MCVAPI bool IsActive() const;

    MCVAPI bool IsBanned(char const* IP);

    MCVAPI bool IsInSecurityExceptionList(char const* ip);

    MCVAPI bool IsLocalIP(char const* ip);

    MCVAPI bool IsNetworkSimulatorActive();

    MCVAPI ushort NumberOfConnections() const;

    MCVAPI void OnRNS2Recv(struct RakNet::RNS2RecvStruct* recvStruct);

    MCVAPI void Ping(struct RakNet::SystemAddress target);

    MCVAPI bool
    Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex);

    MCVAPI void PushBackPacket(struct RakNet::Packet* packet, bool pushAtHead);

    MCVAPI struct RakNet::Packet* Receive();

    MCVAPI void ReleaseSockets(class DataStructures::List<class RakNet::RakNetSocket2*>& sockets);

    MCVAPI void RemoveFromBanList(char const* IP);

    MCVAPI void RemoveFromSecurityExceptionList(char const* ip);

    MCVAPI bool RunUpdateCycle(class RakNet::BitStream& updateBitStream);

    MCVAPI uint Send(
        class RakNet::BitStream const* bitStream,
        ::PacketPriority               priority,
        ::PacketReliability            reliability,
        char                           orderingChannel,
        struct RakNet::AddressOrGUID   systemIdentifier,
        bool                           broadcast,
        uint                           forceReceiptNumber
    );

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

    MCVAPI void SendLoopback(char const* data, int length);

    MCVAPI void SendNatTraversalMessage(struct RakNet::SystemAddress target);

    MCVAPI bool
    SendOutOfBand(char const* host, ushort remotePort, char const* data, uint dataLength, uint connectionSocketIndex);

    MCVAPI void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex);

    MCVAPI bool SetApplicationHandshakeCompleted(struct RakNet::AddressOrGUID systemIdentifier);

    MCVAPI void SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(struct RakNet::RNS2RecvStruct*));

    MCVAPI void SetIncomingPassword(char const* passwordData, int passwordDataLength);

    MCVAPI void SetInternalID(struct RakNet::SystemAddress systemAddress, int index);

    MCVAPI void SetLimitIPConnectionFrequency(bool b);

    MCVAPI void SetMaximumIncomingConnections(ushort numberAllowed);

    MCVAPI void SetOccasionalPing(bool doPing);

    MCVAPI void SetOfflinePingResponse(char const* data, uint length);

    MCVAPI void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond);

    MCVAPI void SetSplitMessageProgressInterval(int interval);

    MCVAPI void SetTimeoutTime(uint timeMS, struct RakNet::SystemAddress target);

    MCVAPI void SetUnreliableTimeout(uint timeoutMS);

    MCVAPI void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(class RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    );

    MCVAPI void Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority);

    MCVAPI ::RakNet::StartupResult Startup(
        uint                             maxConnections,
        struct RakNet::SocketDescriptor* socketDescriptors,
        uint                             socketDescriptorCount,
        int                              threadPriority
    );

    MCVAPI void WriteOutOfBandHeader(class RakNet::BitStream* bitStream);

    MCVAPI void resetMyGUID();

    MCVAPI ~RakPeer();

    MCAPI RakPeer();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void AddPacketToProducer(struct RakNet::Packet* p);

    MCAPI struct RakNet::Packet* AllocPacket(uint dataSize, char const* file, uint line);

    MCAPI struct RakNet::Packet* AllocPacket(uint dataSize, uchar* data, char const* file, uint line);

    MCAPI bool AllowIncomingConnections() const;

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

    MCAPI void CallPluginCallbacks(
        class DataStructures::List<class RakNet::PluginInterface2*>& pluginList,
        struct RakNet::Packet*                                       packet
    );

    MCAPI void ClearBufferedCommands();

    MCAPI void ClearBufferedPackets();

    MCAPI void ClearRequestedConnectionList();

    MCAPI void ClearSocketQueryOutput();

    MCAPI void CloseConnectionInternal(
        struct RakNet::AddressOrGUID const& systemIdentifier,
        bool                                sendDisconnectionNotification,
        bool                                performImmediate,
        uchar                               orderingChannel,
        ::PacketPriority                    disconnectionNotificationPriority
    );

    MCAPI void DerefAllSockets();

    MCAPI void DereferenceRemoteSystem(struct RakNet::SystemAddress const& sa);

    MCAPI void FillIPList();

    MCAPI void GenerateGUID();

    MCAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress systemAddress, bool calledFromNetworkThread) const;

    MCAPI uint GetRakNetSocketFromUserConnectionSocketIndex(uint userIndex) const;

    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystem(struct RakNet::AddressOrGUID systemIdentifier, bool calledFromNetworkThread, bool onlyActive) const;

    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystemFromGUID(struct RakNet::RakNetGUID guid, bool onlyActive) const;

    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystemFromSystemAddress(
        struct RakNet::SystemAddress systemAddress,
        bool                         calledFromNetworkThread,
        bool                         onlyActive
    ) const;

    MCAPI uint GetRemoteSystemIndex(struct RakNet::SystemAddress const& sa) const;

    MCAPI void NotifyAndFlagForShutdown(
        struct RakNet::SystemAddress systemAddress,
        bool                         performImmediate,
        uchar                        orderingChannel,
        ::PacketPriority             disconnectionNotificationPriority
    );

    MCAPI void
    OnConnectedPong(uint64 sendPingTime, uint64 sendPongTime, struct RakNet::RakPeer::RemoteSystemStruct* remoteSystem);

    MCAPI void OnConnectionRequest(struct RakNet::RakPeer::RemoteSystemStruct* remoteSystem, uint64 incomingTimestamp);

    MCAPI void ParseConnectionRequestPacket(
        struct RakNet::RakPeer::RemoteSystemStruct* remoteSystem,
        struct RakNet::SystemAddress const&         systemAddress,
        char const*                                 data,
        int                                         byteSize
    );

    MCAPI void
    PingInternal(struct RakNet::SystemAddress target, bool performImmediate, ::PacketReliability reliability);

    MCAPI void ReferenceRemoteSystem(struct RakNet::SystemAddress const& sa, uint remoteSystemListIndex);

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

    MCAPI void ShiftIncomingTimestamp(uchar* data, struct RakNet::SystemAddress const& systemAddress) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForRakNetRNS2EventHandler();

    MCAPI static void** $vftableForRakNetRakPeerInterface();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI void AddToBanList$(char const* IP, uint milliseconds);

    MCAPI void AddToSecurityExceptionList$(char const* ip);

    MCAPI bool
    AdvertiseSystem$(char const* host, ushort remotePort, char const* data, int dataLength, uint connectionSocketIndex);

    MCAPI struct RakNet::RNS2RecvStruct* AllocRNS2RecvStruct$(char const* file, uint line);

    MCAPI struct RakNet::Packet* AllocatePacket$(uint dataSize);

    MCAPI void AllowConnectionResponseIPMigration$(bool allow);

    MCAPI void ApplyNetworkSimulator$(float packetloss, ushort minExtraPing, ushort extraPingVariance);

    MCAPI void AttachPlugin$(class RakNet::PluginInterface2* plugin);

    MCAPI void CancelConnectionAttempt$(struct RakNet::SystemAddress target);

    MCAPI void ChangeSystemAddress$(struct RakNet::RakNetGUID guid, struct RakNet::SystemAddress const& systemAddress);

    MCAPI void ClearBanList$();

    MCAPI void CloseConnection$(
        struct RakNet::AddressOrGUID target,
        bool                         sendDisconnectionNotification,
        uchar                        orderingChannel,
        ::PacketPriority             disconnectionNotificationPriority
    );

    MCAPI ::RakNet::ConnectionAttemptResult Connect$(
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

    MCAPI ::RakNet::ConnectionAttemptResult ConnectWithSocket$(
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

    MCAPI void DeallocRNS2RecvStruct$(struct RakNet::RNS2RecvStruct* s, char const* file, uint line);

    MCAPI void DeallocatePacket$(struct RakNet::Packet* packet);

    MCAPI void DetachPlugin$(class RakNet::PluginInterface2* plugin);

    MCAPI void DisableSecurity$();

    MCAPI int GetAveragePing$(struct RakNet::AddressOrGUID systemIdentifier);

    MCAPI bool GetClientPublicKeyFromSystemAddress$(struct RakNet::SystemAddress input, char* client_public_key) const;

    MCAPI uint64 GetClockDifferential$(struct RakNet::AddressOrGUID systemIdentifier);

    MCAPI bool GetConnectionList$(struct RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCAPI ::RakNet::ConnectionState GetConnectionState$(struct RakNet::AddressOrGUID systemIdentifier);

    MCAPI struct RakNet::SystemAddress GetExternalID$(struct RakNet::SystemAddress target) const;

    MCAPI struct RakNet::RakNetGUID GetGUIDFromIndex$(uint index);

    MCAPI struct RakNet::RakNetGUID const& GetGuidFromSystemAddress$(struct RakNet::SystemAddress input) const;

    MCAPI void GetIncomingPassword$(char* passwordData, int* passwordDataLength);

    MCAPI int GetIndexFromSystemAddress$(struct RakNet::SystemAddress systemAddress) const;

    MCAPI struct RakNet::SystemAddress GetInternalID$(struct RakNet::SystemAddress systemAddress, int index) const;

    MCAPI int GetLastPing$(struct RakNet::AddressOrGUID systemIdentifier) const;

    MCAPI struct RakNet::NetworkAdapter& GetLocalAdapter$(uint index);

    MCAPI char const* GetLocalIP$(uint index);

    MCAPI int GetLowestPing$(struct RakNet::AddressOrGUID systemIdentifier) const;

    MCAPI int GetMTUSize$(struct RakNet::SystemAddress target) const;

    MCAPI uint GetMaximumIncomingConnections$() const;

    MCAPI uint GetMaximumNumberOfPeers$() const;

    MCAPI struct RakNet::SystemAddress GetMyBoundAddress$(int socketIndex);

    MCAPI struct RakNet::RakNetGUID const GetMyGUID$() const;

    MCAPI uint GetNextSendReceipt$();

    MCAPI uint GetNumberOfAdapters$();

    MCAPI uint GetNumberOfAddresses$();

    MCAPI void GetOfflinePingResponse$(char** data, uint* length);

    MCAPI uint GetReceiveBufferSize$();

    MCAPI class RakNet::RakNetSocket2* GetSocket$(struct RakNet::SystemAddress target);

    MCAPI void GetSockets$(class DataStructures::List<class RakNet::RakNetSocket2*>& sockets);

    MCAPI int GetSplitMessageProgressInterval$() const;

    MCAPI bool GetStatistics$(uint index, struct RakNet::RakNetStatistics* rns);

    MCAPI struct RakNet::RakNetStatistics*
    GetStatistics$(struct RakNet::SystemAddress systemAddress, struct RakNet::RakNetStatistics* rns);

    MCAPI void GetStatisticsList$(
        class DataStructures::List<struct RakNet::SystemAddress>&    addresses,
        class DataStructures::List<struct RakNet::RakNetGUID>&       guids,
        class DataStructures::List<struct RakNet::RakNetStatistics>& statistics
    );

    MCAPI struct RakNet::SystemAddress GetSystemAddressFromGuid$(struct RakNet::RakNetGUID input) const;

    MCAPI struct RakNet::SystemAddress GetSystemAddressFromIndex$(uint index);

    MCAPI void GetSystemList$(
        class DataStructures::List<struct RakNet::SystemAddress>& addresses,
        class DataStructures::List<struct RakNet::RakNetGUID>&    guids
    ) const;

    MCAPI uint GetTimeoutTime$(struct RakNet::SystemAddress target);

    MCAPI uint IncrementNextSendReceipt$();

    MCAPI void InitializeConfiguration$(std::unique_ptr<class RakNet::ShadowBanList> banList);

    MCAPI bool InitializeSecurity$(char const* public_key, char const* private_key, bool bRequireClientKey);

    MCAPI bool IsActive$() const;

    MCAPI bool IsBanned$(char const* IP);

    MCAPI bool IsInSecurityExceptionList$(char const* ip);

    MCAPI bool IsLocalIP$(char const* ip);

    MCAPI bool IsNetworkSimulatorActive$();

    MCAPI ushort NumberOfConnections$() const;

    MCAPI void OnRNS2Recv$(struct RakNet::RNS2RecvStruct* recvStruct);

    MCAPI void Ping$(struct RakNet::SystemAddress target);

    MCAPI bool
    Ping$(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex);

    MCAPI void PushBackPacket$(struct RakNet::Packet* packet, bool pushAtHead);

    MCAPI struct RakNet::Packet* Receive$();

    MCAPI void ReleaseSockets$(class DataStructures::List<class RakNet::RakNetSocket2*>& sockets);

    MCAPI void RemoveFromBanList$(char const* IP);

    MCAPI void RemoveFromSecurityExceptionList$(char const* ip);

    MCAPI bool RunUpdateCycle$(class RakNet::BitStream& updateBitStream);

    MCAPI uint Send$(
        class RakNet::BitStream const* bitStream,
        ::PacketPriority               priority,
        ::PacketReliability            reliability,
        char                           orderingChannel,
        struct RakNet::AddressOrGUID   systemIdentifier,
        bool                           broadcast,
        uint                           forceReceiptNumber
    );

    MCAPI uint Send$(
        char const*                  data,
        int                          length,
        ::PacketPriority             priority,
        ::PacketReliability          reliability,
        char                         orderingChannel,
        struct RakNet::AddressOrGUID systemIdentifier,
        bool                         broadcast,
        uint                         forceReceiptNumber
    );

    MCAPI uint SendList$(
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

    MCAPI void SendLoopback$(char const* data, int length);

    MCAPI void SendNatTraversalMessage$(struct RakNet::SystemAddress target);

    MCAPI bool
    SendOutOfBand$(char const* host, ushort remotePort, char const* data, uint dataLength, uint connectionSocketIndex);

    MCAPI void SendTTL$(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex);

    MCAPI bool SetApplicationHandshakeCompleted$(struct RakNet::AddressOrGUID systemIdentifier);

    MCAPI void SetIncomingDatagramEventHandler$(bool (*_incomingDatagramEventHandler)(struct RakNet::RNS2RecvStruct*));

    MCAPI void SetIncomingPassword$(char const* passwordData, int passwordDataLength);

    MCAPI void SetInternalID$(struct RakNet::SystemAddress systemAddress, int index);

    MCAPI void SetLimitIPConnectionFrequency$(bool b);

    MCAPI void SetMaximumIncomingConnections$(ushort numberAllowed);

    MCAPI void SetOccasionalPing$(bool doPing);

    MCAPI void SetOfflinePingResponse$(char const* data, uint length);

    MCAPI void SetPerConnectionOutgoingBandwidthLimit$(uint maxBitsPerSecond);

    MCAPI void SetSplitMessageProgressInterval$(int interval);

    MCAPI void SetTimeoutTime$(uint timeMS, struct RakNet::SystemAddress target);

    MCAPI void SetUnreliableTimeout$(uint timeoutMS);

    MCAPI void SetUserUpdateThread$(
        void (*_userUpdateThreadPtr)(class RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    );

    MCAPI void Shutdown$(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority);

    MCAPI ::RakNet::StartupResult Startup$(
        uint                             maxConnections,
        struct RakNet::SocketDescriptor* socketDescriptors,
        uint                             socketDescriptorCount,
        int                              threadPriority
    );

    MCAPI void WriteOutOfBandHeader$(class RakNet::BitStream* bitStream);

    MCAPI void resetMyGUID$();

    // NOLINTEND
};

}; // namespace RakNet
