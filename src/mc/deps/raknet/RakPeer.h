#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/network/NetworkIdentifier.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/List.h"

// auto generated forward declare list
// clang-format off
enum class PacketPriority;
enum class PacketReliability;
namespace RakNet { class BitStream; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { enum class ConnectionAttemptResult; }
namespace RakNet { enum class ConnectionState; }
namespace RakNet { enum class StartupResult; }
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

class RakPeer {
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
        BufferedCommandStruct& operator=(BufferedCommandStruct const&) = delete;
        BufferedCommandStruct(BufferedCommandStruct const&)            = delete;
        BufferedCommandStruct()                                        = delete;
    };

    struct RemoteSystemStruct {
    public:
        // RemoteSystemStruct inner types define
        enum class ConnectMode {};

    public:
        // prevent constructor by default
        RemoteSystemStruct& operator=(RemoteSystemStruct const&) = delete;
        RemoteSystemStruct(RemoteSystemStruct const&)            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??0RemoteSystemStruct\@RakPeer\@RakNet\@\@QEAA\@XZ
         */
        MCAPI RemoteSystemStruct();
        /**
         * @symbol ??1RemoteSystemStruct\@RakPeer\@RakNet\@\@QEAA\@XZ
         */
        MCAPI ~RemoteSystemStruct();
        // NOLINTEND
    };

    struct RequestedConnectionStruct {

    public:
        // prevent constructor by default
        RequestedConnectionStruct& operator=(RequestedConnectionStruct const&) = delete;
        RequestedConnectionStruct(RequestedConnectionStruct const&)            = delete;
        RequestedConnectionStruct()                                            = delete;
    };

    struct SocketQueryOutput {

    public:
        // prevent constructor by default
        SocketQueryOutput& operator=(SocketQueryOutput const&) = delete;
        SocketQueryOutput(SocketQueryOutput const&)            = delete;
        SocketQueryOutput()                                    = delete;
    };

public:
    SystemAddress getAdr(NetworkIdentifier const& ni) {
        RakNetGUID const& guid = dAccess<RakNetGUID>(&ni, 8);
        return RakPeer::GetSystemAddressFromGuid(guid);
    }

