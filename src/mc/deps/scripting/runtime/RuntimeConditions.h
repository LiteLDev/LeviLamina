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
    ::ll::UntypedStorage<8, 24> mUnkc091ae;
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

} // namespace Scripting
