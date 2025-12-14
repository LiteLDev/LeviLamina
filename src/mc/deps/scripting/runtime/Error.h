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
    MCAPI Error(::Scripting::Error const&);

    MCAPI explicit Error(::Scripting::BaseError const& base);

    MCAPI explicit Error(::std::string const& message_);

    MCAPI ~Error();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::Error const&);

    MCFOLD void* $ctor(::Scripting::BaseError const& base);

    MCAPI void* $ctor(::std::string const& message_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
