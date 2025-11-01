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
MCAPI uint ConnectionAttemptLoop(void* arguments);

MCFOLD uint64 GetTime();

MCFOLD uint GetTimeMS();

MCAPI void ProcessNetworkPacket(::RakNet::SystemAddress systemAddress, char const* data, int length, ::RakNet::RakPeer* rakPeer, ::RakNet::RakNetSocket2* rakNetSocket, uint64 timeRead, ::RakNet::BitStream& updateBitStream);

MCAPI bool ProcessOfflineNetworkPacket(::RakNet::SystemAddress systemAddress, char const* data, int length, ::RakNet::RakPeer* rakPeer, ::RakNet::RakNetSocket2* rakNetSocket, bool* isOfflineMessage, uint64 timeRead);

MCAPI uint UpdateNetworkLoop(void* arguments);

MCAPI uint UpdateTCPInterfaceLoop(void* arguments);

MCFOLD void _RakFree_Ex(void* p, char const* file, uint line);

MCFOLD void* _RakMalloc_Ex(uint64 size, char const* file, uint line);

MCAPI void* _RakRealloc_Ex(void* p, uint64 size, char const* file, uint line);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::RakNet::RakNetGUID const& UNASSIGNED_RAKNET_GUID();

MCAPI ::RakNet::SystemAddress const& UNASSIGNED_SYSTEM_ADDRESS();

MCAPI ::std::add_lvalue_reference_t<uint64(*) ()> rak64BitGuidGeneratorOverride();

MCAPI ::std::add_lvalue_reference_t<int(*) (char const*, ...)> rakDebugLogCallback();
// NOLINTEND

}
