#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct Error : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    Error& operator=(Error const&);
    Error();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Error(::Scripting::BaseError const& base);

    MCAPI explicit Error(::std::string const& message_);

    MCAPI Error(::Scripting::Error const&);

    MCAPI ~Error();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::BaseError const& base);

    MCAPI void* $ctor(::std::string const& message_);

    MCAPI void* $ctor(::Scripting::Error const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
