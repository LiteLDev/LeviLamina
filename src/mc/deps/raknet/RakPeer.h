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
    struct RemoteSystemStruct;
    struct BufferedCommandStruct;
    struct RequestedConnectionStruct;
    struct SocketQueryOutput;
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
    virtual ~RakPeer() /*override*/ = default;

    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList>) /*override*/;

    virtual ::RakNet::StartupResult Startup(uint, ::RakNet::SocketDescriptor*, uint, int) /*override*/;

    virtual bool InitializeSecurity(char const*, char const*, bool) /*override*/;

    virtual void DisableSecurity() /*override*/;

    virtual void AddToSecurityExceptionList(char const*) /*override*/;

    virtual void RemoveFromSecurityExceptionList(char const*) /*override*/;

    virtual bool IsInSecurityExceptionList(char const*) /*override*/;

    virtual void SetMaximumIncomingConnections(ushort) /*override*/;

    virtual uint GetMaximumIncomingConnections() const /*override*/;

    virtual ushort NumberOfConnections() const /*override*/;

    virtual void SetIncomingPassword(char const*, int) /*override*/;

    virtual void GetIncomingPassword(char*, int*) /*override*/;

    virtual ::RakNet::ConnectionAttemptResult
    Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint) /*override*/;

    virtual ::RakNet::ConnectionAttemptResult ConnectWithSocket(
        char const*,
        ushort,
        char const*,
        int,
        ::RakNet::RakNetSocket2*,
        ::RakNet::PublicKey*,
        uint,
        uint,
        uint
    ) /*override*/;

    virtual void Shutdown(uint, uchar, ::PacketPriority) /*override*/;

    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID) /*override*/;

    virtual bool IsActive() const /*override*/;

    virtual bool GetConnectionList(::RakNet::SystemAddress*, ushort*) const /*override*/;

    virtual uint GetNextSendReceipt() /*override*/;

    virtual uint IncrementNextSendReceipt() /*override*/;

    virtual uint Send(
        char const*,
        int const,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    ) /*override*/;

    virtual uint Send(
        ::RakNet::BitStream const*,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    ) /*override*/;

    virtual void SendLoopback(char const*, int const) /*override*/;

    virtual uint SendList(
        char const**,
        int const*,
        int const,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    ) /*override*/;

    virtual ::RakNet::Packet* Receive() /*override*/;

    virtual void DeallocatePacket(::RakNet::Packet*) /*override*/;

    virtual uint GetMaximumNumberOfPeers() const /*override*/;

    virtual void CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority) /*override*/;

    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const) /*override*/;

    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const) const /*override*/;

    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint) /*override*/;

    virtual void
    GetSystemList(::DataStructures::List<::RakNet::SystemAddress>&, ::DataStructures::List<::RakNet::RakNetGUID>&) const
        /*override*/;

    virtual void AddToBanList(char const*, uint) /*override*/;

    virtual void RemoveFromBanList(char const*) /*override*/;

    virtual void ClearBanList() /*override*/;

    virtual bool IsBanned(char const*) /*override*/;

    virtual void Ping(::RakNet::SystemAddress const) /*override*/;

    virtual bool Ping(char const*, ushort, bool, uint) /*override*/;

    virtual int GetAveragePing(::RakNet::AddressOrGUID const) /*override*/;

    virtual int GetLastPing(::RakNet::AddressOrGUID const) const /*override*/;

    virtual int GetLowestPing(::RakNet::AddressOrGUID const) const /*override*/;

    virtual void SetOccasionalPing(bool) /*override*/;

    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const) /*override*/;

    virtual void SetOfflinePingResponse(char const*, uint const) /*override*/;

    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const, int const) const /*override*/;

    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const) const /*override*/;

    virtual ::RakNet::RakNetGUID const GetMyGUID() const /*override*/;

    virtual void resetMyGUID() /*override*/;

    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const) /*override*/;

    virtual void SetAllowUnconnectedPings(bool) /*override*/;

    virtual bool GetAllowUnconnectedPings() const /*override*/;

    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const) const /*override*/;

    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const /*override*/;

    virtual void SetTimeoutTime(uint, ::RakNet::SystemAddress const) /*override*/;

    virtual uint GetTimeoutTime(::RakNet::SystemAddress const) /*override*/;

    virtual int GetMTUSize(::RakNet::SystemAddress const) const /*override*/;

    virtual uint GetNumberOfAdapters() /*override*/;

    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint) /*override*/;

    virtual uint GetNumberOfAddresses() /*override*/;

    virtual char const* GetLocalIP(uint) /*override*/;

    virtual bool IsLocalIP(char const*) /*override*/;

    virtual void AllowConnectionResponseIPMigration(bool) /*override*/;

    virtual bool AdvertiseSystem(char const*, ushort, char const*, int, uint) /*override*/;

    virtual void SetSplitMessageProgressInterval(int) /*override*/;

    virtual int GetSplitMessageProgressInterval() const /*override*/;

    virtual void SetUnreliableTimeout(uint) /*override*/;

    virtual void SendTTL(char const*, ushort, int, uint) /*override*/;

    virtual void AttachPlugin(::RakNet::PluginInterface2*) /*override*/;

    virtual void DetachPlugin(::RakNet::PluginInterface2*) /*override*/;

    virtual void PushBackPacket(::RakNet::Packet*, bool) /*override*/;

    virtual void ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&) /*override*/;

    virtual ::RakNet::Packet* AllocatePacket(uint) /*override*/;

    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const) /*override*/;

    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>&) /*override*/;

    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>&) /*override*/;

    virtual void WriteOutOfBandHeader(::RakNet::BitStream*) /*override*/;

    virtual void SetUserUpdateThread(void (*)(::RakNet::RakPeerInterface*, void*), void*) /*override*/;

    virtual void SetIncomingDatagramEventHandler(bool (*)(::RakNet::RNS2RecvStruct*)) /*override*/;

    virtual void ApplyNetworkSimulator(float, ushort, ushort) /*override*/;

    virtual void SetPerConnectionOutgoingBandwidthLimit(uint) /*override*/;

    virtual bool IsNetworkSimulatorActive() /*override*/;

    virtual ::RakNet::RakNetStatistics*
    GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*) /*override*/;

    virtual bool GetStatistics(uint const, ::RakNet::RakNetStatistics*) /*override*/;

    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::DataStructures::List<::RakNet::RakNetStatistics>&
    ) /*override*/;

    virtual uint GetReceiveBufferSize() /*override*/;

    virtual bool RunUpdateCycle(::RakNet::BitStream&) /*override*/;

    virtual bool SendOutOfBand(char const*, ushort, char const*, uint, uint) /*override*/;

    virtual void DeallocRNS2RecvStruct(::RakNet::RNS2RecvStruct*, char const*, uint) /*override*/;

    virtual ::RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, uint) /*override*/;

    virtual void OnRNS2Recv(::RakNet::RNS2RecvStruct*) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RakPeer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
