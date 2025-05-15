#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

namespace Scripting {

struct EngineError : public ::Scripting::Error {
public:
    // prevent constructor by default
    EngineError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EngineError(::std::string const& message);

    MCNAPI ~EngineError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
