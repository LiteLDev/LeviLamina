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

    virtual void InitializeConfiguration(::std::unique_ptr<::RakNet::ShadowBanList>) = 0;

    virtual ::RakNet::StartupResult Startup(uint, ::RakNet::SocketDescriptor*, uint, int) = 0;

    virtual bool InitializeSecurity(char const*, char const*, bool) = 0;

    virtual void DisableSecurity() = 0;

    virtual void AddToSecurityExceptionList(char const*) = 0;

    virtual void RemoveFromSecurityExceptionList(char const*) = 0;

    virtual bool IsInSecurityExceptionList(char const*) = 0;

    virtual void SetMaximumIncomingConnections(ushort) = 0;

    virtual uint GetMaximumIncomingConnections() const = 0;

    virtual ushort NumberOfConnections() const = 0;

    virtual void SetIncomingPassword(char const*, int) = 0;

    virtual void GetIncomingPassword(char*, int*) = 0;

    virtual ::RakNet::ConnectionAttemptResult
    Connect(char const*, ushort, char const*, int, ::RakNet::PublicKey*, uint, uint, uint, uint) = 0;

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

    virtual void Shutdown(uint, uchar, ::PacketPriority) = 0;

    virtual bool SetApplicationHandshakeCompleted(::RakNet::AddressOrGUID) = 0;

    virtual bool IsActive() const = 0;

    virtual bool GetConnectionList(::RakNet::SystemAddress*, ushort*) const = 0;

    virtual uint GetNextSendReceipt() = 0;

    virtual uint IncrementNextSendReceipt() = 0;

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

    virtual uint Send(
        ::RakNet::BitStream const*,
        ::PacketPriority,
        ::PacketReliability,
        char,
        ::RakNet::AddressOrGUID const,
        bool,
        uint
    ) = 0;

    virtual void SendLoopback(char const*, int const) = 0;

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

    virtual ::RakNet::Packet* Receive() = 0;

    virtual void DeallocatePacket(::RakNet::Packet*) = 0;

    virtual uint GetMaximumNumberOfPeers() const = 0;

    virtual void CloseConnection(::RakNet::AddressOrGUID const, bool, uchar, ::PacketPriority) = 0;

    virtual ::RakNet::ConnectionState GetConnectionState(::RakNet::AddressOrGUID const) = 0;

    virtual void CancelConnectionAttempt(::RakNet::SystemAddress const) = 0;

    virtual int GetIndexFromSystemAddress(::RakNet::SystemAddress const) const = 0;

    virtual ::RakNet::SystemAddress GetSystemAddressFromIndex(uint) = 0;

    virtual ::RakNet::RakNetGUID GetGUIDFromIndex(uint) = 0;

    virtual void GetSystemList(
        ::DataStructures::List<::RakNet::SystemAddress>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&
    ) const = 0;

    virtual void AddToBanList(char const*, uint) = 0;

    virtual void RemoveFromBanList(char const*) = 0;

    virtual void ClearBanList() = 0;

    virtual bool IsBanned(char const*) = 0;

    virtual void SetLimitIPConnectionFrequency(bool) = 0;

    virtual void Ping(::RakNet::SystemAddress const) = 0;

    virtual bool Ping(char const*, ushort, bool, uint) = 0;

    virtual void SendNatTraversalMessage(::RakNet::SystemAddress const) = 0;

    virtual int GetAveragePing(::RakNet::AddressOrGUID const) = 0;

    virtual int GetLastPing(::RakNet::AddressOrGUID const) const = 0;

    virtual int GetLowestPing(::RakNet::AddressOrGUID const) const = 0;

    virtual void SetOccasionalPing(bool) = 0;

    virtual uint64 GetClockDifferential(::RakNet::AddressOrGUID const) = 0;

    virtual void SetAllowUnconnectedPings(bool) = 0;

    virtual bool GetAllowUnconnectedPings() const = 0;

    virtual void SetOfflinePingResponse(char const*, uint const) = 0;

    virtual void GetOfflinePingResponse(char**, uint*) = 0;

    virtual ::RakNet::SystemAddress GetInternalID(::RakNet::SystemAddress const, int const) const = 0;

    virtual void SetInternalID(::RakNet::SystemAddress, int) = 0;

    virtual ::RakNet::SystemAddress GetExternalID(::RakNet::SystemAddress const) const = 0;

    virtual ::RakNet::RakNetGUID const GetMyGUID() const = 0;

    virtual void resetMyGUID() = 0;

    virtual ::RakNet::SystemAddress GetMyBoundAddress(int const) = 0;

    virtual ::RakNet::RakNetGUID const& GetGuidFromSystemAddress(::RakNet::SystemAddress const) const = 0;

    virtual ::RakNet::SystemAddress GetSystemAddressFromGuid(::RakNet::RakNetGUID const) const = 0;

    virtual bool GetClientPublicKeyFromSystemAddress(::RakNet::SystemAddress const, char*) const = 0;

    virtual void SetTimeoutTime(uint, ::RakNet::SystemAddress const) = 0;

    virtual uint GetTimeoutTime(::RakNet::SystemAddress const) = 0;

    virtual int GetMTUSize(::RakNet::SystemAddress const) const = 0;

    virtual uint GetNumberOfAdapters() = 0;

    virtual ::RakNet::NetworkAdapter& GetLocalAdapter(uint) = 0;

    virtual uint GetNumberOfAddresses() = 0;

    virtual char const* GetLocalIP(uint) = 0;

    virtual bool IsLocalIP(char const*) = 0;

    virtual void AllowConnectionResponseIPMigration(bool) = 0;

    virtual bool AdvertiseSystem(char const*, ushort, char const*, int, uint) = 0;

    virtual void SetSplitMessageProgressInterval(int) = 0;

    virtual int GetSplitMessageProgressInterval() const = 0;

    virtual void SetUnreliableTimeout(uint) = 0;

    virtual void SendTTL(char const*, ushort, int, uint) = 0;

    virtual void AttachPlugin(::RakNet::PluginInterface2*) = 0;

    virtual void DetachPlugin(::RakNet::PluginInterface2*) = 0;

    virtual void PushBackPacket(::RakNet::Packet*, bool) = 0;

    virtual void ChangeSystemAddress(::RakNet::RakNetGUID, ::RakNet::SystemAddress const&) = 0;

    virtual ::RakNet::Packet* AllocatePacket(uint) = 0;

    virtual ::RakNet::RakNetSocket2* GetSocket(::RakNet::SystemAddress const) = 0;

    virtual void GetSockets(::DataStructures::List<::RakNet::RakNetSocket2*>&) = 0;

    virtual void ReleaseSockets(::DataStructures::List<::RakNet::RakNetSocket2*>&) = 0;

    virtual void WriteOutOfBandHeader(::RakNet::BitStream*) = 0;

    virtual void SetUserUpdateThread(void (*)(::RakNet::RakPeerInterface*, void*), void*) = 0;

    virtual void SetIncomingDatagramEventHandler(bool (*)(::RakNet::RNS2RecvStruct*)) = 0;

    virtual void ApplyNetworkSimulator(float, ushort, ushort) = 0;

    virtual void SetPerConnectionOutgoingBandwidthLimit(uint) = 0;

    virtual bool IsNetworkSimulatorActive() = 0;

    virtual ::RakNet::RakNetStatistics* GetStatistics(::RakNet::SystemAddress const, ::RakNet::RakNetStatistics*) = 0;

    virtual bool GetStatistics(uint const, ::RakNet::RakNetStatistics*) = 0;

    virtual void GetStatisticsList(
        ::DataStructures::List<::RakNet::SystemAddress>&,
        ::DataStructures::List<::RakNet::RakNetGUID>&,
        ::DataStructures::List<::RakNet::RakNetStatistics>&
    ) = 0;

    virtual uint GetReceiveBufferSize() = 0;

    virtual bool RunUpdateCycle(::RakNet::BitStream&) = 0;

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
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace RakNet
