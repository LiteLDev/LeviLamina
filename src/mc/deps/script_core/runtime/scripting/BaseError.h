#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkacfaf5;
    ::ll::UntypedStorage<8, 32> mUnk724204;
    ::ll::UntypedStorage<8, 40> mUnk7b9e22;
    ::ll::UntypedStorage<8, 40> mUnk364254;
    ::ll::UntypedStorage<8, 24> mUnka1db66;
    ::ll::UntypedStorage<8, 40> mUnk1599d8;
    ::ll::UntypedStorage<1, 1>  mUnkaf2820;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseError(::Scripting::BaseError const&);

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
    MCNAPI void* $ctor(::Scripting::BaseError const&);

    MCNAPI void* $ctor(::std::string const& name_, ::std::string const& message_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
