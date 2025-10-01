#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RepositoryLoading {

struct ModificationTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkd5927b;
    ::ll::UntypedStorage<8, 24> mUnkb8ebed;
    ::ll::UntypedStorage<8, 96> mUnk71e762;
    // NOLINTEND

public:
    // prevent constructor by default
    ModificationTaskData& operator=(ModificationTaskData const&);
    ModificationTaskData(ModificationTaskData const&);
    ModificationTaskData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ModificationTaskData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace RepositoryLoading
