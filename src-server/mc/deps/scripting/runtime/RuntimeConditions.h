#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct RuntimeCondition; }
// clang-format on

namespace Scripting {

class RuntimeConditions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Scripting::RuntimeCondition>> mRuntimeConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeConditions& operator=(RuntimeConditions const&);
    RuntimeConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RuntimeConditions(::Scripting::RuntimeConditions const& rhs);

    MCAPI explicit RuntimeConditions(::std::vector<::Scripting::RuntimeCondition> const& runtimeConditions);

    MCAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const& runtimeConditions);

    MCAPI ::std::string toString() const;

    MCAPI ~RuntimeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::RuntimeConditions const& rhs);

    MCAPI void* $ctor(::std::vector<::Scripting::RuntimeCondition> const& runtimeConditions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
