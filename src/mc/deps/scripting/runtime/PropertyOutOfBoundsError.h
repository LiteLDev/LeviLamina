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
    ::ll::UntypedStorage<8, 8>  mUnk932921;
    ::ll::UntypedStorage<8, 16> mUnk57acd1;
    ::ll::UntypedStorage<8, 16> mUnk442b6c;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyOutOfBoundsError(::Scripting::PropertyOutOfBoundsError&&);

    MCNAPI PropertyOutOfBoundsError(::Scripting::PropertyOutOfBoundsError const&);

    MCNAPI PropertyOutOfBoundsError(
        ::std::string const&    propertyName,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );

    MCNAPI PropertyOutOfBoundsError(
        ::std::string const&    propertyName,
        double                  value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );

    MCNAPI ::Scripting::PropertyOutOfBoundsError& operator=(::Scripting::PropertyOutOfBoundsError&&);

    MCNAPI ~PropertyOutOfBoundsError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::PropertyOutOfBoundsError&&);

    MCNAPI void* $ctor(::Scripting::PropertyOutOfBoundsError const&);

    MCNAPI void*
    $ctor(::std::string const& propertyName, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);

    MCNAPI void* $ctor(
        ::std::string const&    propertyName,
        double                  value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
