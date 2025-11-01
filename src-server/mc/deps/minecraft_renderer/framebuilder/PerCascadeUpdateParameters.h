#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct PerCascadeUpdateParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd441b0;
    ::ll::UntypedStorage<4, 4> mUnk67f16c;
    // NOLINTEND

public:
    // prevent constructor by default
    PerCascadeUpdateParameters& operator=(PerCascadeUpdateParameters const&);
    PerCascadeUpdateParameters(PerCascadeUpdateParameters const&);
    PerCascadeUpdateParameters();

};

}
