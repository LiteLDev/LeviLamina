#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

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
    RuntimeConditionError(::Scripting::RuntimeConditions const& missingRuntimeConditions, ::std::string const& apiName);

    MCAPI RuntimeConditionError(
        ::std::string const&,
        ::Scripting::RuntimeConditions const& missingRuntimeConditions,
        ::std::string const&                  apiName
    );

    MCAPI ~RuntimeConditionError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::RuntimeConditions const& missingRuntimeConditions, ::std::string const& apiName);

    MCAPI void* $ctor(
        ::std::string const&,
        ::Scripting::RuntimeConditions const& missingRuntimeConditions,
        ::std::string const&                  apiName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
