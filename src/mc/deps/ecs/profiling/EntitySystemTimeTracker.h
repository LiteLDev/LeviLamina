#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemId;
namespace Bedrock::Profiling { class PerfClock; }
namespace ECS::Profiling { class IEntityTrackingSheet; }
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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    EntitySystemTimeTracker& operator=(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    EntitySystemTimeTracker& operator=(EntitySystemTimeTracker const&);
    EntitySystemTimeTracker(EntitySystemTimeTracker const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI EntitySystemTimeTracker();

    MCNAPI ::Bedrock::NonOwnerPointer<::ECS::Profiling::IEntityTrackingSheet const> getTrackingSheet() const;

    MCNAPI ~EntitySystemTimeTracker();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace ECS::Profiling
