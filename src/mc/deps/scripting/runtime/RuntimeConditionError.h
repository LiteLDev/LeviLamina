#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Error.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RuntimeConditions; }
// clang-format on

namespace Scripting {

struct RuntimeConditionError : public ::Scripting::Error {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    RuntimeConditionError(::std::string const& missingRuntimeConditions, ::Scripting::RuntimeConditions const& apiName, ::std::string const&);

    MCAPI ~RuntimeConditionError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& missingRuntimeConditions, ::Scripting::RuntimeConditions const& apiName, ::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
