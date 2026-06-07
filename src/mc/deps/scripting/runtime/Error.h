#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct Error : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    Error();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Error(::Scripting::BaseError const& base);

    MCAPI explicit Error(::std::string const& message_);

    MCFOLD void overrideName(::std::string const& name_);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::BaseError const& base);

    MCAPI void* $ctor(::std::string const& message_);
    // NOLINTEND
};

} // namespace Scripting