    // prevent constructor by default
    RakPeer& operator=(RakPeer const&) = delete;
    RakPeer(RakPeer const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?AddToBanList\@RakPeer\@RakNet\@\@UEAAXPEBDI\@Z
     */
    MCVAPI void AddToBanList(char const*, unsigned int);
    /**
     * @symbol ?AddToSecurityExceptionList\@RakPeer\@RakNet\@\@UEAAXPEBD\@Z
     */
    MCVAPI void AddToSecurityExceptionList(char const*);
    /**
     * @symbol ?AdvertiseSystem\@RakPeer\@RakNet\@\@UEAA_NPEBDG0HI\@Z
     */
    MCVAPI bool AdvertiseSystem(char const*, unsigned short, char const*, int, unsigned int);
    /**
     * @symbol ?AllocRNS2RecvStruct\@RakPeer\@RakNet\@\@MEAAPEAURNS2RecvStruct\@2\@PEBDI\@Z
     */
    MCVAPI struct RakNet::RNS2RecvStruct* AllocRNS2RecvStruct(char const*, unsigned int);
    /**
     * @symbol ?AllocatePacket\@RakPeer\@RakNet\@\@UEAAPEAUPacket\@2\@I\@Z
     */
    MCVAPI struct RakNet::Packet* AllocatePacket(unsigned int);
    /**
     * @symbol ?AllowConnectionResponseIPMigration\@RakPeer\@RakNet\@\@UEAAX_N\@Z
     */
    MCVAPI void AllowConnectionResponseIPMigration(bool);
    /**
     * @symbol ?ApplyNetworkSimulator\@RakPeer\@RakNet\@\@UEAAXMGG\@Z
     */
    MCVAPI void ApplyNetworkSimulator(float, unsigned short, unsigned short);
    /**
     * @symbol ?AttachPlugin\@RakPeer\@RakNet\@\@UEAAXPEAVPluginInterface2\@2\@\@Z
     */
    MCVAPI void AttachPlugin(class RakNet::PluginInterface2*);
    /**
     * @symbol ?CancelConnectionAttempt\@RakPeer\@RakNet\@\@UEAAXUSystemAddress\@2\@\@Z
     */
    MCVAPI void CancelConnectionAttempt(struct RakNet::SystemAddress);
    /**
     * @symbol ?ChangeSystemAddress\@RakPeer\@RakNet\@\@UEAAXURakNetGUID\@2\@AEBUSystemAddress\@2\@\@Z
     */
    MCVAPI void ChangeSystemAddress(struct RakNet::RakNetGUID, struct RakNet::SystemAddress const&);
    /**
     * @symbol ?ClearBanList\@RakPeer\@RakNet\@\@UEAAXXZ
     */
    MCVAPI void ClearBanList();
    /**
     * @symbol ?CloseConnection\@RakPeer\@RakNet\@\@UEAAXUAddressOrGUID\@2\@_NEW4PacketPriority\@\@\@Z
     */
    MCVAPI void CloseConnection(struct RakNet::AddressOrGUID, bool, unsigned char, enum class PacketPriority);
    /**
     * @symbol ?Connect\@RakPeer\@RakNet\@\@UEAA?AW4ConnectionAttemptResult\@2\@PEBDG0HPEAUPublicKey\@2\@IIII\@Z
     */
    MCVAPI enum class RakNet::ConnectionAttemptResult Connect(
        char const*,
        unsigned short,
        char const*,
        int,
        struct RakNet::PublicKey*,
        unsigned int,
        unsigned int,
        unsigned int,
        unsigned int
    );
    /**
     * @symbol
     * ?ConnectWithSocket\@RakPeer\@RakNet\@\@UEAA?AW4ConnectionAttemptResult\@2\@PEBDG0HPEAVRakNetSocket2\@2\@PEAUPublicKey\@2\@III\@Z
     */
    MCVAPI enum class RakNet::ConnectionAttemptResult ConnectWithSocket(
        char const*,
        unsigned short,
        char const*,
        int,
        class RakNet::RakNetSocket2*,
        struct RakNet::PublicKey*,
        unsigned int,
        unsigned int,
        unsigned int
    );
    /**
     * @symbol ?DeallocRNS2RecvStruct\@RakPeer\@RakNet\@\@MEAAXPEAURNS2RecvStruct\@2\@PEBDI\@Z
     */
    MCVAPI void DeallocRNS2RecvStruct(struct RakNet::RNS2RecvStruct*, char const*, unsigned int);
    /**
     * @symbol ?DeallocatePacket\@RakPeer\@RakNet\@\@UEAAXPEAUPacket\@2\@\@Z
     */
    MCVAPI void DeallocatePacket(struct RakNet::Packet*);
    /**
     * @symbol ?DetachPlugin\@RakPeer\@RakNet\@\@UEAAXPEAVPluginInterface2\@2\@\@Z
     */
    MCVAPI void DetachPlugin(class RakNet::PluginInterface2*);
    /**
     * @symbol ?DisableSecurity\@RakPeer\@RakNet\@\@UEAAXXZ
     */
    MCVAPI void DisableSecurity();
    /**
     * @symbol ?GetAveragePing\@RakPeer\@RakNet\@\@UEAAHUAddressOrGUID\@2\@\@Z
     */
    MCVAPI int GetAveragePing(struct RakNet::AddressOrGUID);
    /**
     * @symbol ?GetClientPublicKeyFromSystemAddress\@RakPeer\@RakNet\@\@UEBA_NUSystemAddress\@2\@PEAD\@Z
     */
    MCVAPI bool GetClientPublicKeyFromSystemAddress(struct RakNet::SystemAddress, char*) const;
    /**
     * @symbol ?GetClockDifferential\@RakPeer\@RakNet\@\@UEAA_KUAddressOrGUID\@2\@\@Z
     */
    MCVAPI uint64_t GetClockDifferential(struct RakNet::AddressOrGUID);
    /**
     * @symbol ?GetConnectionList\@RakPeer\@RakNet\@\@UEBA_NPEAUSystemAddress\@2\@PEAG\@Z
     */
    MCVAPI bool GetConnectionList(struct RakNet::SystemAddress*, unsigned short*) const;
    /**
     * @symbol ?GetConnectionState\@RakPeer\@RakNet\@\@UEAA?AW4ConnectionState\@2\@UAddressOrGUID\@2\@\@Z
     */
    MCVAPI enum class RakNet::ConnectionState GetConnectionState(struct RakNet::AddressOrGUID);
    /**
     * @symbol ?GetExternalID\@RakPeer\@RakNet\@\@UEBA?AUSystemAddress\@2\@U32\@\@Z
     */
    MCVAPI struct RakNet::SystemAddress GetExternalID(struct RakNet::SystemAddress) const;
    /**
     * @symbol ?GetGUIDFromIndex\@RakPeer\@RakNet\@\@UEAA?AURakNetGUID\@2\@I\@Z
     */
    MCVAPI struct RakNet::RakNetGUID GetGUIDFromIndex(unsigned int);
    /**
     * @symbol ?GetGuidFromSystemAddress\@RakPeer\@RakNet\@\@UEBAAEBURakNetGUID\@2\@USystemAddress\@2\@\@Z
     */
    MCVAPI struct RakNet::RakNetGUID const& GetGuidFromSystemAddress(struct RakNet::SystemAddress) const;
    /**
     * @symbol ?GetIncomingPassword\@RakPeer\@RakNet\@\@UEAAXPEADPEAH\@Z
     */
    MCVAPI void GetIncomingPassword(char*, int*);
    /**
     * @symbol ?GetIndexFromSystemAddress\@RakPeer\@RakNet\@\@UEBAHUSystemAddress\@2\@\@Z
     */
    MCVAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress) const;
    /**
     * @symbol ?GetInternalID\@RakPeer\@RakNet\@\@UEBA?AUSystemAddress\@2\@U32\@H\@Z
     */
    MCVAPI struct RakNet::SystemAddress GetInternalID(struct RakNet::SystemAddress, int) const;
    /**
     * @symbol ?GetLastPing\@RakPeer\@RakNet\@\@UEBAHUAddressOrGUID\@2\@\@Z
     */
    MCVAPI int GetLastPing(struct RakNet::AddressOrGUID) const;
    /**
     * @symbol ?GetLocalAdapter\@RakPeer\@RakNet\@\@UEAAAEAUNetworkAdapter\@2\@I\@Z
     */
    MCVAPI struct RakNet::NetworkAdapter& GetLocalAdapter(unsigned int);
    /**
     * @symbol ?GetLocalIP\@RakPeer\@RakNet\@\@UEAAPEBDI\@Z
     */
    MCVAPI char const* GetLocalIP(unsigned int);
    /**
     * @symbol ?GetLowestPing\@RakPeer\@RakNet\@\@UEBAHUAddressOrGUID\@2\@\@Z
     */
    MCVAPI int GetLowestPing(struct RakNet::AddressOrGUID) const;
    /**
     * @symbol ?GetMTUSize\@RakPeer\@RakNet\@\@UEBAHUSystemAddress\@2\@\@Z
     */
    MCVAPI int GetMTUSize(struct RakNet::SystemAddress) const;
    /**
     * @symbol ?GetMaximumIncomingConnections\@RakPeer\@RakNet\@\@UEBAIXZ
     */
    MCVAPI unsigned int GetMaximumIncomingConnections() const;
    /**
     * @symbol ?GetMaximumNumberOfPeers\@RakPeer\@RakNet\@\@UEBAIXZ
     */
    MCVAPI unsigned int GetMaximumNumberOfPeers() const;
    /**
     * @symbol ?GetMyBoundAddress\@RakPeer\@RakNet\@\@UEAA?AUSystemAddress\@2\@H\@Z
     */
    MCVAPI struct RakNet::SystemAddress GetMyBoundAddress(int);
    /**
     * @symbol ?GetMyGUID\@RakPeer\@RakNet\@\@UEBA?BURakNetGUID\@2\@XZ
     */
    MCVAPI struct RakNet::RakNetGUID const GetMyGUID() const;
    /**
     * @symbol ?GetNextSendReceipt\@RakPeer\@RakNet\@\@UEAAIXZ
     */
    MCVAPI unsigned int GetNextSendReceipt();
    /**
     * @symbol ?GetNumberOfAdapters\@RakPeer\@RakNet\@\@UEAAIXZ
     */
    MCVAPI unsigned int GetNumberOfAdapters();
    /**
     * @symbol ?GetNumberOfAddresses\@RakPeer\@RakNet\@\@UEAAIXZ
     */
    MCVAPI unsigned int GetNumberOfAddresses();
    /**
     * @symbol ?GetOfflinePingResponse\@RakPeer\@RakNet\@\@UEAAXPEAPEADPEAI\@Z
     */
    MCVAPI void GetOfflinePingResponse(char**, unsigned int*);
    /**
     * @symbol ?GetReceiveBufferSize\@RakPeer\@RakNet\@\@UEAAIXZ
     */
    MCVAPI unsigned int GetReceiveBufferSize();
    /**
     * @symbol ?GetSocket\@RakPeer\@RakNet\@\@UEAAPEAVRakNetSocket2\@2\@USystemAddress\@2\@\@Z
     */
    MCVAPI class RakNet::RakNetSocket2* GetSocket(struct RakNet::SystemAddress);
    /**
     * @symbol ?GetSockets\@RakPeer\@RakNet\@\@UEAAXAEAV?$List\@PEAVRakNetSocket2\@RakNet\@\@\@DataStructures\@\@\@Z
     */
    MCVAPI void GetSockets(class DataStructures::List<class RakNet::RakNetSocket2*>&);
    /**
     * @symbol ?GetSplitMessageProgressInterval\@RakPeer\@RakNet\@\@UEBAHXZ
     */
    MCVAPI int GetSplitMessageProgressInterval() const;
    /**
     * @symbol ?GetStatistics\@RakPeer\@RakNet\@\@UEAA_NIPEAURakNetStatistics\@2\@\@Z
     */
    MCVAPI bool GetStatistics(unsigned int, struct RakNet::RakNetStatistics*);
    /**
     * @symbol ?GetStatistics\@RakPeer\@RakNet\@\@UEAAPEAURakNetStatistics\@2\@USystemAddress\@2\@PEAU32\@\@Z
     */
    MCVAPI struct RakNet::RakNetStatistics*
    GetStatistics(struct RakNet::SystemAddress, struct RakNet::RakNetStatistics*);
    /**
     * @symbol
     * ?GetStatisticsList\@RakPeer\@RakNet\@\@UEAAXAEAV?$List\@USystemAddress\@RakNet\@\@\@DataStructures\@\@AEAV?$List\@URakNetGUID\@RakNet\@\@\@4\@AEAV?$List\@URakNetStatistics\@RakNet\@\@\@4\@\@Z
     */
    MCVAPI void
    GetStatisticsList(class DataStructures::List<struct RakNet::SystemAddress>&, class DataStructures::List<struct RakNet::RakNetGUID>&, class DataStructures::List<struct RakNet::RakNetStatistics>&);
    /**
     * @symbol ?GetSystemAddressFromGuid\@RakPeer\@RakNet\@\@UEBA?AUSystemAddress\@2\@URakNetGUID\@2\@\@Z
     */
    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID) const;
    /**
     * @symbol ?GetSystemAddressFromIndex\@RakPeer\@RakNet\@\@UEAA?AUSystemAddress\@2\@I\@Z
     */
    MCVAPI struct RakNet::SystemAddress GetSystemAddressFromIndex(unsigned int);
    /**
     * @symbol
     * ?GetSystemList\@RakPeer\@RakNet\@\@UEBAXAEAV?$List\@USystemAddress\@RakNet\@\@\@DataStructures\@\@AEAV?$List\@URakNetGUID\@RakNet\@\@\@4\@\@Z
     */
    MCVAPI void
    GetSystemList(class DataStructures::List<struct RakNet::SystemAddress>&, class DataStructures::List<struct RakNet::RakNetGUID>&)
        const;
    /**
     * @symbol ?GetTimeoutTime\@RakPeer\@RakNet\@\@UEAAIUSystemAddress\@2\@\@Z
     */
    MCVAPI unsigned int GetTimeoutTime(struct RakNet::SystemAddress);
    /**
     * @symbol ?IncrementNextSendReceipt\@RakPeer\@RakNet\@\@UEAAIXZ
     */
    MCVAPI unsigned int IncrementNextSendReceipt();
    /**
     * @symbol ?InitializeSecurity\@RakPeer\@RakNet\@\@UEAA_NPEBD0_N\@Z
     */
    MCVAPI bool InitializeSecurity(char const*, char const*, bool);
    /**
     * @symbol ?IsActive\@RakPeer\@RakNet\@\@UEBA_NXZ
     */
    MCVAPI bool IsActive() const;
    /**
     * @symbol ?IsBanned\@RakPeer\@RakNet\@\@UEAA_NPEBD\@Z
     */
    MCVAPI bool IsBanned(char const*);
    /**
     * @symbol ?IsInSecurityExceptionList\@RakPeer\@RakNet\@\@UEAA_NPEBD\@Z
     */
    MCVAPI bool IsInSecurityExceptionList(char const*);
    /**
     * @symbol ?IsLocalIP\@RakPeer\@RakNet\@\@UEAA_NPEBD\@Z
     */
    MCVAPI bool IsLocalIP(char const*);
    /**
     * @symbol ?IsNetworkSimulatorActive\@RakPeer\@RakNet\@\@UEAA_NXZ
     */
    MCVAPI bool IsNetworkSimulatorActive();
    /**
     * @symbol ?NumberOfConnections\@RakPeer\@RakNet\@\@UEBAGXZ
     */
    MCVAPI unsigned short NumberOfConnections() const;
    /**
     * @symbol ?OnRNS2Recv\@RakPeer\@RakNet\@\@MEAAXPEAURNS2RecvStruct\@2\@\@Z
     */
    MCVAPI void OnRNS2Recv(struct RakNet::RNS2RecvStruct*);
    /**
     * @symbol ?Ping\@RakPeer\@RakNet\@\@UEAA_NPEBDG_NI\@Z
     */
    MCVAPI bool Ping(char const*, unsigned short, bool, unsigned int);
    /**
     * @symbol ?Ping\@RakPeer\@RakNet\@\@UEAAXUSystemAddress\@2\@\@Z
     */
    MCVAPI void Ping(struct RakNet::SystemAddress);
    /**
     * @symbol ?PushBackPacket\@RakPeer\@RakNet\@\@UEAAXPEAUPacket\@2\@_N\@Z
     */
    MCVAPI void PushBackPacket(struct RakNet::Packet*, bool);
    /**
     * @symbol ?Receive\@RakPeer\@RakNet\@\@UEAAPEAUPacket\@2\@XZ
     */
    MCVAPI struct RakNet::Packet* Receive();
    /**
     * @symbol ?ReleaseSockets\@RakPeer\@RakNet\@\@UEAAXAEAV?$List\@PEAVRakNetSocket2\@RakNet\@\@\@DataStructures\@\@\@Z
     */
    MCVAPI void ReleaseSockets(class DataStructures::List<class RakNet::RakNetSocket2*>&);
    /**
     * @symbol ?RemoveFromBanList\@RakPeer\@RakNet\@\@UEAAXPEBD\@Z
     */
    MCVAPI void RemoveFromBanList(char const*);
    /**
     * @symbol ?RemoveFromSecurityExceptionList\@RakPeer\@RakNet\@\@UEAAXPEBD\@Z
     */
    MCVAPI void RemoveFromSecurityExceptionList(char const*);
    /**
     * @symbol ?RunUpdateCycle\@RakPeer\@RakNet\@\@UEAA_NAEAVBitStream\@2\@\@Z
     */
    MCVAPI bool RunUpdateCycle(class RakNet::BitStream&);
    /**
     * @symbol ?Send\@RakPeer\@RakNet\@\@UEAAIPEBDHW4PacketPriority\@\@W4PacketReliability\@\@DUAddressOrGUID\@2\@_NI\@Z
     */
    MCVAPI unsigned int Send(
        char const*,
        int,
        enum class PacketPriority,
        enum class PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        unsigned int
    );
    /**
     * @symbol
     * ?Send\@RakPeer\@RakNet\@\@UEAAIPEBVBitStream\@2\@W4PacketPriority\@\@W4PacketReliability\@\@DUAddressOrGUID\@2\@_NI\@Z
     */
    MCVAPI unsigned int Send(
        class RakNet::BitStream const*,
        enum class PacketPriority,
        enum class PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        unsigned int
    );
    /**
     * @symbol
     * ?SendList\@RakPeer\@RakNet\@\@UEAAIPEAPEBDPEBHHW4PacketPriority\@\@W4PacketReliability\@\@DUAddressOrGUID\@2\@_NI\@Z
     */
    MCVAPI unsigned int SendList(
        char const**,
        int const*,
        int,
        enum class PacketPriority,
        enum class PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        unsigned int
    );
    /**
     * @symbol ?SendLoopback\@RakPeer\@RakNet\@\@UEAAXPEBDH\@Z
     */
    MCVAPI void SendLoopback(char const*, int);
    /**
     * @symbol ?SendNatTraversalMessage\@RakPeer\@RakNet\@\@UEAAXUSystemAddress\@2\@\@Z
     */
    MCVAPI void SendNatTraversalMessage(struct RakNet::SystemAddress);
    /**
     * @symbol ?SendOutOfBand\@RakPeer\@RakNet\@\@UEAA_NPEBDG0II\@Z
     */
    MCVAPI bool SendOutOfBand(char const*, unsigned short, char const*, unsigned int, unsigned int);
    /**
     * @symbol ?SendTTL\@RakPeer\@RakNet\@\@UEAAXPEBDGHI\@Z
     */
    MCVAPI void SendTTL(char const*, unsigned short, int, unsigned int);
    /**
     * @symbol ?SetIncomingDatagramEventHandler\@RakPeer\@RakNet\@\@UEAAXP6A_NPEAURNS2RecvStruct\@2\@\@Z\@Z
     */
    MCVAPI void SetIncomingDatagramEventHandler(bool(__cdecl*)(struct RakNet::RNS2RecvStruct*));
    /**
     * @symbol ?SetIncomingPassword\@RakPeer\@RakNet\@\@UEAAXPEBDH\@Z
     */
    MCVAPI void SetIncomingPassword(char const*, int);
    /**
     * @symbol ?SetInternalID\@RakPeer\@RakNet\@\@UEAAXUSystemAddress\@2\@H\@Z
     */
    MCVAPI void SetInternalID(struct RakNet::SystemAddress, int);
    /**
     * @symbol ?SetLimitIPConnectionFrequency\@RakPeer\@RakNet\@\@UEAAX_N\@Z
     */
    MCVAPI void SetLimitIPConnectionFrequency(bool);
    /**
     * @symbol ?SetMaximumIncomingConnections\@RakPeer\@RakNet\@\@UEAAXG\@Z
     */
    MCVAPI void SetMaximumIncomingConnections(unsigned short);
    /**
     * @symbol ?SetOccasionalPing\@RakPeer\@RakNet\@\@UEAAX_N\@Z
     */
    MCVAPI void SetOccasionalPing(bool);
    /**
     * @symbol ?SetOfflinePingResponse\@RakPeer\@RakNet\@\@UEAAXPEBDI\@Z
     */
    MCVAPI void SetOfflinePingResponse(char const*, unsigned int);
    /**
     * @symbol ?SetPerConnectionOutgoingBandwidthLimit\@RakPeer\@RakNet\@\@UEAAXI\@Z
     */
    MCVAPI void SetPerConnectionOutgoingBandwidthLimit(unsigned int);
    /**
     * @symbol ?SetSplitMessageProgressInterval\@RakPeer\@RakNet\@\@UEAAXH\@Z
     */
    MCVAPI void SetSplitMessageProgressInterval(int);
    /**
     * @symbol ?SetTimeoutTime\@RakPeer\@RakNet\@\@UEAAXIUSystemAddress\@2\@\@Z
     */
    MCVAPI void SetTimeoutTime(unsigned int, struct RakNet::SystemAddress);
    /**
     * @symbol ?SetUnreliableTimeout\@RakPeer\@RakNet\@\@UEAAXI\@Z
     */
    MCVAPI void SetUnreliableTimeout(unsigned int);
    /**
     * @symbol ?SetUserUpdateThread\@RakPeer\@RakNet\@\@UEAAXP6AXPEAVRakPeerInterface\@2\@PEAX\@Z1\@Z
     */
    MCVAPI void SetUserUpdateThread(void(__cdecl*)(class RakNet::RakPeerInterface*, void*), void*);
    /**
     * @symbol ?Shutdown\@RakPeer\@RakNet\@\@UEAAXIEW4PacketPriority\@\@\@Z
     */
    MCVAPI void Shutdown(unsigned int, unsigned char, enum class PacketPriority);
    /**
     * @symbol ?Startup\@RakPeer\@RakNet\@\@UEAA?AW4StartupResult\@2\@IPEAUSocketDescriptor\@2\@IH\@Z
     */
    MCVAPI enum class RakNet::StartupResult Startup(unsigned int, struct RakNet::SocketDescriptor*, unsigned int, int);
    /**
     * @symbol ?WriteOutOfBandHeader\@RakPeer\@RakNet\@\@UEAAXPEAVBitStream\@2\@\@Z
     */
    MCVAPI void WriteOutOfBandHeader(class RakNet::BitStream*);
    /**
     * @symbol ?resetMyGUID\@RakPeer\@RakNet\@\@UEAAXXZ
     */
    MCVAPI void resetMyGUID();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakPeer();
    /**
     * @symbol ??0RakPeer\@RakNet\@\@QEAA\@XZ
     */
    MCAPI RakPeer();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?AddPacketToProducer\@RakPeer\@RakNet\@\@IEAAXPEAUPacket\@2\@\@Z
     */
    MCAPI void AddPacketToProducer(struct RakNet::Packet*);
    /**
     * @symbol ?AllocPacket\@RakPeer\@RakNet\@\@IEAAPEAUPacket\@2\@IPEAEPEBDI\@Z
     */
    MCAPI struct RakNet::Packet* AllocPacket(unsigned int, unsigned char*, char const*, unsigned int);
    /**
     * @symbol ?AllocPacket\@RakPeer\@RakNet\@\@IEAAPEAUPacket\@2\@IPEBDI\@Z
     */
    MCAPI struct RakNet::Packet* AllocPacket(unsigned int, char const*, unsigned int);
    /**
     * @symbol ?AllowIncomingConnections\@RakPeer\@RakNet\@\@IEBA_NXZ
     */
    MCAPI bool AllowIncomingConnections() const;
    /**
     * @symbol
     * ?AssignSystemAddressToRemoteSystemList\@RakPeer\@RakNet\@\@IEAAPEAURemoteSystemStruct\@12\@USystemAddress\@2\@W4ConnectMode\@312\@PEAVRakNetSocket2\@2\@PEA_NU42\@HURakNetGUID\@2\@_N\@Z
     */
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* AssignSystemAddressToRemoteSystemList(
        struct RakNet::SystemAddress,
        enum class RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        class RakNet::RakNetSocket2*,
        bool*,
        struct RakNet::SystemAddress,
        int,
        struct RakNet::RakNetGUID,
        bool
    );
    /**
     * @symbol
     * ?CallPluginCallbacks\@RakPeer\@RakNet\@\@IEAAXAEAV?$List\@PEAVPluginInterface2\@RakNet\@\@\@DataStructures\@\@PEAUPacket\@2\@\@Z
     */
    MCAPI void
    CallPluginCallbacks(class DataStructures::List<class RakNet::PluginInterface2*>&, struct RakNet::Packet*);
    /**
     * @symbol ?ClearBufferedCommands\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void ClearBufferedCommands();
    /**
     * @symbol ?ClearBufferedPackets\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void ClearBufferedPackets();
    /**
     * @symbol ?ClearRequestedConnectionList\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void ClearRequestedConnectionList();
    /**
     * @symbol ?ClearSocketQueryOutput\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void ClearSocketQueryOutput();
    /**
     * @symbol ?CloseConnectionInternal\@RakPeer\@RakNet\@\@IEAAXAEBUAddressOrGUID\@2\@_N1EW4PacketPriority\@\@\@Z
     */
    MCAPI void
    CloseConnectionInternal(struct RakNet::AddressOrGUID const&, bool, bool, unsigned char, enum class PacketPriority);
    /**
     * @symbol ?DerefAllSockets\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void DerefAllSockets();
    /**
     * @symbol ?DereferenceRemoteSystem\@RakPeer\@RakNet\@\@IEAAXAEBUSystemAddress\@2\@\@Z
     */
    MCAPI void DereferenceRemoteSystem(struct RakNet::SystemAddress const&);
    /**
     * @symbol ?FillIPList\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void FillIPList();
    /**
     * @symbol ?GenerateGUID\@RakPeer\@RakNet\@\@IEAAXXZ
     */
    MCAPI void GenerateGUID();
    /**
     * @symbol ?GetIndexFromSystemAddress\@RakPeer\@RakNet\@\@IEBAHUSystemAddress\@2\@_N\@Z
     */
    MCAPI int GetIndexFromSystemAddress(struct RakNet::SystemAddress, bool) const;
    /**
     * @symbol ?GetRakNetSocketFromUserConnectionSocketIndex\@RakPeer\@RakNet\@\@IEBAII\@Z
     */
    MCAPI unsigned int GetRakNetSocketFromUserConnectionSocketIndex(unsigned int) const;
    /**
     * @symbol ?GetRemoteSystem\@RakPeer\@RakNet\@\@IEBAPEAURemoteSystemStruct\@12\@UAddressOrGUID\@2\@_N1\@Z
     */
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct* GetRemoteSystem(struct RakNet::AddressOrGUID, bool, bool) const;
    /**
     * @symbol
     * ?GetRemoteSystemFromSystemAddress\@RakPeer\@RakNet\@\@IEBAPEAURemoteSystemStruct\@12\@USystemAddress\@2\@_N1\@Z
     */
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
    GetRemoteSystemFromSystemAddress(struct RakNet::SystemAddress, bool, bool) const;
    /**
     * @symbol ?GetRemoteSystemIndex\@RakPeer\@RakNet\@\@IEBAIAEBUSystemAddress\@2\@\@Z
     */
    MCAPI unsigned int GetRemoteSystemIndex(struct RakNet::SystemAddress const&) const;
    /**
     * @symbol ?IsLoopbackAddress\@RakPeer\@RakNet\@\@IEBA_NAEBUAddressOrGUID\@2\@_N\@Z
     */
    MCAPI bool IsLoopbackAddress(struct RakNet::AddressOrGUID const&, bool) const;
    /**
     * @symbol ?NotifyAndFlagForShutdown\@RakPeer\@RakNet\@\@IEAAXUSystemAddress\@2\@_NEW4PacketPriority\@\@\@Z
     */
    MCAPI void NotifyAndFlagForShutdown(struct RakNet::SystemAddress, bool, unsigned char, enum class PacketPriority);
    /**
     * @symbol ?OnConnectedPong\@RakPeer\@RakNet\@\@IEAAX_K0PEAURemoteSystemStruct\@12\@\@Z
     */
    MCAPI void OnConnectedPong(uint64_t, uint64_t, struct RakNet::RakPeer::RemoteSystemStruct*);
    /**
     * @symbol ?OnConnectionRequest\@RakPeer\@RakNet\@\@IEAAXPEAURemoteSystemStruct\@12\@_K\@Z
     */
    MCAPI void OnConnectionRequest(struct RakNet::RakPeer::RemoteSystemStruct*, uint64_t);
    /**
     * @symbol
     * ?ParseConnectionRequestPacket\@RakPeer\@RakNet\@\@IEAAXPEAURemoteSystemStruct\@12\@AEBUSystemAddress\@2\@PEBDH\@Z
     */
    MCAPI void ParseConnectionRequestPacket(
        struct RakNet::RakPeer::RemoteSystemStruct*,
        struct RakNet::SystemAddress const&,
        char const*,
        int
    );
    /**
     * @symbol ?PingInternal\@RakPeer\@RakNet\@\@IEAAXUSystemAddress\@2\@_NW4PacketReliability\@\@\@Z
     */
    MCAPI void PingInternal(struct RakNet::SystemAddress, bool, enum class PacketReliability);
    /**
     * @symbol ?ReferenceRemoteSystem\@RakPeer\@RakNet\@\@IEAAXAEBUSystemAddress\@2\@I\@Z
     */
    MCAPI void ReferenceRemoteSystem(struct RakNet::SystemAddress const&, unsigned int);
    /**
     * @symbol
     * ?SendBuffered\@RakPeer\@RakNet\@\@IEAAXPEBDIW4PacketPriority\@\@W4PacketReliability\@\@DUAddressOrGUID\@2\@_NW4ConnectMode\@RemoteSystemStruct\@12\@I\@Z
     */
    MCAPI void SendBuffered(
        char const*,
        unsigned int,
        enum class PacketPriority,
        enum class PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        enum class RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        unsigned int
    );
    /**
     * @symbol
     * ?SendBufferedList\@RakPeer\@RakNet\@\@IEAAXPEAPEBDPEBHHW4PacketPriority\@\@W4PacketReliability\@\@DUAddressOrGUID\@2\@_NW4ConnectMode\@RemoteSystemStruct\@12\@I\@Z
     */
    MCAPI void SendBufferedList(
        char const**,
        int const*,
        int,
        enum class PacketPriority,
        enum class PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        enum class RakNet::RakPeer::RemoteSystemStruct::ConnectMode,
        unsigned int
    );
    /**
     * @symbol
     * ?SendConnectionRequest\@RakPeer\@RakNet\@\@IEAA?AW4ConnectionAttemptResult\@2\@PEBDG0HPEAUPublicKey\@2\@IIIII\@Z
     */
    MCAPI enum class RakNet::ConnectionAttemptResult SendConnectionRequest(
        char const*,
        unsigned short,
        char const*,
        int,
        struct RakNet::PublicKey*,
        unsigned int,
        unsigned int,
        unsigned int,
        unsigned int,
        unsigned int
    );
    /**
     * @symbol
     * ?SendConnectionRequest\@RakPeer\@RakNet\@\@IEAA?AW4ConnectionAttemptResult\@2\@PEBDG0HPEAUPublicKey\@2\@IIIIIPEAVRakNetSocket2\@2\@\@Z
     */
    MCAPI enum class RakNet::ConnectionAttemptResult
    SendConnectionRequest(char const*, unsigned short, char const*, int, struct RakNet::PublicKey*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, class RakNet::RakNetSocket2*);
    /**
     * @symbol
     * ?SendImmediate\@RakPeer\@RakNet\@\@IEAA_NPEADIW4PacketPriority\@\@W4PacketReliability\@\@DUAddressOrGUID\@2\@_N4_KI\@Z
     */
    MCAPI bool SendImmediate(
        char*,
        unsigned int,
        enum class PacketPriority,
        enum class PacketReliability,
        char,
        struct RakNet::AddressOrGUID,
        bool,
        bool,
        uint64_t,
        unsigned int
    );
    /**
     * @symbol ?ShiftIncomingTimestamp\@RakPeer\@RakNet\@\@IEBAXPEAEAEBUSystemAddress\@2\@\@Z
     */
    MCAPI void ShiftIncomingTimestamp(unsigned char*, struct RakNet::SystemAddress const&) const;
    // NOLINTEND
};

}; // namespace RakNet
