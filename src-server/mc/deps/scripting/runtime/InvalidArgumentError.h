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
    ::ll::TypedStorage<1, 1, ::Scripting::InvalidArgumentErrorType> type;
    ::ll::TypedStorage<4, 4, int> index;
    // NOLINTEND

public:
    // prevent constructor by default
    InvalidArgumentError& operator=(InvalidArgumentError const&);
    InvalidArgumentError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InvalidArgumentError(::Scripting::InvalidArgumentError const&);

    MCAPI InvalidArgumentError(::std::string const& argTypeName, int index_);

    MCAPI InvalidArgumentError(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);

    MCAPI ~InvalidArgumentError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();

    MCAPI static ::Scripting::EnumBinding bindEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::InvalidArgumentError const&);

    MCAPI void* $ctor(::std::string const& argTypeName, int index_);

    MCAPI void* $ctor(::std::string const& argTypeName, ::Scripting::InvalidArgumentErrorType type_, int index_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
