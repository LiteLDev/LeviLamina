#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ResourceValidatorDebugTraits.h"
#include "mc/deps/core/checked_resource_service/ValidityCheckType.h"

namespace mce {

class PerFrameHandleTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk277877;
    ::ll::UntypedStorage<1, 1> mUnkcea32a;
    // NOLINTEND

public:
    // prevent constructor by default
    PerFrameHandleTracker& operator=(PerFrameHandleTracker const&);
    PerFrameHandleTracker(PerFrameHandleTracker const&);
    PerFrameHandleTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::tuple<bool, bool> Validate(::mce::ValidityCheckType validityCheckType) const;
    // NOLINTEND
};

} // namespace mce
