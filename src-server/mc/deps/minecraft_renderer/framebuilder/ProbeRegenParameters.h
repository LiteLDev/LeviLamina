#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct ProbeRegenParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 20> mUnk70c1b1;
    ::ll::UntypedStorage<4, 4>  mUnk252bec;
    ::ll::UntypedStorage<4, 4>  mUnk226f82;
    ::ll::UntypedStorage<4, 4>  mUnka8b851;
    ::ll::UntypedStorage<4, 4>  mUnkc408f4;
    ::ll::UntypedStorage<4, 4>  mUnkafe6e8;
    ::ll::UntypedStorage<1, 1>  mUnk3a7ce2;
    // NOLINTEND

public:
    // prevent constructor by default
    ProbeRegenParameters& operator=(ProbeRegenParameters const&);
    ProbeRegenParameters(ProbeRegenParameters const&);
    ProbeRegenParameters();
};

} // namespace mce::framebuilder
