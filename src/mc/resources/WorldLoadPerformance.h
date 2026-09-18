#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/WorldLoadPerformanceResult.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
namespace Bedrock::Resources { struct WorldLoadPerformanceData; }
class IWorldLoadPerformanceEventing;
// clang-format on

namespace Bedrock::Resources {

class WorldLoadPerformance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 528> mUnkbcdf20;
    ::ll::UntypedStorage<8, 8>   mUnkac9154;
    ::ll::UntypedStorage<8, 24>  mUnkbc46df;
    ::ll::UntypedStorage<1, 1>   mUnkad22d9;
    ::ll::UntypedStorage<8, 8>   mUnk95cbab;
    ::ll::UntypedStorage<8, 8>   mUnk18e921;
    ::ll::UntypedStorage<4, 4>   mUnkb43a55;
    ::ll::UntypedStorage<8, 24>  mUnk506314;
    ::ll::UntypedStorage<8, 8>   mUnk12dd52;
    ::ll::UntypedStorage<8, 8>   mUnk558418;
    ::ll::UntypedStorage<1, 1>   mUnka5d41a;
    ::ll::UntypedStorage<1, 1>   mUnk3810ab;
    ::ll::UntypedStorage<8, 8>   mUnk193b04;
    ::ll::UntypedStorage<8, 8>   mUnk2848c3;
    ::ll::UntypedStorage<8, 8>   mUnk84c891;
    ::ll::UntypedStorage<8, 40>  mUnk16374e;
    ::ll::UntypedStorage<8, 40>  mUnk50230e;
    ::ll::UntypedStorage<8, 40>  mUnk67e2be;
    ::ll::UntypedStorage<8, 40>  mUnk8351e0;
    ::ll::UntypedStorage<1, 1>   mUnked1938;
    ::ll::UntypedStorage<8, 8>   mUnk2d50c7;
    ::ll::UntypedStorage<8, 8>   mUnkdda6b0;
    ::ll::UntypedStorage<8, 8>   mUnk2698e0;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldLoadPerformance& operator=(WorldLoadPerformance const&);
    WorldLoadPerformance(WorldLoadPerformance const&);
    WorldLoadPerformance();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void begin(::std::chrono::steady_clock::time_point sessionStart);

    MCNAPI ::std::string const& computePackStackHash();

    MCNAPI ::Bedrock::Resources::WorldLoadPerformanceData const&
    finishAndFire(::IWorldLoadPerformanceEventing& eventing, ::Bedrock::Resources::WorldLoadPerformanceResult result);

    MCNAPI void recordPack(::PackInstance const& pack);
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
