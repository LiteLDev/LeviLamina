#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct PropertyOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double> value;
    ::ll::TypedStorage<8, 16, ::std::optional<double>> minValue;
    ::ll::TypedStorage<8, 16, ::std::optional<double>> maxValue;
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

    MCAPI PropertyOutOfBoundsError(::std::string const& propertyName, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);

    MCAPI PropertyOutOfBoundsError(::std::string const& propertyName, double value_, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);

    MCAPI ::Scripting::PropertyOutOfBoundsError& operator=(::Scripting::PropertyOutOfBoundsError&&);

    MCAPI ~PropertyOutOfBoundsError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::PropertyOutOfBoundsError const&);

    MCAPI void* $ctor(::Scripting::PropertyOutOfBoundsError&&);

    MCAPI void* $ctor(::std::string const& propertyName, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);

    MCAPI void* $ctor(::std::string const& propertyName, double value_, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
