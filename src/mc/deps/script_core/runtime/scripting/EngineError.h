#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace Scripting {

struct EngineError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    EngineError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EngineError(::std::string const& message);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& message);
    // NOLINTEND
};

} // namespace Scripting
