#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct RepositoriesOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc71ff3;
    ::ll::UntypedStorage<8, 64> mUnk720490;
    // NOLINTEND

public:
    // prevent constructor by default
    RepositoriesOptions& operator=(RepositoriesOptions const&);
    RepositoriesOptions(RepositoriesOptions const&);
    RepositoriesOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RepositoriesOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::PackCommand::RepositoriesOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
