#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct PropertyOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> value;
    ::ll::TypedStorage<8, 8, double> minValue;
    ::ll::TypedStorage<8, 8, double> maxValue;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PropertyOutOfBoundsError(::Scripting::PropertyOutOfBoundsError const&);

    MCAPI PropertyOutOfBoundsError(::Scripting::PropertyOutOfBoundsError&&);

    MCAPI
    PropertyOutOfBoundsError(::std::string const& propertyName, double value_, double minValue_, double maxValue_);

    MCFOLD ::Scripting::PropertyOutOfBoundsError& operator=(::Scripting::PropertyOutOfBoundsError&&);

    MCAPI ~PropertyOutOfBoundsError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Scripting::PropertyOutOfBoundsError const&);

    MCFOLD void* $ctor(::Scripting::PropertyOutOfBoundsError&&);

    MCAPI void* $ctor(::std::string const& propertyName, double value_, double minValue_, double maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Scripting
