#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StructureKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd0a4ca;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureKey& operator=(StructureKey const&);
    StructureKey(StructureKey const&);
    StructureKey();
};

} // namespace br
