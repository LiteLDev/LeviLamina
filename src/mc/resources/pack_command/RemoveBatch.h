#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct RemoveBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdaed9b;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveBatch& operator=(RemoveBatch const&);
    RemoveBatch(RemoveBatch const&);
    RemoveBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RemoveBatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
