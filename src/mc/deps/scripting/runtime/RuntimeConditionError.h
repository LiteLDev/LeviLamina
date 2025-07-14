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
    MCNAPI RuntimeConditionError(
        ::std::string const&,
        ::Scripting::RuntimeConditions const& missingRuntimeConditions,
        ::std::string const&                  apiName
    );

    MCNAPI ~RuntimeConditionError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&,
        ::Scripting::RuntimeConditions const& missingRuntimeConditions,
        ::std::string const&                  apiName
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
