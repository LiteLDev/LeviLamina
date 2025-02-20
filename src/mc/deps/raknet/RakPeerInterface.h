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
    // vIndex: 0
    virtual ~RakPeerInterface();

    // vIndex: 1
    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList>) = 0;

    // vIndex: 2
    virtual ::RakNet::StartupResult Startup(uint, ::RakNet::SocketDescriptor*, uint, int) = 0;

    // vIndex: 3
    virtual bool InitializeSecurity(char const*, char const*, bool) = 0;

    // vIndex: 4
    virtual void DisableSecurity() = 0;

    // vIndex: 5
    virtual void AddToSecurityExceptionList(char const*) = 0;

    // vIndex: 6
    virtual void RemoveFromSecurityExceptionList(char const*) = 0;

    // vIndex: 7
    virtual bool IsInSecurityExceptionList(char const*) = 0;

    // vIndex: 8
    virtual void SetMaximumIncomingConnections(ushort) = 0;

    // vIndex: 9
    virtual uint GetMaximumIncomingConnections() const = 0;

    // vIndex: 10
    virtual ushort NumberOfConnections() const = 0;

    // vIndex: 11
    virtual void SetIncomingPassword(char const*, int) = 0;

    // vIndex: 12
    virtual void GetIncomingPassword(char*, int*) = 0;

    // vIndex: 13
    virtual ::RakNet::ConnectionAttemptResult
    Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint) = 0;

    // vIndex: 14
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
    ) = 0;

    // vIndex: 15
    virtual void Shutdown(uint, uchar, ::PacketPriority) = 0;

    // vIndex: 16
    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID) = 0;

    // vIndex: 17
    virtual bool IsActive() const = 0;

    // vIndex: 18
    virtual bool GetConnectionList(::RakNet::SystemAddress*, ushort*) const = 0;

    // vIndex: 19
    virtual uint GetNextSendReceipt() = 0;

    // vIndex: 20
    virtual uint IncrementNextSendReceipt() = 0;

    // vIndex: 22
    virtual uint Send(
        char const*,
        int const,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    ) = 0;

    // vIndex: 21
    virtual uint Send(
        ::RakNet::BitStream const*,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    ) = 0;

    // vIndex: 23
    virtual void SendLoopback(char const*, int const) = 0;

    // vIndex: 24
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
    ) = 0;

    // vIndex: 25
    virtual ::RakNet::Packet* Receive() = 0;

    // vIndex: 26
    virtual void DeallocatePacket(::RakNet::Packet*) = 0;

    // vIndex: 27
    virtual uint GetMaximumNumberOfPeers() const = 0;

    // vIndex: 28
    virtual void CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority) = 0;

    // vIndex: 29
    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const) = 0;

    // vIndex: 30
    virtual void CancelConnectionAttempt(::RakNet::SystemAddress const) = 0;

    // vIndex: 31
    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const) const = 0;

    // vIndex: 32
    virtual ::RakNet::SystemAddress GetSystemAddressFromIndex(uint) = 0;

    // vIndex: 33
    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint) = 0;

    // vIndex: 34
    virtual void
    GetSystemList(::DataStructures::List<::RakNet::SystemAddress>&, ::DataStructures::List<::RakNet::RakNetGUID>&)
        const = 0;

    // vIndex: 35
    virtual void AddToBanList(char const*, uint) = 0;

    // vIndex: 36
    virtual void RemoveFromBanList(char const*) = 0;

    // vIndex: 37
    virtual void ClearBanList() = 0;

    // vIndex: 38
    virtual bool IsBanned(char const*) = 0;

    // vIndex: 39
    virtual void SetLimitIPConnectionFrequency(bool) = 0;

    // vIndex: 41
    virtual void Ping(::RakNet::SystemAddress const) = 0;

    // vIndex: 40
    virtual bool Ping(char const*, ushort, bool, uint) = 0;

    // vIndex: 42
    virtual void SendNatTraversalMessage(::RakNet::SystemAddress const) = 0;

    // vIndex: 43
    virtual int GetAveragePing(::RakNet::AddressOrGUID const) = 0;

    // vIndex: 44
    virtual int GetLastPing(::RakNet::AddressOrGUID const) const = 0;

    // vIndex: 45
    virtual int GetLowestPing(::RakNet::AddressOrGUID const) const = 0;

    // vIndex: 46
    virtual void SetOccasionalPing(bool) = 0;

    // vIndex: 47
    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const) = 0;

    // vIndex: 48
    virtual void SetAllowUnconnectedPings(bool) = 0;

    // vIndex: 49
    virtual bool GetAllowUnconnectedPings() const = 0;

    // vIndex: 50
    virtual void SetOfflinePingResponse(char const*, uint const) = 0;

    // vIndex: 51
    virtual void GetOfflinePingResponse(char**, uint*) = 0;

    // vIndex: 52
    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const, int const) const = 0;

    // vIndex: 53
    virtual void SetInternalID(::RakNet::SystemAddress, int) = 0;

    // vIndex: 54
    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const) const = 0;

    // vIndex: 55
    virtual ::RakNet::RakNetGUID const GetMyGUID() const = 0;

    // vIndex: 56
    virtual void resetMyGUID() = 0;

    // vIndex: 57
    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const) = 0;

    // vIndex: 58
    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const) const = 0;

    // vIndex: 59
    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const = 0;

    // vIndex: 60
    virtual bool GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const, char*) const = 0;

    // vIndex: 61
    virtual void SetTimeoutTime(uint, ::RakNet::SystemAddress const) = 0;

    // vIndex: 62
    virtual uint GetTimeoutTime(::RakNet::SystemAddress const) = 0;

    // vIndex: 63
    virtual int GetMTUSize(::RakNet::SystemAddress const) const = 0;

    // vIndex: 64
    virtual uint GetNumberOfAdapters() = 0;

    // vIndex: 65
    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint) = 0;

    // vIndex: 66
    virtual uint GetNumberOfAddresses() = 0;

    // vIndex: 67
    virtual char const* GetLocalIP(uint) = 0;

    // vIndex: 68
    virtual bool IsLocalIP(char const*) = 0;

    // vIndex: 69
    virtual void AllowConnectionResponseIPMigration(bool) = 0;

    // vIndex: 70
    virtual bool AdvertiseSystem(char const*, ushort, char const*, int, uint) = 0;

    // vIndex: 71
    virtual void SetSplitMessageProgressInterval(int) = 0;

    // vIndex: 72
    virtual int GetSplitMessageProgressInterval() const = 0;

    // vIndex: 73
    virtual void SetUnreliableTimeout(uint) = 0;

    // vIndex: 74
    virtual void SendTTL(char const*, ushort, int, uint) = 0;

    // vIndex: 75
    virtual void AttachPlugin(::RakNet::PluginInterface2*) = 0;

    // vIndex: 76
    virtual void DetachPlugin(::RakNet::PluginInterface2*) = 0;

    // vIndex: 77
    virtual void PushBackPacket(::RakNet::Packet*, bool) = 0;

    // vIndex: 78
    virtual void ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&) = 0;

    // vIndex: 79
    virtual ::RakNet::Packet* AllocatePacket(uint) = 0;

    // vIndex: 80
    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const) = 0;

    // vIndex: 81
    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>&) = 0;

    // vIndex: 82
    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>&) = 0;

    // vIndex: 83
    virtual void WriteOutOfBandHeader(::RakNet::BitStream*) = 0;

    // vIndex: 84
    virtual void SetUserUpdateThread(void (*)(::RakNet::RakPeerInterface*, void*), void*) = 0;

    // vIndex: 85
    virtual void SetIncomingDatagramEventHandler(bool (*)(::RakNet::RNS2RecvStruct*)) = 0;

    // vIndex: 86
    virtual void ApplyNetworkSimulator(float, ushort, ushort) = 0;

    // vIndex: 87
    virtual void SetPerConnectionOutgoingBandwidthLimit(uint) = 0;

    // vIndex: 88
    virtual bool IsNetworkSimulatorActive() = 0;

    // vIndex: 90
    virtual ::RakNet::RakNetStatistics* GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*) = 0;

    // vIndex: 89
    virtual bool GetStatistics(uint const, ::RakNet::RakNetStatistics*) = 0;

    // vIndex: 91
    virtual void
    GetStatisticsList(::DataStructures::List<::RakNet::SystemAddress>&, ::DataStructures::List<::RakNet::RakNetGUID>&, ::DataStructures::List<::RakNet::RakNetStatistics>&) = 0;

    // vIndex: 92
    virtual uint GetReceiveBufferSize() = 0;

    // vIndex: 93
    virtual bool RunUpdateCycle(::RakNet::BitStream&) = 0;

    // vIndex: 94
    virtual bool SendOutOfBand(char const*, ushort, char const*, uint, uint) = 0;
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
