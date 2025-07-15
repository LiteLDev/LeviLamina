#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct ArgumentOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> value;
    ::ll::TypedStorage<8, 8, double> minValue;
    ::ll::TypedStorage<8, 8, double> maxValue;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArgumentOutOfBoundsError(::Scripting::ArgumentOutOfBoundsError&&);

    MCAPI ArgumentOutOfBoundsError(::Scripting::ArgumentOutOfBoundsError const&);

    MCAPI ArgumentOutOfBoundsError(::std::string const& message_, double value_, double minValue_, double maxValue_);

    MCFOLD ::Scripting::ArgumentOutOfBoundsError& operator=(::Scripting::ArgumentOutOfBoundsError&&);

    MCAPI ~ArgumentOutOfBoundsError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::ArgumentOutOfBoundsError&&);

    MCFOLD void* $ctor(::Scripting::ArgumentOutOfBoundsError const&);

    MCAPI void* $ctor(::std::string const& message_, double value_, double minValue_, double maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
