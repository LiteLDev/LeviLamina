#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct SpecSlice {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka4ca6a;
    ::ll::UntypedStorage<4, 4>  mUnkbee977;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecSlice& operator=(SpecSlice const&);
    SpecSlice(SpecSlice const&);
    SpecSlice();
};

} // namespace Bedrock::Resources
