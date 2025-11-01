#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct BufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk347f82;
    ::ll::UntypedStorage<4, 4> mUnk184a7d;
    // NOLINTEND

public:
    // prevent constructor by default
    BufferDescription& operator=(BufferDescription const&);
    BufferDescription(BufferDescription const&);
    BufferDescription();
};

} // namespace cg
