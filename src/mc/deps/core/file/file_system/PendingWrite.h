#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct PendingWrite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk581f22;
    ::ll::UntypedStorage<1, 1>  mUnkaeb3eb;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingWrite& operator=(PendingWrite const&);
    PendingWrite(PendingWrite const&);
    PendingWrite();
};

} // namespace Core
