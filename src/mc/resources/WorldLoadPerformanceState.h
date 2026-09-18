#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FrameAnomalyDetector;
class ResourcePackStack;
namespace Bedrock::Resources { struct WorldLoadPerformanceCacheState; }
class IWorldLoadPerformanceEventing;
// clang-format on

namespace Bedrock::Resources {

class WorldLoadPerformanceState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 856> mUnkeb27c7;
    ::ll::UntypedStorage<8, 16>  mUnkf31a57;
#ifdef LL_PLAT_S
    ::ll::UntypedStorage<1, 8>  mUnk46be9c;
    ::ll::UntypedStorage<1, 64> mUnka6fd35;
#else // LL_PLAT_C
    ::ll::UntypedStorage<1, 1>  mUnk46be9c;
    ::ll::UntypedStorage<8, 64> mUnka6fd35;
#endif
    ::ll::UntypedStorage<8, 8>  mUnk9d07da;
    ::ll::UntypedStorage<8, 8>  mUnk5fcae2;
    ::ll::UntypedStorage<1, 1>  mUnkcb9a28;
    ::ll::UntypedStorage<1, 1>  mUnk87a8c3;
    ::ll::UntypedStorage<1, 1>  mUnk4fac44;
    ::ll::UntypedStorage<1, 1>  mUnk54cb41;
    ::ll::UntypedStorage<4, 4>  mUnkeb723d;
    ::ll::UntypedStorage<4, 4>  mUnkb405c2;
    ::ll::UntypedStorage<8, 24> mUnkb7035d;
    ::ll::UntypedStorage<8, 16> mUnkb74e7a;
    ::ll::UntypedStorage<8, 16> mUnkb94427;
    ::ll::UntypedStorage<8, 16> mUnk39ecea;
    ::ll::UntypedStorage<1, 1>  mUnka13064;
    ::ll::UntypedStorage<4, 4>  mUnk32c715;
    ::ll::UntypedStorage<4, 4>  mUnk95effa;
    ::ll::UntypedStorage<4, 4>  mUnkecdf3e;
    ::ll::UntypedStorage<8, 8>  mUnk262524;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformanceState& operator=(WorldLoadPerformanceState const&);
    WorldLoadPerformanceState(WorldLoadPerformanceState const&);
    WorldLoadPerformanceState();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Bedrock::Resources::WorldLoadPerformanceCacheState
    buildCacheState(uint64 processUptimeInMs, ::std::string const& packStackHash) const;

    MCNAPI void endContentLoadBeginResourceProcessingPhase();

    MCNAPI void fireFailed(
        ::IWorldLoadPerformanceEventing& eventing,
        ::ResourcePackStack const&       packStack,
        uint64                           processUptimeInMs,
        uint64                           processUsedInB
    );

    MCNAPI void onResourcesReady(::ResourcePackStack const& packStack);

    MCNAPI void sampleMemory();

    MCNAPI void setFrameAnomalyDetector(::Bedrock::NonOwnerPointer<::FrameAnomalyDetector> frameAnomalyDetector);

    MCNAPI void tryFireSuccess(
        ::IWorldLoadPerformanceEventing& eventing,
        ::ResourcePackStack const&       packStack,
        uint64                           processUptimeInMs,
        uint64                           processUsedInB,
        bool                             hasLocalPlayer
    );
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
