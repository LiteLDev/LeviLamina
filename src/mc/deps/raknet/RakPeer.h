#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/AddressOrGUID.h"
#include "mc/deps/raknet/BitStream.h"
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/NetworkAdapter.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/PublicKeyMode.h"
#include "mc/deps/raknet/RNS2EventHandler.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/RakPeerInterface.h"
#include "mc/deps/raknet/ReliabilityLayer.h"
#include "mc/deps/raknet/SignaledEvent.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/MemoryPool.h"
#include "mc/deps/raknet/data_structures/Queue.h"
#include "mc/deps/raknet/data_structures/ThreadsafeAllocatingQueue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakString; }
namespace RakNet { class ShadowBanList; }
namespace RakNet { struct Packet; }
namespace RakNet { struct PublicKey; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct RemoteSystemIndex; }
namespace RakNet { struct SocketDescriptor; }
// clang-format on

namespace RakNet {

class RakPeer : public ::RakNet::RakPeerInterface, public ::RakNet::RNS2EventHandler {
public:
    // RakPeer inner types declare
    // clang-format off
    struct BanStruct;
    struct PingAndClockDifferential;
    struct RequestedConnectionStruct;
    struct SocketQueryOutput;
    struct RemoteSystemStruct;
    struct BufferedCommandStruct;
    // clang-format on

    // RakPeer inner types define
    enum : int {
        RequestedConnectionListMutex = 0,
        OfflinePingResponseMutex     = 1,
        NumberOfRakpeerMutexes       = 2,
    };

    struct BanStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char*> IP;
        ::ll::TypedStorage<4, 4, uint>  timeout;
        // NOLINTEND
    };

    struct PingAndClockDifferential {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> pingTime;
        ::ll::TypedStorage<8, 8, uint64> clockDifferential;
        // NOLINTEND
    };

