#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct RepositoriesOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc71ff3;
    ::ll::UntypedStorage<8, 64> mUnka9c2bb;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoriesOptions& operator=(RepositoriesOptions const&);
    RepositoriesOptions(RepositoriesOptions const&);
    RepositoriesOptions();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI RepositoriesOptions(::PackCommand::RepositoriesOptions&&);
#endif

    MCNAPI ~RepositoriesOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::PackCommand::RepositoriesOptions&&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
