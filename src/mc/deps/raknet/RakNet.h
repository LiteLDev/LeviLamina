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
MCNAPI uint64 GetTime();

MCNAPI uint UpdateTCPInterfaceLoop(void* arguments);

MCNAPI void _RakFree_Ex(void* p, char const* file, uint line);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::RakNet::RakNetGUID const& UNASSIGNED_RAKNET_GUID();

MCAPI ::RakNet::SystemAddress const& UNASSIGNED_SYSTEM_ADDRESS();

MCNAPI ::std::add_lvalue_reference_t<uint64 (*)()> rak64BitGuidGeneratorOverride();

MCNAPI ::std::add_lvalue_reference_t<int (*)(char const*, ...)> rakDebugLogCallback();
// NOLINTEND

} // namespace RakNet
