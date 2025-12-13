#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"
#include "mc/deps/scripting/runtime/InvalidArgumentErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
// clang-format on

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
    InvalidArgumentError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InvalidArgumentError(::Scripting::InvalidArgumentError const&);

    MCNAPI InvalidArgumentError(::std::string const& argTypeName, int index_);

    MCNAPI
    InvalidArgumentError(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);

    MCNAPI ~InvalidArgumentError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::InvalidArgumentError const&);

    MCNAPI void* $ctor(::std::string const& argTypeName, int index_);

    MCNAPI void* $ctor(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
