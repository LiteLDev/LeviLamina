#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkff4b79;
    ::ll::UntypedStorage<8, 32> mUnk13ff88;
    ::ll::UntypedStorage<8, 40> mUnk1622be;
    ::ll::UntypedStorage<8, 24> mUnk163284;
    ::ll::UntypedStorage<8, 40> mUnk4c53c7;
    ::ll::UntypedStorage<1, 1>  mUnk1bf48e;
    // NOLINTEND

public:
    // prevent constructor by default
    Error();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Error(::Scripting::Error&&);

    MCNAPI Error(::Scripting::Error const&);

    MCNAPI explicit Error(::std::string const& message_);

    MCNAPI ::Scripting::Error& operator=(::Scripting::Error const&);

    MCNAPI ::Scripting::Error& operator=(::Scripting::Error&&);

    MCNAPI void setCallStack(::std::string _backtrace);

    MCNAPI ::std::string toString() const;

    MCNAPI ~Error();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::Error&&);

    MCNAPI void* $ctor(::Scripting::Error const&);

    MCNAPI void* $ctor(::std::string const& message_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
