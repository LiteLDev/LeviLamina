#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

class RakPeerInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakPeerInterface();

    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList) = 0;

    virtual ::RakNet::StartupResult Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    ) = 0;

    virtual bool InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey) = 0;

    virtual void DisableSecurity() = 0;

    virtual void AddToSecurityExceptionList(char const* ip) = 0;

    virtual void RemoveFromSecurityExceptionList(char const* ip) = 0;

    virtual bool IsInSecurityExceptionList(char const* ip) = 0;

    virtual void SetMaximumIncomingConnections(ushort numberAllowed) = 0;

    virtual uint GetMaximumIncomingConnections() const = 0;

    virtual ushort NumberOfConnections() const = 0;

    virtual void SetIncomingPassword(char const* passwordData, int passwordDataLength) = 0;

    virtual void GetIncomingPassword(char* passwordData, int* passwordDataLength) = 0;

    virtual ::RakNet::ConnectionAttemptResult Connect(
        char const*          host,
        ushort               remotePort,
        char const*          passwordData,
        int                  passwordDataLength,
        ::RakNet::PublicKey* publicKey,
        uint                 connectionSocketIndex,
        uint                 sendConnectionAttemptCount,
        uint                 timeBetweenSendConnectionAttemptsMS,
        uint                 timeoutTime
    ) = 0;

    virtual ::RakNet::ConnectionAttemptResult ConnectWithSocket(
        char const*              host,
        ushort                   remotePort,
        char const*              passwordData,
        int                      passwordDataLength,
        ::RakNet::RakNetSocket2* socket,
        ::RakNet::PublicKey*     publicKey,
        uint                     sendConnectionAttemptCount,
        uint                     timeBetweenSendConnectionAttemptsMS,
        uint                     timeoutTime
    ) = 0;

    virtual void
    Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority) = 0;

    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier) = 0;

    virtual bool IsActive() const = 0;

    virtual bool GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const = 0;

    virtual uint GetNextSendReceipt() = 0;

    virtual uint IncrementNextSendReceipt() = 0;

    virtual uint Send(
        char const*                   data,
        int const                     length,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) = 0;

    virtual uint Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) = 0;

    virtual void SendLoopback(char const* data, int const length) = 0;

    virtual uint SendList(
        char const**                  data,
        int const*                    lengths,
        int const                     numParameters,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) = 0;

    virtual ::RakNet::Packet* Receive() = 0;

    virtual void DeallocatePacket(::RakNet::Packet* packet) = 0;

    virtual uint GetMaximumNumberOfPeers() const = 0;

    virtual void CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    ) = 0;

    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier) = 0;

    virtual void CancelConnectionAttempt(::RakNet::SystemAddress const target) = 0;

    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const = 0;

    virtual ::RakNet::SystemAddress GetSystemAddressFromIndex(uint index) = 0;

    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint index) = 0;

    virtual void GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const = 0;

    virtual void AddToBanList(char const* IP, uint milliseconds) = 0;

    virtual void RemoveFromBanList(char const* IP) = 0;

    virtual void ClearBanList() = 0;

    virtual bool IsBanned(char const* IP) = 0;

    virtual void SetLimitIPConnectionFrequency(bool b) = 0;

    virtual void Ping(::RakNet::SystemAddress const target) = 0;

    virtual bool
    Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex) = 0;

    virtual void SendNatTraversalMessage(::RakNet::SystemAddress const target) = 0;

    virtual int GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier) = 0;

    virtual int GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const = 0;

    virtual int GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const = 0;

    virtual void SetOccasionalPing(bool doPing) = 0;

    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier) = 0;

    virtual void SetAllowUnconnectedPings(bool unconnectedPings) = 0;

    virtual bool GetAllowUnconnectedPings() const = 0;

    virtual void SetOfflinePingResponse(char const* data, uint const length) = 0;

    virtual void GetOfflinePingResponse(char** data, uint* length) = 0;

    virtual ::RakNet::SystemAddress
    GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const = 0;

    virtual void SetInternalID(::RakNet::SystemAddress systemAddress, int index) = 0;

    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const target) const = 0;

    virtual ::RakNet::RakNetGUID const GetMyGUID() const = 0;

    virtual void resetMyGUID() = 0;

    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const socketIndex) = 0;

    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const = 0;

    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const = 0;

    virtual bool
    GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const input, char* client_public_key) const = 0;

    virtual void SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target) = 0;

    virtual uint GetTimeoutTime(::RakNet::SystemAddress const target) = 0;

    virtual int GetMTUSize(::RakNet::SystemAddress const target) const = 0;

    virtual uint GetNumberOfAdapters() = 0;

    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint index) = 0;

    virtual uint GetNumberOfAddresses() = 0;

    virtual char const* GetLocalIP(uint index) = 0;

    virtual bool IsLocalIP(char const* ip) = 0;

    virtual void AllowConnectionResponseIPMigration(bool allow) = 0;

    virtual bool AdvertiseSystem(
        char const* host,
        ushort      remotePort,
        char const* data,
        int         dataLength,
        uint        connectionSocketIndex
    ) = 0;

    virtual void SetSplitMessageProgressInterval(int interval) = 0;

    virtual int GetSplitMessageProgressInterval() const = 0;

    virtual void SetUnreliableTimeout(uint timeoutMS) = 0;

    virtual void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex) = 0;

    virtual void AttachPlugin(::RakNet::PluginInterface2* plugin) = 0;

    virtual void DetachPlugin(::RakNet::PluginInterface2* plugin) = 0;

    virtual void PushBackPacket(::RakNet::Packet* packet, bool pushAtHead) = 0;

    virtual void ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress) = 0;

    virtual ::RakNet::Packet* AllocatePacket(uint dataSize) = 0;

    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const target) = 0;

    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) = 0;

    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) = 0;

    virtual void WriteOutOfBandHeader(::RakNet::BitStream* bitStream) = 0;

    virtual void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    ) = 0;

    virtual void SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*)) = 0;

    virtual void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance) = 0;

    virtual void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond) = 0;

    virtual bool IsNetworkSimulatorActive() = 0;

    virtual ::RakNet::RakNetStatistics*
    GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns) = 0;

    virtual bool GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns) = 0;

    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    ) = 0;

    virtual uint GetReceiveBufferSize() = 0;

    virtual bool RunUpdateCycle(::RakNet::BitStream& updateBitStream) = 0;

    virtual bool SendOutOfBand(
        char const* host,
        ushort      remotePort,
        char const* data,
        uint        dataLength,
        uint        connectionSocketIndex
    ) = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 Get64BitUniqueRandomNumber();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
