/**
 * @file  MC/RakNet.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class NetworkIdentifier;
#undef BEFORE_EXTRA

/**
 * @brief MC namespace RakNet.
 *
 */
namespace RakNet {

#define AFTER_EXTRA
// Add Member There
    enum class StartupResult;
    class RakNetSocket2;
    struct SplitPacketChannel;
    class BitStream;
    struct Packet;
    class RakNetSocket2;
    class RakPeerInterface;
    class SimpleMutex;
    struct SocketDescriptor;
    struct SplitPacketChannel;

    struct SystemAddress {
        char filler[17 * 8]; // uncertain?
        MCAPI const char* ToString(bool, char) const;
    };
    struct RakNetGUID {
        uint64_t unk;
        short unk8;
    };
    struct AddressOrGUID {
        RakNetGUID guid;
        SystemAddress adr;
    };

    class RakPeer {
    public:
        RakPeer(RakPeer const&) = delete;
        RakPeer(RakPeer&&) = delete;
        SystemAddress getAdr(NetworkIdentifier const& ni) {
            RakNetGUID const& guid = dAccess<RakNetGUID>(&ni, 8);
            return RakPeer::GetSystemAddressFromGuid(guid);
        }
        MCAPI virtual SystemAddress GetSystemAddressFromGuid(struct RakNet::RakNetGUID) const;
        MCAPI virtual int GetAveragePing(struct RakNet::AddressOrGUID);
        MCAPI virtual int GetLastPing(struct RakNet::AddressOrGUID) const;
        MCAPI virtual int GetLowestPing(struct RakNet::AddressOrGUID) const;
    };
#undef AFTER_EXTRA
    /**
     * @hash   900928421
     * @symbol ?ConnectionAttemptLoop@RakNet@@YAIPEAX@Z
     */
    MCAPI unsigned int ConnectionAttemptLoop(void *);
    /**
     * @hash   -1517085360
     * @symbol ?GetTime@RakNet@@YA_KXZ
     */
    MCAPI unsigned __int64 GetTime();
    /**
     * @hash   1769735547
     * @symbol ?GetTimeMS@RakNet@@YAIXZ
     */
    MCAPI unsigned int GetTimeMS();
    /**
     * @hash   -155509252
     * @symbol ?GetTimeUS@RakNet@@YA_KXZ
     */
    MCAPI unsigned __int64 GetTimeUS();
    /**
     * @hash   -621520919
     * @symbol ?NonNumericHostString@RakNet@@YA_NPEBD@Z
     */
    MCAPI bool NonNumericHostString(char const *);
    /**
     * @hash   313386559
     * @symbol ?ProcessNetworkPacket@RakNet@@YAXUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@_KAEAVBitStream@1@@Z
     */
    MCAPI void ProcessNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, unsigned __int64, class RakNet::BitStream &);
    /**
     * @hash   317242646
     * @symbol ?ProcessOfflineNetworkPacket@RakNet@@YA_NUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@PEA_N_K@Z
     */
    MCAPI bool ProcessOfflineNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, bool *, unsigned __int64);
    /**
     * @hash   -1035448350
     * @symbol ?SplitPacketChannelComp@RakNet@@YAHAEBGAEBQEAUSplitPacketChannel@1@@Z
     */
    MCAPI int SplitPacketChannelComp(unsigned short const &, struct RakNet::SplitPacketChannel *const &);
    /**
     * @hash   262909303
     * @symbol ?UNASSIGNED_RAKNET_GUID@RakNet@@3URakNetGUID@1@B
     */
    MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;
    /**
     * @hash   405832985
     * @symbol ?UNASSIGNED_SYSTEM_ADDRESS@RakNet@@3USystemAddress@1@B
     */
    MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;
    /**
     * @hash   612618969
     * @symbol ?UpdateNetworkLoop@RakNet@@YAIPEAX@Z
     */
    MCAPI unsigned int UpdateNetworkLoop(void *);
    /**
     * @hash   1964141523
     * @symbol ?UpdateTCPInterfaceLoop@RakNet@@YAIPEAX@Z
     */
    MCAPI unsigned int UpdateTCPInterfaceLoop(void *);
    /**
     * @hash   -1044769018
     * @symbol ?_DLMallocDirectMMap@RakNet@@YAPEAX_K@Z
     */
    MCAPI void * _DLMallocDirectMMap(unsigned __int64);
    /**
     * @hash   1629211814
     * @symbol ?_DLMallocMMap@RakNet@@YAPEAX_K@Z
     */
    MCAPI void * _DLMallocMMap(unsigned __int64);
    /**
     * @hash   270763777
     * @symbol ?_DLMallocMUnmap@RakNet@@YAHPEAX_K@Z
     */
    MCAPI int _DLMallocMUnmap(void *, unsigned __int64);
    /**
     * @hash   856240492
     * @symbol ?_RakFree@RakNet@@YAXPEAX@Z
     */
    MCAPI void _RakFree(void *);
    /**
     * @hash   -113174635
     * @symbol ?_RakFree_Ex@RakNet@@YAXPEAXPEBDI@Z
     */
    MCAPI void _RakFree_Ex(void *, char const *, unsigned int);
    /**
     * @hash   1863966564
     * @symbol ?_RakMalloc@RakNet@@YAPEAX_K@Z
     */
    MCAPI void * _RakMalloc(unsigned __int64);
    /**
     * @hash   1124324973
     * @symbol ?_RakMalloc_Ex@RakNet@@YAPEAX_KPEBDI@Z
     */
    MCAPI void * _RakMalloc_Ex(unsigned __int64, char const *, unsigned int);
    /**
     * @hash   -1421624508
     * @symbol ?_RakRealloc@RakNet@@YAPEAXPEAX_K@Z
     */
    MCAPI void * _RakRealloc(void *, unsigned __int64);
    /**
     * @hash   1621801461
     * @symbol ?_RakRealloc_Ex@RakNet@@YAPEAXPEAX_KPEBDI@Z
     */
    MCAPI void * _RakRealloc_Ex(void *, unsigned __int64, char const *, unsigned int);

};