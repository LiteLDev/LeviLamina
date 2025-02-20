#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkff4b79;
    ::ll::UntypedStorage<8, 32> mUnk13ff88;
    ::ll::UntypedStorage<8, 32> mUnkf70731;
    ::ll::UntypedStorage<1, 1>  mUnk1bf48e;
    // NOLINTEND

public:
    // prevent constructor by default
    Error();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Error(::Scripting::Error const&);

    MCAPI explicit Error(::std::string const& message_);

    MCAPI ::Scripting::Error& operator=(::Scripting::Error const&);

    MCAPI ::Scripting::Error& operator=(::Scripting::Error&&);

    MCAPI ::std::string toString() const;

    MCAPI ~Error();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::Error const&);

    MCAPI void* $ctor(::std::string const& message_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
