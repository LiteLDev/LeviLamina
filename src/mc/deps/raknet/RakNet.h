#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakPeer; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {
/**
 * @symbol ?ConnectionAttemptLoop\@RakNet\@\@YAIPEAX\@Z
 */
MCAPI unsigned int ConnectionAttemptLoop(void*); // NOLINT
/**
 * @symbol ?GetTime\@RakNet\@\@YA_KXZ
 */
MCAPI unsigned __int64 GetTime(); // NOLINT
/**
 * @symbol ?GetTimeMS\@RakNet\@\@YAIXZ
 */
MCAPI unsigned int GetTimeMS(); // NOLINT
/**
 * @symbol ?GetTimeUS\@RakNet\@\@YA_KXZ
 */
MCAPI unsigned __int64 GetTimeUS(); // NOLINT
/**
 * @symbol ?NonNumericHostString\@RakNet\@\@YA_NPEBD\@Z
 */
MCAPI bool NonNumericHostString(char const*); // NOLINT
/**
 * @symbol
 * ?ProcessNetworkPacket\@RakNet\@\@YAXUSystemAddress\@1\@PEBDHPEAVRakPeer\@1\@PEAVRakNetSocket2\@1\@_KAEAVBitStream\@1\@\@Z
 */
MCAPI void
ProcessNetworkPacket(struct RakNet::SystemAddress, char const*, int, class RakNet::RakPeer*, class RakNet::RakNetSocket2*, unsigned __int64, class RakNet::BitStream&); // NOLINT
/**
 * @symbol
 * ?ProcessOfflineNetworkPacket\@RakNet\@\@YA_NUSystemAddress\@1\@PEBDHPEAVRakPeer\@1\@PEAVRakNetSocket2\@1\@PEA_N_K\@Z
 */
MCAPI bool ProcessOfflineNetworkPacket(
    struct RakNet::SystemAddress,
    char const*,
    int,
    class RakNet::RakPeer*,
    class RakNet::RakNetSocket2*,
    bool*,
    unsigned __int64
); // NOLINT
/**
 * @symbol ?SplitPacketChannelComp\@RakNet\@\@YAHAEBGAEBQEAUSplitPacketChannel\@1\@\@Z
 */
MCAPI int SplitPacketChannelComp(unsigned short const&, struct RakNet::SplitPacketChannel* const&); // NOLINT
/**
 * @symbol ?UNASSIGNED_RAKNET_GUID\@RakNet\@\@3URakNetGUID\@1\@B
 */
MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID; // NOLINT
/**
 * @symbol ?UNASSIGNED_SYSTEM_ADDRESS\@RakNet\@\@3USystemAddress\@1\@B
 */
MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS; // NOLINT
/**
 * @symbol ?UpdateNetworkLoop\@RakNet\@\@YAIPEAX\@Z
 */
MCAPI unsigned int UpdateNetworkLoop(void*); // NOLINT
/**
 * @symbol ?UpdateTCPInterfaceLoop\@RakNet\@\@YAIPEAX\@Z
 */
MCAPI unsigned int UpdateTCPInterfaceLoop(void*); // NOLINT
/**
 * @symbol ?_DLMallocDirectMMap\@RakNet\@\@YAPEAX_K\@Z
 */
MCAPI void* _DLMallocDirectMMap(unsigned __int64); // NOLINT
/**
 * @symbol ?_DLMallocMMap\@RakNet\@\@YAPEAX_K\@Z
 */
MCAPI void* _DLMallocMMap(unsigned __int64); // NOLINT
/**
 * @symbol ?_DLMallocMUnmap\@RakNet\@\@YAHPEAX_K\@Z
 */
MCAPI int _DLMallocMUnmap(void*, unsigned __int64); // NOLINT
/**
 * @symbol ?_RakFree\@RakNet\@\@YAXPEAX\@Z
 */
MCAPI void _RakFree(void*); // NOLINT
/**
 * @symbol ?_RakFree_Ex\@RakNet\@\@YAXPEAXPEBDI\@Z
 */
MCAPI void _RakFree_Ex(void*, char const*, unsigned int); // NOLINT
/**
 * @symbol ?_RakMalloc\@RakNet\@\@YAPEAX_K\@Z
 */
MCAPI void* _RakMalloc(unsigned __int64); // NOLINT
/**
 * @symbol ?_RakMalloc_Ex\@RakNet\@\@YAPEAX_KPEBDI\@Z
 */
MCAPI void* _RakMalloc_Ex(unsigned __int64, char const*, unsigned int); // NOLINT
/**
 * @symbol ?_RakRealloc\@RakNet\@\@YAPEAXPEAX_K\@Z
 */
MCAPI void* _RakRealloc(void*, unsigned __int64); // NOLINT
/**
 * @symbol ?_RakRealloc_Ex\@RakNet\@\@YAPEAXPEAX_KPEBDI\@Z
 */
MCAPI void* _RakRealloc_Ex(void*, unsigned __int64, char const*, unsigned int); // NOLINT

}; // namespace RakNet
