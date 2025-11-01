#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

struct MutexShim {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk459236;
    ::ll::UntypedStorage<8, 64> mUnk39b827;
    // NOLINTEND

public:
    // prevent constructor by default
    MutexShim& operator=(MutexShim const&);
    MutexShim(MutexShim const&);
    MutexShim();
};

} // namespace brstd::detail
