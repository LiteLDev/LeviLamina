#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemId;
namespace Bedrock::Profiling { class PerfClock; }
// clang-format on

namespace ECS::Profiling {

class EntitySystemTimeTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk2a397e;
    ::ll::UntypedStorage<4, 4>  mUnkd4db5a;
    ::ll::UntypedStorage<8, 8>  mUnk1b6fe4;
    ::ll::UntypedStorage<8, 24> mUnkbf573c;
    ::ll::UntypedStorage<8, 24> mUnk19dd2d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemTimeTracker& operator=(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~EntitySystemTimeTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling
