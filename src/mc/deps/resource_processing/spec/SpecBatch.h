#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct SpecBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk72abbb;
    ::ll::UntypedStorage<8, 64> mUnkfa77a2;
    // NOLINTEND

public:
    // prevent constructor by default
    SpecBatch& operator=(SpecBatch const&);
    SpecBatch(SpecBatch const&);
    SpecBatch();
};

} // namespace Bedrock::Resources
