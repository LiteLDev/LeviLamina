#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct IRuntimeMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk68c916;
    // NOLINTEND

public:
    // prevent constructor by default
    IRuntimeMetadata& operator=(IRuntimeMetadata const&);
    IRuntimeMetadata(IRuntimeMetadata const&);
    IRuntimeMetadata();
};

} // namespace Scripting
