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
    MCNAPI explicit Error(::Scripting::BaseError const& base);

    MCNAPI explicit Error(::std::string const& message_);

    MCNAPI Error(::Scripting::Error const&);

    MCNAPI ~Error();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::BaseError const& base);

    MCNAPI void* $ctor(::std::string const& message_);

    MCNAPI void* $ctor(::Scripting::Error const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