    struct RequestedConnectionStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> systemAddress;
        ::ll::TypedStorage<8, 8, uint64>                    nextRequestTime;
        ::ll::TypedStorage<1, 1, uchar>                     requestsMade;
        ::ll::TypedStorage<8, 8, char*>                     data;
        ::ll::TypedStorage<2, 2, ushort>                    dataLength;
        ::ll::TypedStorage<1, 256, char[256]>               outgoingPassword;
        ::ll::TypedStorage<1, 1, uchar>                     outgoingPasswordLength;
        ::ll::TypedStorage<4, 4, uint>                      socketIndex;
        ::ll::TypedStorage<4, 4, uint>                      extraData;
        ::ll::TypedStorage<4, 4, uint>                      sendConnectionAttemptCount;
        ::ll::TypedStorage<4, 4, uint>                      timeBetweenSendConnectionAttemptsMS;
        ::ll::TypedStorage<4, 4, uint>                      timeoutTime;
        ::ll::TypedStorage<4, 4, ::RakNet::PublicKeyMode>   publicKeyMode;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>  socket;
        enum : int {
            Connect = 1,
        } actionToTake;
        // NOLINTEND
    };

    struct SocketQueryOutput {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakNetSocket2*>> sockets;
        // NOLINTEND
    };

    struct RemoteSystemStruct {
    public:
        // RemoteSystemStruct inner types define
        enum class ConnectMode : int {
            NoAction                  = 0,
            DisconnectAsap            = 1,
            DisconnectAsapSilently    = 2,
            DisconnectOnNoAck         = 3,
            RequestedConnection       = 4,
            HandlingConnectionRequest = 5,
            UnverifiedSender          = 6,
            Connected                 = 7,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                               isActive;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                          systemAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                          myExternalSystemAddress;
        ::ll::TypedStorage<8, 2720, ::RakNet::SystemAddress[20]>                     theirInternalSystemAddress;
        ::ll::TypedStorage<8, 6704, ::RakNet::ReliabilityLayer>                      reliabilityLayer;
        ::ll::TypedStorage<1, 1, bool>                                               weInitiatedTheConnection;
        ::ll::TypedStorage<8, 80, ::RakNet::RakPeer::PingAndClockDifferential[5]>    pingAndClockDifferential;
        ::ll::TypedStorage<8, 8, uint64>                                             pingAndClockDifferentialWriteIndex;
        ::ll::TypedStorage<2, 2, ushort>                                             lowestPing;
        ::ll::TypedStorage<8, 8, uint64>                                             nextPingTime;
        ::ll::TypedStorage<8, 8, uint64>                                             lastReliableSend;
        ::ll::TypedStorage<8, 8, uint64>                                             connectionTime;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                              guid;
        ::ll::TypedStorage<4, 4, int>                                                MTUSize;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>                           rakNetSocket;
        ::ll::TypedStorage<2, 2, ushort>                                             remoteSystemIndex;
        ::ll::TypedStorage<4, 4, ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode> connectMode;
        ::ll::TypedStorage<1, 1, bool>                                               applicationHandshakeCompleted;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RemoteSystemStruct();

        MCAPI ~RemoteSystemStruct();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct BufferedCommandStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                                               numberOfBitsToSend;
        ::ll::TypedStorage<4, 4, ::PacketPriority>                                   priority;
        ::ll::TypedStorage<4, 4, ::PacketReliability>                                reliability;
        ::ll::TypedStorage<1, 1, char>                                               orderingChannel;
        ::ll::TypedStorage<8, 152, ::RakNet::AddressOrGUID>                          systemIdentifier;
        ::ll::TypedStorage<1, 1, bool>                                               broadcast;
        ::ll::TypedStorage<4, 4, ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode> connectionMode;
        ::ll::TypedStorage<8, 8, uint64>                                             networkID;
        ::ll::TypedStorage<1, 1, bool>                                               blockingCommand;
        ::ll::TypedStorage<8, 8, char*>                                              data;
        ::ll::TypedStorage<1, 1, bool>                                               haveRakNetCloseSocket;
        ::ll::TypedStorage<4, 4, uint>                                               connectionSocketIndex;
        ::ll::TypedStorage<2, 2, ushort>                                             remotePortRakNetWasStartedOn_PS3;
        ::ll::TypedStorage<4, 4, uint>                                               extraSocketOptions;
        ::ll::TypedStorage<8, 8, ::RakNet::RakNetSocket2*>                           socket;
        ::ll::TypedStorage<2, 2, ushort>                                             port;
        ::ll::TypedStorage<4, 4, uint>                                               receipt;
        enum : int {
            Send                = 0,
            CloseConnection     = 1,
            GetSocket           = 2,
            ChangeSystemAddress = 3,
            DoNothing           = 4,
        } command;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool volatile>                                              endThreads;
    ::ll::TypedStorage<1, 1, bool volatile>                                              isMainLoopThreadActive;
    ::ll::TypedStorage<1, 1, bool>                                                       occasionalPing;
    ::ll::TypedStorage<4, 4, uint>                                                       maximumNumberOfPeers;
    ::ll::TypedStorage<4, 4, uint>                                                       maximumIncomingConnections;
    ::ll::TypedStorage<8, 288, ::RakNet::BitStream>                                      offlinePingResponse;
    ::ll::TypedStorage<1, 256, char[256]>                                                incomingPassword;
    ::ll::TypedStorage<1, 1, uchar>                                                      incomingPasswordLength;
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeer::RemoteSystemStruct*>                     remoteSystemList;
    ::ll::TypedStorage<8, 8, ::RakNet::RakPeer::RemoteSystemStruct**>                    activeSystemList;
    ::ll::TypedStorage<4, 4, uint>                                                       activeSystemListSize;
    ::ll::TypedStorage<8, 8, ::RakNet::RemoteSystemIndex**>                              remoteSystemLookup;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::RemoteSystemIndex>> remoteSystemIndexPool;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RakNet::ShadowBanList>>                 shadowBanList;
    ::ll::TypedStorage<8, 80, ::RakNet::SimpleMutex[2]>                                  rakPeerMutexes;
    ::ll::TypedStorage<1, 1, bool>                                                       updateCycleIsRunning;
    ::ll::TypedStorage<4, 4, uint>                                                       bytesSentPerSecond;
    ::ll::TypedStorage<4, 4, uint>                                                       bytesReceivedPerSecond;
    ::ll::TypedStorage<4, 4, uint>                                                       validationInteger;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                     incomingQueueMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                     banListMutex;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakPeer::BanStruct*>>     banList;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::PluginInterface2*>>       pluginListTS;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::PluginInterface2*>>       pluginListNTS;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RakPeer::RequestedConnectionStruct*>>
                                                     requestedConnectionQueue;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex> requestedConnectionQueueMutex;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::RakPeer::BufferedCommandStruct>>
                                                                                  bufferedCommands;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RNS2RecvStruct*>> bufferedPacketsFreePool;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                              bufferedPacketsFreePoolMutex;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::RNS2RecvStruct*>> bufferedPacketsQueue;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                              bufferedPacketsQueueMutex;
    ::ll::TypedStorage<8, 136, ::DataStructures::ThreadsafeAllocatingQueue<::RakNet::RakPeer::SocketQueryOutput>>
                                                     socketQueryOutput;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex> securityExceptionMutex;
    ::ll::TypedStorage<4, 4, int>                    defaultMTUSize;
    ::ll::TypedStorage<1, 1, bool>                   trackFrequencyTable;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::std::shared_ptr<::RakNet::RakNetSocket2>>> socketList;
    ::ll::TypedStorage<8, 8, ::RakNet::BitStream*>                                                replyFromTargetBS;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                                           replyFromTargetPlayer;
    ::ll::TypedStorage<1, 1, bool>                                            replyFromTargetBroadcast;
    ::ll::TypedStorage<4, 4, uint>                                            defaultTimeoutTime;
    ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                           myGuid;
    ::ll::TypedStorage<4, 4, uint>                                            maxOutgoingBPS;
    ::ll::TypedStorage<1, 1, bool>                                            allowConnectionResponseIPMigration;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                       firstExternalID;
    ::ll::TypedStorage<4, 4, int>                                             splitMessageProgressInterval;
    ::ll::TypedStorage<4, 4, uint>                                            unreliableTimeout;
    ::ll::TypedStorage<8, 8, bool (*)(::RakNet::RNS2RecvStruct*)>             incomingDatagramEventHandler;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakString>>    securityExceptionList;
    ::ll::TypedStorage<8, 2856, ::RakNet::SystemAddress[21]>                  ipList;
    ::ll::TypedStorage<8, 31592, ::RakNet::NetworkAdapter[11]>                adapterList;
    ::ll::TypedStorage<1, 1, bool>                                            allowInternalRouting;
    ::ll::TypedStorage<1, 1, bool>                                            allowUnconnectedPings;
    ::ll::TypedStorage<8, 8, void (*)(::RakNet::RakPeerInterface*, void*)>    userUpdateThreadPtr;
    ::ll::TypedStorage<8, 8, void*>                                           userUpdateThreadData;
    ::ll::TypedStorage<8, 8, ::RakNet::SignaledEvent>                         quitAndDataEvents;
    ::ll::TypedStorage<1, 1, bool>                                            limitConnectionFrequencyFromTheSameIP;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                          packetAllocationPoolMutex;
    ::ll::TypedStorage<8, 32, ::DataStructures::MemoryPool<::RakNet::Packet>> packetAllocationPool;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                          packetReturnMutex;
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::Packet*>>     packetReturnQueue;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                          sendReceiptSerialMutex;
    ::ll::TypedStorage<4, 4, uint>                                            sendReceiptSerial;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakPeer() /*override*/;

    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList) /*override*/;

    virtual ::RakNet::StartupResult Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    ) /*override*/;

    virtual bool
    InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey) /*override*/;

    virtual void DisableSecurity() /*override*/;

    virtual void AddToSecurityExceptionList(char const* ip) /*override*/;

    virtual void RemoveFromSecurityExceptionList(char const* ip) /*override*/;

    virtual bool IsInSecurityExceptionList(char const* ip) /*override*/;

    virtual void SetMaximumIncomingConnections(ushort numberAllowed) /*override*/;

    virtual uint GetMaximumIncomingConnections() const /*override*/;

    virtual ushort NumberOfConnections() const /*override*/;

    virtual void SetIncomingPassword(char const* passwordData, int passwordDataLength) /*override*/;

    virtual void GetIncomingPassword(char* passwordData, int* passwordDataLength) /*override*/;

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
    ) /*override*/;

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
    ) /*override*/;

    virtual void Shutdown(
        uint             blockDuration,
        uchar            orderingChannel,
        ::PacketPriority disconnectionNotificationPriority
    ) /*override*/;

    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier) /*override*/;

    virtual bool IsActive() const /*override*/;

    virtual bool GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const /*override*/;

    virtual uint GetNextSendReceipt() /*override*/;

    virtual uint IncrementNextSendReceipt() /*override*/;

    virtual uint Send(
        char const*                   data,
        int const                     length,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) /*override*/;

    virtual uint Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) /*override*/;

    virtual void SendLoopback(char const* data, int const length) /*override*/;

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
    ) /*override*/;

    virtual ::RakNet::Packet* Receive() /*override*/;

    virtual void DeallocatePacket(::RakNet::Packet* packet) /*override*/;

    virtual uint GetMaximumNumberOfPeers() const /*override*/;

    virtual void CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    ) /*override*/;

    virtual void CancelConnectionAttempt(::RakNet::SystemAddress const target) /*override*/;

    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;

    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const /*override*/;

    virtual ::RakNet::SystemAddress GetSystemAddressFromIndex(uint index) /*override*/;

    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint index) /*override*/;

    virtual void GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const /*override*/;

    virtual void AddToBanList(char const* IP, uint milliseconds) /*override*/;

    virtual void RemoveFromBanList(char const* IP) /*override*/;

    virtual void ClearBanList() /*override*/;

    virtual bool IsBanned(char const* IP) /*override*/;

    virtual void SetLimitIPConnectionFrequency(bool b) /*override*/;

    virtual void Ping(::RakNet::SystemAddress const target) /*override*/;

    virtual bool Ping(
        char const* host,
        ushort      remotePort,
        bool        onlyReplyOnAcceptingConnections,
        uint        connectionSocketIndex
    ) /*override*/;

    virtual void SendNatTraversalMessage(::RakNet::SystemAddress const target) /*override*/;

    virtual int GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;

    virtual int GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const /*override*/;

    virtual int GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const /*override*/;

    virtual void SetOccasionalPing(bool doPing) /*override*/;

    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;

    virtual void SetOfflinePingResponse(char const* data, uint const length) /*override*/;

    virtual void GetOfflinePingResponse(char** data, uint* length) /*override*/;

    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const
        /*override*/;

    virtual void SetInternalID(::RakNet::SystemAddress systemAddress, int index) /*override*/;

    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const target) const /*override*/;

    virtual ::RakNet::RakNetGUID const GetMyGUID() const /*override*/;

    virtual void resetMyGUID() /*override*/;

    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const socketIndex) /*override*/;

    virtual void SetAllowUnconnectedPings(bool unconnectedPings) /*override*/;

    virtual bool GetAllowUnconnectedPings() const /*override*/;

    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const
        /*override*/;

    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const /*override*/;

    virtual bool GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const input, char* client_public_key) const
        /*override*/;

    virtual void SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target) /*override*/;

    virtual uint GetTimeoutTime(::RakNet::SystemAddress const target) /*override*/;

    virtual int GetMTUSize(::RakNet::SystemAddress const target) const /*override*/;

    virtual uint GetNumberOfAdapters() /*override*/;

    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint index) /*override*/;

    virtual uint GetNumberOfAddresses() /*override*/;

    virtual char const* GetLocalIP(uint index) /*override*/;

    virtual bool IsLocalIP(char const* ip) /*override*/;

    virtual void AllowConnectionResponseIPMigration(bool allow) /*override*/;

    virtual bool AdvertiseSystem(
        char const* host,
        ushort      remotePort,
        char const* data,
        int         dataLength,
        uint        connectionSocketIndex
    ) /*override*/;

    virtual void SetSplitMessageProgressInterval(int interval) /*override*/;

    virtual int GetSplitMessageProgressInterval() const /*override*/;

    virtual void SetUnreliableTimeout(uint timeoutMS) /*override*/;

    virtual void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex) /*override*/;

    virtual void AttachPlugin(::RakNet::PluginInterface2* plugin) /*override*/;

    virtual void DetachPlugin(::RakNet::PluginInterface2* plugin) /*override*/;

    virtual void PushBackPacket(::RakNet::Packet* packet, bool pushAtHead) /*override*/;

    virtual void
    ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress) /*override*/;

    virtual ::RakNet::Packet* AllocatePacket(uint dataSize) /*override*/;

    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const target) /*override*/;

    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) /*override*/;

    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) /*override*/;

    virtual void WriteOutOfBandHeader(::RakNet::BitStream* bitStream) /*override*/;

    virtual void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    ) /*override*/;

    virtual void
    SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*)) /*override*/;

    virtual void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance) /*override*/;

    virtual void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond) /*override*/;

    virtual bool IsNetworkSimulatorActive() /*override*/;

    virtual ::RakNet::RakNetStatistics*
    GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns) /*override*/;

    virtual bool GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns) /*override*/;

    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    ) /*override*/;

    virtual uint GetReceiveBufferSize() /*override*/;

    virtual bool RunUpdateCycle(::RakNet::BitStream& updateBitStream) /*override*/;

    virtual bool SendOutOfBand(
        char const* host,
        ushort      remotePort,
        char const* data,
        uint        dataLength,
        uint        connectionSocketIndex
    ) /*override*/;

    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line) /*override*/;

    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const* file, uint line) /*override*/;

    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void AddPacketToProducer(::RakNet::Packet* p);

    MCAPI ::RakNet::Packet* AllocPacket(uint dataSize, char const* file, uint line);

    MCAPI ::RakNet::Packet* AllocPacket(uint dataSize, uchar* data, char const* file, uint line);

    MCAPI bool AllowIncomingConnections() const;

    MCAPI ::RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        ::RakNet::SystemAddress                            systemAddress,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        ::RakNet::RakNetSocket2*                           incomingRakNetSocket,
        bool*                                              thisIPConnectedRecently,
        ::RakNet::SystemAddress                            bindingAddress,
        int                                                incomingMTU,
        ::RakNet::RakNetGUID                               guid,
        bool                                               useSecurity
    );

    MCAPI void
    CallPluginCallbacks(::DataStructures::List<::RakNet::PluginInterface2*>& pluginList, ::RakNet::Packet* packet);

    MCAPI void ClearBufferedPackets();

    MCAPI void ClearRequestedConnectionList();

    MCAPI void CloseConnectionInternal(
        ::RakNet::AddressOrGUID const& systemIdentifier,
        bool                           sendDisconnectionNotification,
        bool                           performImmediate,
        uchar                          orderingChannel,
        ::PacketPriority               disconnectionNotificationPriority
    );

    MCAPI void DerefAllSockets();

    MCAPI void DereferenceRemoteSystem(::RakNet::SystemAddress const& sa);

    MCAPI void FillIPList();

    MCAPI uint64 GetBestClockDifferential(::RakNet::SystemAddress systemAddress) const;

    MCAPI int GetIndexFromSystemAddress(::RakNet::SystemAddress systemAddress, bool calledFromNetworkThread) const;

    MCAPI ::RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystem(::RakNet::AddressOrGUID systemIdentifier, bool calledFromNetworkThread, bool onlyActive) const;

    MCAPI ::RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystemFromSystemAddress(
        ::RakNet::SystemAddress systemAddress,
        bool                    calledFromNetworkThread,
        bool                    onlyActive
    ) const;

    MCAPI uint GetRemoteSystemIndex(::RakNet::SystemAddress const& sa) const;

    MCAPI bool IsLoopbackAddress(::RakNet::AddressOrGUID const& systemIdentifier, bool matchPort) const;

    MCAPI void NotifyAndFlagForShutdown(
        ::RakNet::SystemAddress systemAddress,
        bool                    performImmediate,
        uchar                   orderingChannel,
        ::PacketPriority        disconnectionNotificationPriority
    );

    MCAPI void
    OnConnectedPong(uint64 sendPingTime, uint64 sendPongTime, ::RakNet::RakPeer::RemoteSystemStruct* remoteSystem);

    MCAPI void OnConnectionRequest(::RakNet::RakPeer::RemoteSystemStruct* remoteSystem, uint64 incomingTimestamp);

    MCAPI void ParseConnectionRequestPacket(
        ::RakNet::RakPeer::RemoteSystemStruct* remoteSystem,
        ::RakNet::SystemAddress const&         systemAddress,
        char const*                            data,
        int                                    byteSize
    );

    MCAPI void PingInternal(::RakNet::SystemAddress target, bool performImmediate, ::PacketReliability reliability);

    MCAPI RakPeer();

    MCAPI void ReferenceRemoteSystem(::RakNet::SystemAddress const& sa, uint remoteSystemListIndex);

    MCAPI void SendBuffered(
        char const*                                        data,
        uint                                               numberOfBitsToSend,
        ::PacketPriority                                   priority,
        ::PacketReliability                                reliability,
        char                                               orderingChannel,
        ::RakNet::AddressOrGUID                            systemIdentifier,
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
        ::RakNet::AddressOrGUID                            systemIdentifier,
        bool                                               broadcast,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode connectionMode,
        uint                                               receipt
    );

    MCAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*          host,
        ushort               remotePort,
        char const*          passwordData,
        int                  passwordDataLength,
        ::RakNet::PublicKey* publicKey,
        uint                 connectionSocketIndex,
        uint                 extraData,
        uint                 sendConnectionAttemptCount,
        uint                 timeBetweenSendConnectionAttemptsMS,
        uint                 timeoutTime
    );

    MCAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*              host,
        ushort                   remotePort,
        char const*              passwordData,
        int                      passwordDataLength,
        ::RakNet::PublicKey*     publicKey,
        uint                     connectionSocketIndex,
        uint                     extraData,
        uint                     sendConnectionAttemptCount,
        uint                     timeBetweenSendConnectionAttemptsMS,
        uint                     timeoutTime,
        ::RakNet::RakNetSocket2* socket
    );

    MCAPI bool SendImmediate(
        char*                   data,
        uint                    numberOfBitsToSend,
        ::PacketPriority        priority,
        ::PacketReliability     reliability,
        char                    orderingChannel,
        ::RakNet::AddressOrGUID systemIdentifier,
        bool                    broadcast,
        bool                    useCallerDataAllocation,
        uint64                  currentTime,
        uint                    receipt
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList);

    MCAPI ::RakNet::StartupResult $Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    );

    MCFOLD bool $InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey);

    MCFOLD void $DisableSecurity();

    MCAPI void $AddToSecurityExceptionList(char const* ip);

    MCAPI void $RemoveFromSecurityExceptionList(char const* ip);

    MCAPI bool $IsInSecurityExceptionList(char const* ip);

    MCAPI void $SetMaximumIncomingConnections(ushort numberAllowed);

    MCFOLD uint $GetMaximumIncomingConnections() const;

    MCAPI ushort $NumberOfConnections() const;

    MCAPI void $SetIncomingPassword(char const* passwordData, int passwordDataLength);

    MCAPI void $GetIncomingPassword(char* passwordData, int* passwordDataLength);

    MCAPI ::RakNet::ConnectionAttemptResult $Connect(
        char const*          host,
        ushort               remotePort,
        char const*          passwordData,
        int                  passwordDataLength,
        ::RakNet::PublicKey* publicKey,
        uint                 connectionSocketIndex,
        uint                 sendConnectionAttemptCount,
        uint                 timeBetweenSendConnectionAttemptsMS,
        uint                 timeoutTime
    );

    MCAPI ::RakNet::ConnectionAttemptResult $ConnectWithSocket(
        char const*              host,
        ushort                   remotePort,
        char const*              passwordData,
        int                      passwordDataLength,
        ::RakNet::RakNetSocket2* socket,
        ::RakNet::PublicKey*     publicKey,
        uint                     sendConnectionAttemptCount,
        uint                     timeBetweenSendConnectionAttemptsMS,
        uint                     timeoutTime
    );

    MCAPI void $Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority);

    MCAPI bool $SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier);

    MCAPI bool $IsActive() const;

    MCAPI bool $GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCAPI uint $GetNextSendReceipt();

    MCAPI uint $IncrementNextSendReceipt();

    MCAPI uint $Send(
        char const*                   data,
        int const                     length,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    );

    MCAPI uint $Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    );

    MCAPI void $SendLoopback(char const* data, int const length);

    MCAPI uint $SendList(
        char const**                  data,
        int const*                    lengths,
        int const                     numParameters,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    );

    MCAPI ::RakNet::Packet* $Receive();

    MCAPI void $DeallocatePacket(::RakNet::Packet* packet);

    MCFOLD uint $GetMaximumNumberOfPeers() const;

    MCAPI void $CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    );

    MCAPI void $CancelConnectionAttempt(::RakNet::SystemAddress const target);

    MCAPI ::RakNet::ConnectionState $GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier);

    MCAPI int $GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const;

    MCAPI ::RakNet::SystemAddress $GetSystemAddressFromIndex(uint index);

    MCAPI ::RakNet::RakNetGUID $GetGUIDFromIndex(uint index);

    MCAPI void $GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const;

    MCAPI void $AddToBanList(char const* IP, uint milliseconds);

    MCAPI void $RemoveFromBanList(char const* IP);

    MCAPI void $ClearBanList();

    MCAPI bool $IsBanned(char const* IP);

    MCAPI void $SetLimitIPConnectionFrequency(bool b);

    MCAPI void $Ping(::RakNet::SystemAddress const target);

    MCAPI bool
    $Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex);

    MCAPI void $SendNatTraversalMessage(::RakNet::SystemAddress const target);

    MCAPI int $GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier);

    MCAPI int $GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const;

    MCAPI int $GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const;

    MCAPI void $SetOccasionalPing(bool doPing);

    MCAPI uint64 $GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier);

    MCAPI void $SetOfflinePingResponse(char const* data, uint const length);

    MCAPI void $GetOfflinePingResponse(char** data, uint* length);

    MCAPI ::RakNet::SystemAddress $GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const;

    MCAPI void $SetInternalID(::RakNet::SystemAddress systemAddress, int index);

    MCAPI ::RakNet::SystemAddress $GetExternalID(::RakNet::SystemAddress const target) const;

    MCAPI ::RakNet::RakNetGUID const $GetMyGUID() const;

    MCAPI void $resetMyGUID();

    MCAPI ::RakNet::SystemAddress $GetMyBoundAddress(int const socketIndex);

    MCAPI void $SetAllowUnconnectedPings(bool unconnectedPings);

    MCAPI bool $GetAllowUnconnectedPings() const;

    MCAPI ::RakNet::RakNetGUID const& $GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const;

    MCAPI ::RakNet::SystemAddress $GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const;

    MCFOLD bool
    $GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const input, char* client_public_key) const;

    MCAPI void $SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target);

    MCAPI uint $GetTimeoutTime(::RakNet::SystemAddress const target);

    MCAPI int $GetMTUSize(::RakNet::SystemAddress const target) const;

    MCAPI uint $GetNumberOfAdapters();

    MCAPI ::RakNet::NetworkAdapter& $GetLocalAdapter(uint index);

    MCAPI uint $GetNumberOfAddresses();

    MCAPI char const* $GetLocalIP(uint index);

    MCAPI bool $IsLocalIP(char const* ip);

    MCAPI void $AllowConnectionResponseIPMigration(bool allow);

    MCAPI bool
    $AdvertiseSystem(char const* host, ushort remotePort, char const* data, int dataLength, uint connectionSocketIndex);

    MCAPI void $SetSplitMessageProgressInterval(int interval);

    MCAPI int $GetSplitMessageProgressInterval() const;

    MCAPI void $SetUnreliableTimeout(uint timeoutMS);

    MCAPI void $SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex);

    MCAPI void $AttachPlugin(::RakNet::PluginInterface2* plugin);

    MCAPI void $DetachPlugin(::RakNet::PluginInterface2* plugin);

    MCAPI void $PushBackPacket(::RakNet::Packet* packet, bool pushAtHead);

    MCAPI void $ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress);

    MCAPI ::RakNet::Packet* $AllocatePacket(uint dataSize);

    MCAPI ::RakNet::RakNetSocket2* $GetSocket(::RakNet::SystemAddress const target);

    MCAPI void $GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets);

    MCAPI void $ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets);

    MCAPI void $WriteOutOfBandHeader(::RakNet::BitStream* bitStream);

    MCAPI void
    $SetUserUpdateThread(void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*), void* _userUpdateThreadData);

    MCAPI void $SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*));

    MCFOLD void $ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance);

    MCAPI void $SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond);

    MCFOLD bool $IsNetworkSimulatorActive();

    MCAPI ::RakNet::RakNetStatistics*
    $GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns);

    MCAPI bool $GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns);

    MCAPI void $GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    );

    MCAPI uint $GetReceiveBufferSize();

    MCAPI bool $RunUpdateCycle(::RakNet::BitStream& updateBitStream);

    MCAPI bool
    $SendOutOfBand(char const* host, ushort remotePort, char const* data, uint dataLength, uint connectionSocketIndex);

    MCAPI void $DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line);

    MCAPI ::RakNet::RNS2RecvStruct* $AllocRNS2RecvStruct(char const* file, uint line);

    MCAPI void $OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRakPeerInterface();

    MCNAPI static void** $vftableForRNS2EventHandler();
    // NOLINTEND
};

} // namespace RakNet
