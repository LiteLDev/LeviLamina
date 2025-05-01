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
    struct BufferedCommandStruct;
    struct PingAndClockDifferential;
    struct RemoteSystemStruct;
    struct RequestedConnectionStruct;
    struct SocketQueryOutput;
    // clang-format on

    // RakPeer inner types define
    struct PingAndClockDifferential {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk4d0860;
        ::ll::UntypedStorage<8, 8> mUnk384efe;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingAndClockDifferential& operator=(PingAndClockDifferential const&);
        PingAndClockDifferential(PingAndClockDifferential const&);
        PingAndClockDifferential();
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
        MCNAPI RemoteSystemStruct();

        MCNAPI ~RemoteSystemStruct();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct BanStruct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4332b7;
        ::ll::UntypedStorage<4, 4> mUnk4c8b8f;
        // NOLINTEND

    public:
        // prevent constructor by default
        BanStruct& operator=(BanStruct const&);
        BanStruct(BanStruct const&);
        BanStruct();
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

    struct SocketQueryOutput {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakNetSocket2*>> sockets;
        // NOLINTEND
    };

    enum : int {
        RequestedConnectionListMutex = 0,
        OfflinePingResponseMutex     = 1,
        NumberOfRakpeerMutexes       = 2,
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
    // vIndex: 0
    virtual ~RakPeer() /*override*/;

    // vIndex: 1
    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList) /*override*/;

    // vIndex: 2
    virtual ::RakNet::StartupResult Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    ) /*override*/;

    // vIndex: 3
    virtual bool
    InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey) /*override*/;

    // vIndex: 4
    virtual void DisableSecurity() /*override*/;

    // vIndex: 5
    virtual void AddToSecurityExceptionList(char const* ip) /*override*/;

    // vIndex: 6
    virtual void RemoveFromSecurityExceptionList(char const* ip) /*override*/;

    // vIndex: 7
    virtual bool IsInSecurityExceptionList(char const* ip) /*override*/;

    // vIndex: 8
    virtual void SetMaximumIncomingConnections(ushort numberAllowed) /*override*/;

    // vIndex: 9
    virtual uint GetMaximumIncomingConnections() const /*override*/;

    // vIndex: 10
    virtual ushort NumberOfConnections() const /*override*/;

    // vIndex: 11
    virtual void SetIncomingPassword(char const* passwordData, int passwordDataLength) /*override*/;

    // vIndex: 12
    virtual void GetIncomingPassword(char* passwordData, int* passwordDataLength) /*override*/;

    // vIndex: 13
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

    // vIndex: 14
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

    // vIndex: 15
    virtual void Shutdown(
        uint             blockDuration,
        uchar            orderingChannel,
        ::PacketPriority disconnectionNotificationPriority
    ) /*override*/;

    // vIndex: 16
    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier) /*override*/;

    // vIndex: 17
    virtual bool IsActive() const /*override*/;

    // vIndex: 18
    virtual bool GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const /*override*/;

    // vIndex: 19
    virtual uint GetNextSendReceipt() /*override*/;

    // vIndex: 20
    virtual uint IncrementNextSendReceipt() /*override*/;

    // vIndex: 22
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

    // vIndex: 21
    virtual uint Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    ) /*override*/;

    // vIndex: 23
    virtual void SendLoopback(char const* data, int const length) /*override*/;

    // vIndex: 24
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

    // vIndex: 25
    virtual ::RakNet::Packet* Receive() /*override*/;

    // vIndex: 26
    virtual void DeallocatePacket(::RakNet::Packet* packet) /*override*/;

    // vIndex: 27
    virtual uint GetMaximumNumberOfPeers() const /*override*/;

    // vIndex: 28
    virtual void CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    ) /*override*/;

    // vIndex: 30
    virtual void CancelConnectionAttempt(::RakNet::SystemAddress const target) /*override*/;

    // vIndex: 29
    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;

    // vIndex: 31
    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const /*override*/;

    // vIndex: 32
    virtual ::RakNet::SystemAddress GetSystemAddressFromIndex(uint index) /*override*/;

    // vIndex: 33
    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint index) /*override*/;

    // vIndex: 34
    virtual void GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const /*override*/;

    // vIndex: 35
    virtual void AddToBanList(char const* IP, uint milliseconds) /*override*/;

    // vIndex: 36
    virtual void RemoveFromBanList(char const* IP) /*override*/;

    // vIndex: 37
    virtual void ClearBanList() /*override*/;

    // vIndex: 38
    virtual bool IsBanned(char const* IP) /*override*/;

    // vIndex: 39
    virtual void SetLimitIPConnectionFrequency(bool b) /*override*/;

    // vIndex: 41
    virtual void Ping(::RakNet::SystemAddress const target) /*override*/;

    // vIndex: 40
    virtual bool Ping(
        char const* host,
        ushort      remotePort,
        bool        onlyReplyOnAcceptingConnections,
        uint        connectionSocketIndex
    ) /*override*/;

    // vIndex: 42
    virtual void SendNatTraversalMessage(::RakNet::SystemAddress const target) /*override*/;

    // vIndex: 43
    virtual int GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;

    // vIndex: 44
    virtual int GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const /*override*/;

    // vIndex: 45
    virtual int GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const /*override*/;

    // vIndex: 46
    virtual void SetOccasionalPing(bool doPing) /*override*/;

    // vIndex: 47
    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier) /*override*/;

    // vIndex: 50
    virtual void SetOfflinePingResponse(char const* data, uint const length) /*override*/;

    // vIndex: 51
    virtual void GetOfflinePingResponse(char** data, uint* length) /*override*/;

    // vIndex: 52
    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const
        /*override*/;

    // vIndex: 53
    virtual void SetInternalID(::RakNet::SystemAddress systemAddress, int index) /*override*/;

    // vIndex: 54
    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const target) const /*override*/;

    // vIndex: 55
    virtual ::RakNet::RakNetGUID const GetMyGUID() const /*override*/;

    // vIndex: 56
    virtual void resetMyGUID() /*override*/;

    // vIndex: 57
    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const socketIndex) /*override*/;

    // vIndex: 48
    virtual void SetAllowUnconnectedPings(bool unconnectedPings) /*override*/;

    // vIndex: 49
    virtual bool GetAllowUnconnectedPings() const /*override*/;

    // vIndex: 58
    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const
        /*override*/;

    // vIndex: 59
    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const /*override*/;

    // vIndex: 60
    virtual bool GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const input, char* client_public_key) const
        /*override*/;

    // vIndex: 61
    virtual void SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target) /*override*/;

    // vIndex: 62
    virtual uint GetTimeoutTime(::RakNet::SystemAddress const target) /*override*/;

    // vIndex: 63
    virtual int GetMTUSize(::RakNet::SystemAddress const target) const /*override*/;

    // vIndex: 64
    virtual uint GetNumberOfAdapters() /*override*/;

    // vIndex: 65
    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint index) /*override*/;

    // vIndex: 66
    virtual uint GetNumberOfAddresses() /*override*/;

    // vIndex: 67
    virtual char const* GetLocalIP(uint index) /*override*/;

    // vIndex: 68
    virtual bool IsLocalIP(char const* ip) /*override*/;

    // vIndex: 69
    virtual void AllowConnectionResponseIPMigration(bool allow) /*override*/;

    // vIndex: 70
    virtual bool AdvertiseSystem(
        char const* host,
        ushort      remotePort,
        char const* data,
        int         dataLength,
        uint        connectionSocketIndex
    ) /*override*/;

    // vIndex: 71
    virtual void SetSplitMessageProgressInterval(int interval) /*override*/;

    // vIndex: 72
    virtual int GetSplitMessageProgressInterval() const /*override*/;

    // vIndex: 73
    virtual void SetUnreliableTimeout(uint timeoutMS) /*override*/;

    // vIndex: 74
    virtual void SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex) /*override*/;

    // vIndex: 75
    virtual void AttachPlugin(::RakNet::PluginInterface2* plugin) /*override*/;

    // vIndex: 76
    virtual void DetachPlugin(::RakNet::PluginInterface2* plugin) /*override*/;

    // vIndex: 77
    virtual void PushBackPacket(::RakNet::Packet* packet, bool pushAtHead) /*override*/;

    // vIndex: 78
    virtual void
    ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress) /*override*/;

    // vIndex: 79
    virtual ::RakNet::Packet* AllocatePacket(uint dataSize) /*override*/;

    // vIndex: 80
    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const target) /*override*/;

    // vIndex: 81
    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) /*override*/;

    // vIndex: 82
    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets) /*override*/;

    // vIndex: 83
    virtual void WriteOutOfBandHeader(::RakNet::BitStream* bitStream) /*override*/;

    // vIndex: 84
    virtual void SetUserUpdateThread(
        void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*),
        void* _userUpdateThreadData
    ) /*override*/;

    // vIndex: 85
    virtual void SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*)
    ) /*override*/;

    // vIndex: 86
    virtual void ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance) /*override*/;

    // vIndex: 87
    virtual void SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond) /*override*/;

    // vIndex: 88
    virtual bool IsNetworkSimulatorActive() /*override*/;

    // vIndex: 90
    virtual ::RakNet::RakNetStatistics*
    GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns) /*override*/;

    // vIndex: 89
    virtual bool GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns) /*override*/;

    // vIndex: 91
    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    ) /*override*/;

    // vIndex: 92
    virtual uint GetReceiveBufferSize() /*override*/;

    // vIndex: 93
    virtual bool RunUpdateCycle(::RakNet::BitStream& updateBitStream) /*override*/;

    // vIndex: 94
    virtual bool SendOutOfBand(
        char const* host,
        ushort      remotePort,
        char const* data,
        uint        dataLength,
        uint        connectionSocketIndex
    ) /*override*/;

    // vIndex: 2
    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line) /*override*/;

    // vIndex: 3
    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const* file, uint line) /*override*/;

    // vIndex: 1
    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddPacketToProducer(::RakNet::Packet* p);

    MCNAPI ::RakNet::Packet* AllocPacket(uint dataSize, char const* file, uint line);

    MCNAPI ::RakNet::Packet* AllocPacket(uint dataSize, uchar* data, char const* file, uint line);

    MCNAPI bool AllowIncomingConnections() const;

    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        ::RakNet::SystemAddress                            systemAddress,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode incomingRakNetSocket,
        ::RakNet::RakNetSocket2*                           thisIPConnectedRecently,
        bool*                                              bindingAddress,
        ::RakNet::SystemAddress                            incomingMTU,
        int                                                guid,
        ::RakNet::RakNetGUID                               connectionMode,
        bool                                               useSecurity
    );

    MCNAPI void
    CallPluginCallbacks(::DataStructures::List<::RakNet::PluginInterface2*>& pluginList, ::RakNet::Packet* packet);

    MCNAPI void ClearBufferedPackets();

    MCNAPI void ClearRequestedConnectionList();

    MCNAPI void CloseConnectionInternal(
        ::RakNet::AddressOrGUID const& systemIdentifier,
        bool                           sendDisconnectionNotification,
        bool                           performImmediate,
        uchar                          orderingChannel,
        ::PacketPriority               disconnectionNotificationPriority
    );

    MCNAPI void DerefAllSockets();

    MCNAPI void DereferenceRemoteSystem(::RakNet::SystemAddress const& sa);

    MCNAPI void FillIPList();

    MCNAPI uint64 GetBestClockDifferential(::RakNet::SystemAddress systemAddress) const;

    MCNAPI int GetIndexFromSystemAddress(::RakNet::SystemAddress systemAddress, bool calledFromNetworkThread) const;

    MCNAPI ::RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystemFromSystemAddress(
        ::RakNet::SystemAddress systemAddress,
        bool                    calledFromNetworkThread,
        bool                    onlyActive
    ) const;

    MCNAPI uint GetRemoteSystemIndex(::RakNet::SystemAddress const& sa) const;

    MCNAPI bool IsLoopbackAddress(::RakNet::AddressOrGUID const& systemIdentifier, bool matchPort) const;

    MCNAPI void NotifyAndFlagForShutdown(
        ::RakNet::SystemAddress systemAddress,
        bool                    performImmediate,
        uchar                   orderingChannel,
        ::PacketPriority        disconnectionNotificationPriority
    );

    MCNAPI void
    OnConnectedPong(uint64 sendPingTime, uint64 sendPongTime, ::RakNet::RakPeer::RemoteSystemStruct* remoteSystem);

    MCNAPI void OnConnectionRequest(::RakNet::RakPeer::RemoteSystemStruct* remoteSystem, uint64 incomingTimestamp);

    MCNAPI void ParseConnectionRequestPacket(
        ::RakNet::RakPeer::RemoteSystemStruct* remoteSystem,
        ::RakNet::SystemAddress const&         systemAddress,
        char const*                            data,
        int                                    byteSize
    );

    MCNAPI void PingInternal(::RakNet::SystemAddress target, bool performImmediate, ::PacketReliability reliability);

    MCNAPI RakPeer();

    MCNAPI void ReferenceRemoteSystem(::RakNet::SystemAddress const& sa, uint remoteSystemListIndex);

    MCNAPI void SendBuffered(
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

    MCNAPI void SendBufferedList(
        char const**                                       data,
        int const*                                         lengths,
        int                                                numParameters,
        ::PacketPriority                                   priority,
        ::PacketReliability                                reliability,
        char                                               orderingChannel,
        ::RakNet::AddressOrGUID                            systemIdentifier,
        bool                                               broadcast,
        ::RakNet::RakPeer::RemoteSystemStruct::ConnectMode receipt,
        uint                                               connectionMode
    );

    MCNAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*          host,
        ushort               remotePort,
        char const*          passwordData,
        int                  passwordDataLength,
        ::RakNet::PublicKey* connectionSocketIndex,
        uint                 sendConnectionAttemptCount,
        uint                 timeBetweenSendConnectionAttemptsMS,
        uint                 timeoutTime,
        uint                 publicKey,
        uint                 extraData
    );

    MCNAPI ::RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*              host,
        ushort                   remotePort,
        char const*              passwordData,
        int                      passwordDataLength,
        ::RakNet::PublicKey*     sendConnectionAttemptCount,
        uint                     timeBetweenSendConnectionAttemptsMS,
        uint                     timeoutTime,
        uint                     socket,
        uint                     publicKey,
        uint                     connectionSocketIndex,
        ::RakNet::RakNetSocket2* extraData
    );

    MCNAPI bool SendImmediate(
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
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList> banList);

    MCNAPI ::RakNet::StartupResult $Startup(
        uint                        maxConnections,
        ::RakNet::SocketDescriptor* socketDescriptors,
        uint                        socketDescriptorCount,
        int                         threadPriority
    );

    MCNAPI bool $InitializeSecurity(char const* public_key, char const* private_key, bool bRequireClientKey);

    MCNAPI void $DisableSecurity();

    MCNAPI void $AddToSecurityExceptionList(char const* ip);

    MCNAPI void $RemoveFromSecurityExceptionList(char const* ip);

    MCNAPI bool $IsInSecurityExceptionList(char const* ip);

    MCNAPI void $SetMaximumIncomingConnections(ushort numberAllowed);

    MCNAPI uint $GetMaximumIncomingConnections() const;

    MCNAPI ushort $NumberOfConnections() const;

    MCNAPI void $SetIncomingPassword(char const* passwordData, int passwordDataLength);

    MCNAPI void $GetIncomingPassword(char* passwordData, int* passwordDataLength);

    MCNAPI ::RakNet::ConnectionAttemptResult $Connect(
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

    MCNAPI ::RakNet::ConnectionAttemptResult $ConnectWithSocket(
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

    MCNAPI void
    $Shutdown(uint blockDuration, uchar orderingChannel, ::PacketPriority disconnectionNotificationPriority);

    MCNAPI bool $SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID systemIdentifier);

    MCNAPI bool $IsActive() const;

    MCNAPI bool $GetConnectionList(::RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    MCNAPI uint $GetNextSendReceipt();

    MCNAPI uint $IncrementNextSendReceipt();

    MCNAPI uint $Send(
        char const*                   data,
        int const                     length,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    );

    MCNAPI uint $Send(
        ::RakNet::BitStream const*    bitStream,
        ::PacketPriority              priority,
        ::PacketReliability           reliability,
        char                          orderingChannel,
        ::RakNet::AddressOrGUID const systemIdentifier,
        bool                          broadcast,
        uint                          forceReceiptNumber
    );

    MCNAPI void $SendLoopback(char const* data, int const length);

    MCNAPI uint $SendList(
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

    MCNAPI ::RakNet::Packet* $Receive();

    MCNAPI void $DeallocatePacket(::RakNet::Packet* packet);

    MCNAPI uint $GetMaximumNumberOfPeers() const;

    MCNAPI void $CloseConnection(
        ::RakNet::AddressOrGUID const target,
        bool                          sendDisconnectionNotification,
        uchar                         orderingChannel,
        ::PacketPriority              disconnectionNotificationPriority
    );

    MCNAPI void $CancelConnectionAttempt(::RakNet::SystemAddress const target);

    MCNAPI ::RakNet::ConnectionState $GetConnectionState(::RakNet::AddressOrGUID const systemIdentifier);

    MCNAPI int $GetIndexFromSystemAddress(::RakNet::SystemAddress const systemAddress) const;

    MCNAPI ::RakNet::SystemAddress $GetSystemAddressFromIndex(uint index);

    MCNAPI ::RakNet::RakNetGUID $GetGUIDFromIndex(uint index);

    MCNAPI void $GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>& addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&    guids
    ) const;

    MCNAPI void $AddToBanList(char const* IP, uint milliseconds);

    MCNAPI void $RemoveFromBanList(char const* IP);

    MCNAPI void $ClearBanList();

    MCNAPI bool $IsBanned(char const* IP);

    MCNAPI void $SetLimitIPConnectionFrequency(bool b);

    MCNAPI void $Ping(::RakNet::SystemAddress const target);

    MCNAPI bool
    $Ping(char const* host, ushort remotePort, bool onlyReplyOnAcceptingConnections, uint connectionSocketIndex);

    MCNAPI void $SendNatTraversalMessage(::RakNet::SystemAddress const target);

    MCNAPI int $GetAveragePing(::RakNet::AddressOrGUID const systemIdentifier);

    MCNAPI int $GetLastPing(::RakNet::AddressOrGUID const systemIdentifier) const;

    MCNAPI int $GetLowestPing(::RakNet::AddressOrGUID const systemIdentifier) const;

    MCNAPI void $SetOccasionalPing(bool doPing);

    MCNAPI uint64 $GetClockDifferential(::RakNet::AddressOrGUID const systemIdentifier);

    MCNAPI void $SetOfflinePingResponse(char const* data, uint const length);

    MCNAPI void $GetOfflinePingResponse(char** data, uint* length);

    MCNAPI ::RakNet::SystemAddress $GetInternalID(::RakNet::SystemAddress const systemAddress, int const index) const;

    MCNAPI void $SetInternalID(::RakNet::SystemAddress systemAddress, int index);

    MCNAPI ::RakNet::SystemAddress $GetExternalID(::RakNet::SystemAddress const target) const;

    MCNAPI ::RakNet::RakNetGUID const $GetMyGUID() const;

    MCNAPI void $resetMyGUID();

    MCNAPI ::RakNet::SystemAddress $GetMyBoundAddress(int const socketIndex);

    MCNAPI void $SetAllowUnconnectedPings(bool unconnectedPings);

    MCNAPI bool $GetAllowUnconnectedPings() const;

    MCNAPI ::RakNet::RakNetGUID const& $GetGuidFromSystemAddress(::RakNet::SystemAddress const input) const;

    MCNAPI ::RakNet::SystemAddress $GetSystemAddressFromGuid(::RakNet::RakNetGUID const input) const;

    MCNAPI bool
    $GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const input, char* client_public_key) const;

    MCNAPI void $SetTimeoutTime(uint timeMS, ::RakNet::SystemAddress const target);

    MCNAPI uint $GetTimeoutTime(::RakNet::SystemAddress const target);

    MCNAPI int $GetMTUSize(::RakNet::SystemAddress const target) const;

    MCNAPI uint $GetNumberOfAdapters();

    MCNAPI ::RakNet::NetworkAdapter& $GetLocalAdapter(uint index);

    MCNAPI uint $GetNumberOfAddresses();

    MCNAPI char const* $GetLocalIP(uint index);

    MCNAPI bool $IsLocalIP(char const* ip);

    MCNAPI void $AllowConnectionResponseIPMigration(bool allow);

    MCNAPI bool
    $AdvertiseSystem(char const* host, ushort remotePort, char const* data, int dataLength, uint connectionSocketIndex);

    MCNAPI void $SetSplitMessageProgressInterval(int interval);

    MCNAPI int $GetSplitMessageProgressInterval() const;

    MCNAPI void $SetUnreliableTimeout(uint timeoutMS);

    MCNAPI void $SendTTL(char const* host, ushort remotePort, int ttl, uint connectionSocketIndex);

    MCNAPI void $AttachPlugin(::RakNet::PluginInterface2* plugin);

    MCNAPI void $DetachPlugin(::RakNet::PluginInterface2* plugin);

    MCNAPI void $PushBackPacket(::RakNet::Packet* packet, bool pushAtHead);

    MCNAPI void $ChangeSystemAddress(::RakNet::RakNetGUID guid, ::RakNet::SystemAddress const& systemAddress);

    MCNAPI ::RakNet::Packet* $AllocatePacket(uint dataSize);

    MCNAPI ::RakNet::RakNetSocket2* $GetSocket(::RakNet::SystemAddress const target);

    MCNAPI void $GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets);

    MCNAPI void $ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>& sockets);

    MCNAPI void $WriteOutOfBandHeader(::RakNet::BitStream* bitStream);

    MCNAPI void
    $SetUserUpdateThread(void (*_userUpdateThreadPtr)(::RakNet::RakPeerInterface*, void*), void* _userUpdateThreadData);

    MCNAPI void $SetIncomingDatagramEventHandler(bool (*_incomingDatagramEventHandler)(::RakNet::RNS2RecvStruct*));

    MCNAPI void $ApplyNetworkSimulator(float packetloss, ushort minExtraPing, ushort extraPingVariance);

    MCNAPI void $SetPerConnectionOutgoingBandwidthLimit(uint maxBitsPerSecond);

    MCNAPI bool $IsNetworkSimulatorActive();

    MCNAPI ::RakNet::RakNetStatistics*
    $GetStatistics(::RakNet::SystemAddress const systemAddress, ::RakNet::RakNetStatistics* rns);

    MCNAPI bool $GetStatistics(uint const index, ::RakNet::RakNetStatistics* rns);

    MCNAPI void $GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&    addresses,
        ::DataStructures::List<::RakNet::RakNetGUID>&       guids,
        ::DataStructures::List<::RakNet::RakNetStatistics>& statistics
    );

    MCNAPI uint $GetReceiveBufferSize();

    MCNAPI bool $RunUpdateCycle(::RakNet::BitStream& updateBitStream);

    MCNAPI bool
    $SendOutOfBand(char const* host, ushort remotePort, char const* data, uint dataLength, uint connectionSocketIndex);

    MCNAPI void $DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct* s, char const* file, uint line);

    MCNAPI ::RakNet::RNS2RecvStruct* $AllocRNS2RecvStruct(char const* file, uint line);

    MCNAPI void $OnRNS2Recv(::RakNet::RNS2RecvStruct* recvStruct);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRakPeerInterface();

    MCNAPI static void** $vftableForRNS2EventHandler();
    // NOLINTEND
};

} // namespace RakNet
