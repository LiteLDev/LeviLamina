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
    MCNAPI RuntimeConditions(::Scripting::RuntimeConditions const& rhs);

    MCNAPI explicit RuntimeConditions(::std::vector<::Scripting::RuntimeCondition> const& runtimeConditions);

    MCNAPI ::Scripting::RuntimeConditions getMissing(::Scripting::RuntimeConditions const& runtimeConditions);

    MCNAPI ::std::string toString() const;

    MCNAPI ~RuntimeConditions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::RuntimeConditions const& rhs);

    MCNAPI void* $ctor(::std::vector<::Scripting::RuntimeCondition> const& runtimeConditions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
