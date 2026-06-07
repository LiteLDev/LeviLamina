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
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             mPackName;
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::CallStackEntry>> mCallStack;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>             mCallStackStr;
    ::ll::TypedStorage<1, 1, bool>                                        throwAsString;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseError(::Scripting::BaseError const& base);

    MCAPI BaseError(::std::string const& name_, ::std::string const& message_);

    MCFOLD ::std::vector<::Scripting::CallStackEntry> const& getCallStack() const;

    MCFOLD ::std::optional<::std::string> const& getCallStackStr() const;

    MCAPI ::std::optional<::std::string_view> const getPackName() const;

    MCAPI ::Scripting::BaseError& operator=(::Scripting::BaseError&&);

    MCAPI ::Scripting::BaseError& operator=(::Scripting::BaseError const&);

    MCAPI void setCallStack(::std::string _backtrace);

    MCAPI void setPackName(::std::string const& packName);

    MCAPI ::std::string toString() const;

    MCAPI ~BaseError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::BaseError const& base);

    MCAPI void* $ctor(::std::string const& name_, ::std::string const& message_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
