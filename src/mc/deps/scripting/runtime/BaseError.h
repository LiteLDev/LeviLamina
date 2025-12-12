#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk5972f5;
    ::ll::UntypedStorage<8, 32> mUnkb897e7;
    ::ll::UntypedStorage<8, 40> mUnk8466b0;
    ::ll::UntypedStorage<8, 24> mUnk3003b3;
    ::ll::UntypedStorage<8, 40> mUnkc6a8a2;
    ::ll::UntypedStorage<1, 1>  mUnkaf2820;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseError(BaseError const&);
    BaseError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseError(::Scripting::BaseError&&);

    MCNAPI BaseError(::std::string const& name_, ::std::string const& message_);

    MCNAPI ::Scripting::BaseError& operator=(::Scripting::BaseError&&);

    MCNAPI ::Scripting::BaseError& operator=(::Scripting::BaseError const&);

    MCNAPI void setCallStack(::std::string _backtrace);

    MCNAPI ::std::string toString() const;

    MCNAPI ~BaseError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::BaseError&&);

    MCNAPI void* $ctor(::std::string const& name_, ::std::string const& message_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
