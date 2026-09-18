#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class DeviceIdManager; }
namespace Bedrock { struct ChunkScoringContext; }
class IClientInstance;
// clang-format on

namespace Bedrock {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCAPI ::std::unique_ptr<::Bedrock::DeviceIdManager> _createDefaultDeviceIdManager();
#endif

#ifdef LL_PLAT_C
MCAPI void initializeGameCoreCrashProcessing();

MCAPI ::Bedrock::ChunkScoringContext makeChunkScoringContext(::IClientInstance const& client);
#endif
// NOLINTEND

} // namespace Bedrock
