#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct FlushedTransactions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc279ee;
    ::ll::UntypedStorage<8, 24> mUnk6cd0fd;
    // NOLINTEND

public:
    // prevent constructor by default
    FlushedTransactions& operator=(FlushedTransactions const&);
    FlushedTransactions(FlushedTransactions const&);
    FlushedTransactions();
};

} // namespace mce
