#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/RNS2BindResult.h"
#include "mc/deps/raknet/RNS2Type.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/ReliabilityLayer.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/data_structures/LinkedList.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/resources/PacketPriority.h"
#include "mc/resources/PacketReliability.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class IRNS2_Berkley; }
namespace RakNet { class PluginInterface2; }
namespace RakNet { class RakNetRandom; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakPeer; }
namespace RakNet { class RakPeerInterface; }
namespace RakNet { class RakString; }
namespace RakNet { class ShadowBanList; }
namespace RakNet { class SocketLayerOverride; }
namespace RakNet { class StringCompressor; }
namespace RakNet { class StringTable; }
namespace RakNet { struct AddressOrGUID; }
namespace RakNet { struct InternalPacket; }
namespace RakNet { struct NetworkAdapter; }
namespace RakNet { struct Packet; }
namespace RakNet { struct PublicKey; }
namespace RakNet { struct RNS2RecvStruct; }
namespace RakNet { struct RNS2_BerkleyBindParameters; }
namespace RakNet { struct RNS2_SendParameters; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct RakNetStatistics; }
namespace RakNet { struct SocketDescriptor; }
namespace RakNet { struct SplitPacketChannel; }
namespace RakNet { struct SystemAddress; }
namespace RakNet { struct uint24_t; }
// clang-format on

namespace RakNet {
// NOLINTBEGIN
// symbol: ?ConnectionAttemptLoop@RakNet@@YAIPEAX@Z
MCAPI uint ConnectionAttemptLoop(void* arguments);

// symbol: ?GetTime@RakNet@@YA_KXZ
MCAPI uint64 GetTime();

// symbol: ?GetTimeMS@RakNet@@YAIXZ
MCAPI uint GetTimeMS();

// symbol: ?GetTimeUS@RakNet@@YA_KXZ
MCAPI uint64 GetTimeUS();

// symbol: ?NonNumericHostString@RakNet@@YA_NPEBD@Z
MCAPI bool NonNumericHostString(char const* host);

// symbol: ?ProcessNetworkPacket@RakNet@@YAXUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@_KAEAVBitStream@1@@Z
MCAPI void ProcessNetworkPacket(
    struct RakNet::SystemAddress systemAddress,
    char const*                  data,
    int                          length,
    class RakNet::RakPeer*       rakPeer,
    class RakNet::RakNetSocket2* rakNetSocket,
    uint64                       timeRead,
    class RakNet::BitStream&     updateBitStream
);

// symbol: ?ProcessOfflineNetworkPacket@RakNet@@YA_NUSystemAddress@1@PEBDHPEAVRakPeer@1@PEAVRakNetSocket2@1@PEA_N_K@Z
MCAPI bool ProcessOfflineNetworkPacket(
    struct RakNet::SystemAddress systemAddress,
    char const*                  data,
    int                          length,
    class RakNet::RakPeer*       rakPeer,
    class RakNet::RakNetSocket2* rakNetSocket,
    bool*                        isOfflineMessage,
    uint64                       timeRead
);

// symbol: ?SplitPacketChannelComp@RakNet@@YAHAEBGAEBQEAUSplitPacketChannel@1@@Z
MCAPI int SplitPacketChannelComp(ushort const& key, struct RakNet::SplitPacketChannel* const& data);

// symbol: ?UNASSIGNED_RAKNET_GUID@RakNet@@3URakNetGUID@1@B
MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;

// symbol: ?UNASSIGNED_SYSTEM_ADDRESS@RakNet@@3USystemAddress@1@B
MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;

// symbol: ?UpdateNetworkLoop@RakNet@@YAIPEAX@Z
MCAPI uint UpdateNetworkLoop(void* arguments);

// symbol: ?UpdateTCPInterfaceLoop@RakNet@@YAIPEAX@Z
MCAPI uint UpdateTCPInterfaceLoop(void* arguments);

// symbol: ?_DLMallocDirectMMap@RakNet@@YAPEAX_K@Z
MCAPI void* _DLMallocDirectMMap(uint64 size);

// symbol: ?_DLMallocMMap@RakNet@@YAPEAX_K@Z
MCAPI void* _DLMallocMMap(uint64 size);

// symbol: ?_DLMallocMUnmap@RakNet@@YAHPEAX_K@Z
MCAPI int _DLMallocMUnmap(void* p, uint64 size);

// symbol: ?_RakFree@RakNet@@YAXPEAX@Z
MCAPI void _RakFree(void* p);

// symbol: ?_RakFree_Ex@RakNet@@YAXPEAXPEBDI@Z
MCAPI void _RakFree_Ex(void* p, char const* file, uint line);

// symbol: ?_RakMalloc@RakNet@@YAPEAX_K@Z
MCAPI void* _RakMalloc(uint64 size);

// symbol: ?_RakMalloc_Ex@RakNet@@YAPEAX_KPEBDI@Z
MCAPI void* _RakMalloc_Ex(uint64 size, char const* file, uint line);

// symbol: ?_RakRealloc@RakNet@@YAPEAXPEAX_K@Z
MCAPI void* _RakRealloc(void* p, uint64 size);

// symbol: ?_RakRealloc_Ex@RakNet@@YAPEAXPEAX_KPEBDI@Z
MCAPI void* _RakRealloc_Ex(void* p, uint64 size, char const* file, uint line);
// NOLINTEND

}; // namespace RakNet
