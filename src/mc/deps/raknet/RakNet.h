#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class BitStream; }
namespace RakNet { class RakNetSocket2; }
namespace RakNet { class RakPeer; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {
// functions
// NOLINTBEGIN
MCNAPI uint ConnectionAttemptLoop(void* arguments);

MCNAPI uint64 GetTime();

MCNAPI uint GetTimeMS();

MCNAPI void ProcessNetworkPacket(
    ::RakNet::SystemAddress  systemAddress,
    char const*              data,
    int                      length,
    ::RakNet::RakPeer*       rakPeer,
    ::RakNet::RakNetSocket2* rakNetSocket,
    uint64                   timeRead,
    ::RakNet::BitStream&     updateBitStream
);

MCNAPI bool ProcessOfflineNetworkPacket(
    ::RakNet::SystemAddress  systemAddress,
    char const*              data,
    int                      length,
    ::RakNet::RakPeer*       rakPeer,
    ::RakNet::RakNetSocket2* rakNetSocket,
    bool*                    isOfflineMessage,
    uint64                   timeRead
);

MCNAPI uint UpdateNetworkLoop(void* arguments);

MCNAPI uint UpdateTCPInterfaceLoop(void* arguments);

MCNAPI void _RakFree_Ex(void* p, char const* file, uint line);

MCNAPI void* _RakMalloc_Ex(uint64 size, char const* file, uint line);

MCNAPI void* _RakRealloc_Ex(void* p, uint64 size, char const* file, uint line);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::RakNet::RakNetGUID const& UNASSIGNED_RAKNET_GUID();

MCAPI ::RakNet::SystemAddress const& UNASSIGNED_SYSTEM_ADDRESS();

MCAPI ::std::add_lvalue_reference_t<uint64 (*)()> rak64BitGuidGeneratorOverride();

MCAPI ::std::add_lvalue_reference_t<int (*)(char const*, ...)> rakDebugLogCallback();
// NOLINTEND

} // namespace RakNet
