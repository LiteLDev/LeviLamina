#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

namespace Scripting {

struct InvalidArgumentError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk90d964;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidArgumentError& operator=(InvalidArgumentError const&);
    InvalidArgumentError(InvalidArgumentError const&);
    InvalidArgumentError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InvalidArgumentError(::std::string const& message_, int index_);

    MCAPI ~InvalidArgumentError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& message_, int index_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
