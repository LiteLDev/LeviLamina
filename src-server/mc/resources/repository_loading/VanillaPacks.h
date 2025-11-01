#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RepositoryLoading {

struct VanillaPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk557bfa;
    ::ll::UntypedStorage<8, 16> mUnk7981ef;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaPacks& operator=(VanillaPacks const&);
    VanillaPacks(VanillaPacks const&);
    VanillaPacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VanillaPacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace RepositoryLoading
