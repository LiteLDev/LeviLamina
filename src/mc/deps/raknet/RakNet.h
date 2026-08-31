#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {
// functions
// NOLINTBEGIN
MCAPI uint64 GetTime();

MCAPI uint UpdateTCPInterfaceLoop(void* arguments);

MCAPI void _RakFree_Ex(void* p, char const* file, uint line);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::RakNet::RakNetGUID const& UNASSIGNED_RAKNET_GUID();

MCAPI ::RakNet::SystemAddress const& UNASSIGNED_SYSTEM_ADDRESS();

MCAPI ::std::add_lvalue_reference_t<uint64 (*)()> rak64BitGuidGeneratorOverride();

MCAPI ::std::add_lvalue_reference_t<int (*)(char const*, ...)> rakDebugLogCallback();
// NOLINTEND

} // namespace RakNet
