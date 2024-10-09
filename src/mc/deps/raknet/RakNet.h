#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/ConnectionAttemptResult.h"
#include "mc/deps/raknet/ConnectionState.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/deps/raknet/PacketReliability.h"
#include "mc/deps/raknet/RNS2BindResult.h"
#include "mc/deps/raknet/RNS2Type.h"
#include "mc/deps/raknet/RakPeer.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/ReliabilityLayer.h"
#include "mc/deps/raknet/StartupResult.h"
#include "mc/deps/raknet/data_structures/LinkedList.h"
#include "mc/deps/raknet/data_structures/List.h"

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
MCAPI uint ConnectionAttemptLoop(void* arguments);

MCAPI uint64 GetTime();

MCAPI uint GetTimeMS();

MCAPI uint64 GetTimeUS();

MCAPI bool NonNumericHostString(char const* host);

MCAPI void ProcessNetworkPacket(
    struct RakNet::SystemAddress systemAddress,
    char const*                  data,
    int                          length,
    class RakNet::RakPeer*       rakPeer,
    class RakNet::RakNetSocket2* rakNetSocket,
    uint64                       timeRead,
    class RakNet::BitStream&     updateBitStream
);

MCAPI bool ProcessOfflineNetworkPacket(
    struct RakNet::SystemAddress systemAddress,
    char const*                  data,
    int                          length,
    class RakNet::RakPeer*       rakPeer,
    class RakNet::RakNetSocket2* rakNetSocket,
    bool*                        isOfflineMessage,
    uint64                       timeRead
);

MCAPI int SplitPacketChannelComp(ushort const& key, struct RakNet::SplitPacketChannel* const& data);

MCAPI extern struct RakNet::RakNetGUID const UNASSIGNED_RAKNET_GUID;

MCAPI extern struct RakNet::SystemAddress const UNASSIGNED_SYSTEM_ADDRESS;

MCAPI uint UpdateNetworkLoop(void* arguments);

MCAPI uint UpdateTCPInterfaceLoop(void* arguments);

MCAPI void* _DLMallocDirectMMap(uint64 size);

MCAPI void* _DLMallocMMap(uint64 size);

MCAPI int _DLMallocMUnmap(void* p, uint64 size);

MCAPI void _RakFree(void* p);

MCAPI void _RakFree_Ex(void* p, char const* file, uint line);

MCAPI void* _RakMalloc(uint64 size);

MCAPI void* _RakMalloc_Ex(uint64 size, char const* file, uint line);

MCAPI void* _RakRealloc(void* p, uint64 size);

MCAPI void* _RakRealloc_Ex(void* p, uint64 size, char const* file, uint line);
// NOLINTEND

}; // namespace RakNet
