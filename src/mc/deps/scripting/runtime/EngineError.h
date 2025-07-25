#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct EngineError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    EngineError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EngineError(::std::string const& message);

    MCAPI ~EngineError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
