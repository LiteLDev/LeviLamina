#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"
#include "mc/deps/script_core/runtime/scripting/InvalidArgumentErrorType.h"

namespace Scripting {

struct InvalidArgumentError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkef90d9;
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
    MCNAPI InvalidArgumentError(::std::string const& argTypeName, int index_);

    MCNAPI
    InvalidArgumentError(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& argTypeName, int index_);

    MCNAPI void* $ctor(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);
    // NOLINTEND
};

} // namespace Scripting
