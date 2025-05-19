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
    // prevent constructor by default
    RuntimeConditionError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RuntimeConditionError(
        ::std::string const&                  missingRuntimeConditions,
        ::Scripting::RuntimeConditions const& apiName,
        ::std::string const&
    );

    MCNAPI ~RuntimeConditionError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&                  missingRuntimeConditions,
        ::Scripting::RuntimeConditions const& apiName,
        ::std::string const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
