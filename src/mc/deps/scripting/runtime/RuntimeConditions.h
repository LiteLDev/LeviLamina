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
    RuntimeConditions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RuntimeConditions(::Scripting::RuntimeConditions&& rhs);

    MCAPI RuntimeConditions(::Scripting::RuntimeConditions const& rhs);

    MCAPI explicit RuntimeConditions(::std::vector<::Scripting::RuntimeCondition> const& runtimeConditions);

    MCFOLD bool empty() const;

#ifdef LL_PLAT_S
    MCFOLD ::std::vector<::Scripting::RuntimeCondition> const& get() const;
#endif

    MCAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const& runtimeConditions);

    MCAPI ::Scripting::RuntimeConditions& operator=(::Scripting::RuntimeConditions const& rhs);

    MCAPI ::std::string toString() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::RuntimeConditions&& rhs);

    MCAPI void* $ctor(::Scripting::RuntimeConditions const& rhs);

    MCFOLD void* $ctor(::std::vector<::Scripting::RuntimeCondition> const& runtimeConditions);
    // NOLINTEND
};

} // namespace Scripting
