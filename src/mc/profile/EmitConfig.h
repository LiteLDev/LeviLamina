#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct EmitConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk85586f;
    ::ll::UntypedStorage<8, 32> mUnk9f6606;
    ::ll::UntypedStorage<4, 4>  mUnk168ef6;
    // NOLINTEND

public:
    // prevent constructor by default
    EmitConfig& operator=(EmitConfig const&);
    EmitConfig(EmitConfig const&);
    EmitConfig();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~EmitConfig();
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

} // namespace Bedrock::Profiling::Orchestrator
