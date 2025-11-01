#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct ArgumentOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::optional<double>> value;
    ::ll::TypedStorage<8, 16, ::std::optional<double>> minValue;
    ::ll::TypedStorage<8, 16, ::std::optional<double>> maxValue;
    ::ll::TypedStorage<4, 4, int> index;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArgumentOutOfBoundsError(::Scripting::ArgumentOutOfBoundsError const&);

    MCAPI ArgumentOutOfBoundsError(::std::string const& propertyName, int index_, ::std::optional<double> value_, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);

    MCAPI ~ArgumentOutOfBoundsError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::ArgumentOutOfBoundsError const&);

    MCAPI void* $ctor(::std::string const& propertyName, int index_, ::std::optional<double> value_, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
