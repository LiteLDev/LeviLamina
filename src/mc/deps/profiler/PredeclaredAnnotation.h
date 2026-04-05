#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct PredeclaredAnnotation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkead3f3;
    // NOLINTEND

public:
    // prevent constructor by default
    PredeclaredAnnotation& operator=(PredeclaredAnnotation const&);
    PredeclaredAnnotation(PredeclaredAnnotation const&);
    PredeclaredAnnotation();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~PredeclaredAnnotation();
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

} // namespace Bedrock::Profiler::details
