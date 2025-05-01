#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"
#include "mc/deps/scripting/runtime/InvalidArgumentErrorType.h"

namespace Scripting {

struct InvalidArgumentError : public ::Scripting::Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkef90d9;
    ::ll::UntypedStorage<4, 4> mUnk90d964;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidArgumentError& operator=(InvalidArgumentError const&);
    InvalidArgumentError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvalidArgumentError(::Scripting::InvalidArgumentError const&);

    MCNAPI InvalidArgumentError(::std::string const& message_, int index_);

    MCNAPI InvalidArgumentError(::std::string const& message_, ::Scripting::InvalidArgumentErrorType type_, int index_);

    MCNAPI ~InvalidArgumentError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::InvalidArgumentError const&);

    MCNAPI void* $ctor(::std::string const& message_, int index_);

    MCNAPI void* $ctor(::std::string const& message_, ::Scripting::InvalidArgumentErrorType type_, int index_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
