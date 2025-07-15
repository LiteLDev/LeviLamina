#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct CallStackEntry; }
// clang-format on

namespace Scripting {

struct BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                              name;
    ::ll::TypedStorage<8, 32, ::std::string>                              message;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             sourceMapDebugId;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::CallStackEntry>> mCallStack;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             mCallStackStr;
    ::ll::TypedStorage<1, 1, bool>                                        throwAsString;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseError(BaseError const&);
    BaseError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseError(::Scripting::BaseError&&);

    MCAPI ::Scripting::BaseError& operator=(::Scripting::BaseError&&);

    MCAPI ::Scripting::BaseError& operator=(::Scripting::BaseError const&);

    MCAPI void setCallStack(::std::string _backtrace);

    MCAPI ::std::string toString() const;

    MCAPI ~BaseError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::BaseError&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
