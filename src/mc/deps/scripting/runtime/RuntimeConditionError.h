#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
// clang-format on

namespace Scripting {

struct RuntimeConditionError : public ::Scripting::BaseError {
public:
    // prevent constructor by default
    RuntimeConditionError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    RuntimeConditionError(::Scripting::RuntimeConditions const& missingRuntimeConditions, ::std::string const& apiName);

    MCAPI ~RuntimeConditionError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::RuntimeConditions const& missingRuntimeConditions, ::std::string const& apiName);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
