/**
 * @file  RakNet.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
        unsigned __int64 g;
        unsigned __int16 systemIndex;

    public:
        bool operator!=(const RakNetGUID& a1) {
            return *this != a1;
        }
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
     * @symbol  ?ConnectionAttemptLoop\@RakNet\@\@YAIPEAX\@Z
     */
    MCAPI unsigned int ConnectionAttemptLoop(void *);
    /**
     * @symbol  ?GetTime\@RakNet\@\@YA_KXZ
     */
    MCAPI unsigned __int64 GetTime();
    /**
     * @symbol  ?GetTimeMS\@RakNet\@\@YAIXZ
     */
    MCAPI unsigned int GetTimeMS();
    /**
     * @symbol  ?GetTimeUS\@RakNet\@\@YA_KXZ
     */
    MCAPI unsigned __int64 GetTimeUS();
    /**
     * @symbol  ?NonNumericHostString\@RakNet\@\@YA_NPEBD\@Z
     */
    MCAPI bool NonNumericHostString(char const *);
    /**
     * @symbol  ?ProcessNetworkPacket\@RakNet\@\@YAXUSystemAddress\@1\@PEBDHPEAVRakPeer\@1\@PEAVRakNetSocket2\@1\@_KAEAVBitStream\@1\@\@Z
     */
    MCAPI void ProcessNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, unsigned __int64, class RakNet::BitStream &);
    /**
     * @symbol  ?ProcessOfflineNetworkPacket\@RakNet\@\@YA_NUSystemAddress\@1\@PEBDHPEAVRakPeer\@1\@PEAVRakNetSocket2\@1\@PEA_N_K\@Z
     */
    MCAPI bool ProcessOfflineNetworkPacket(struct RakNet::SystemAddress, char const *, int, class RakNet::RakPeer *, class RakNet::RakNetSocket2 *, bool *, unsigned __int64);
    /**
     * @symbol  ?SplitPacketChannelComp\@RakNet\@\@YAHAEBGAEBQEAUSplitPacketChannel\@1\@\@Z
     */
    MCAPI int SplitPacketChannelComp(unsigned short const &, struct RakNet::SplitPacketChannel *const &);
    /**
     * @symbol  ?UNASSIGNED_RAKNET_GUID\@RakNet\@\@3URakNetGUID\@1\@B
     */
    MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;
    /**
     * @symbol  ?UNASSIGNED_SYSTEM_ADDRESS\@RakNet\@\@3USystemAddress\@1\@B
     */
    MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;
    /**
     * @symbol  ?UpdateNetworkLoop\@RakNet\@\@YAIPEAX\@Z
     */
    MCAPI unsigned int UpdateNetworkLoop(void *);
    /**
     * @symbol  ?UpdateTCPInterfaceLoop\@RakNet\@\@YAIPEAX\@Z
     */
    MCAPI unsigned int UpdateTCPInterfaceLoop(void *);
    /**
     * @symbol  ?_DLMallocDirectMMap\@RakNet\@\@YAPEAX_K\@Z
     */
    MCAPI void * _DLMallocDirectMMap(unsigned __int64);
    /**
     * @symbol  ?_DLMallocMMap\@RakNet\@\@YAPEAX_K\@Z
     */
    MCAPI void * _DLMallocMMap(unsigned __int64);
    /**
     * @symbol  ?_DLMallocMUnmap\@RakNet\@\@YAHPEAX_K\@Z
     */
    MCAPI int _DLMallocMUnmap(void *, unsigned __int64);
    /**
     * @symbol  ?_RakFree\@RakNet\@\@YAXPEAX\@Z
     */
    MCAPI void _RakFree(void *);
    /**
     * @symbol  ?_RakFree_Ex\@RakNet\@\@YAXPEAXPEBDI\@Z
     */
    MCAPI void _RakFree_Ex(void *, char const *, unsigned int);
    /**
     * @symbol  ?_RakMalloc\@RakNet\@\@YAPEAX_K\@Z
     */
    MCAPI void * _RakMalloc(unsigned __int64);
    /**
     * @symbol  ?_RakMalloc_Ex\@RakNet\@\@YAPEAX_KPEBDI\@Z
     */
    MCAPI void * _RakMalloc_Ex(unsigned __int64, char const *, unsigned int);
    /**
     * @symbol  ?_RakRealloc\@RakNet\@\@YAPEAXPEAX_K\@Z
     */
    MCAPI void * _RakRealloc(void *, unsigned __int64);
    /**
     * @symbol  ?_RakRealloc_Ex\@RakNet\@\@YAPEAXPEAX_KPEBDI\@Z
     */
    MCAPI void * _RakRealloc_Ex(void *, unsigned __int64, char const *, unsigned int);

};