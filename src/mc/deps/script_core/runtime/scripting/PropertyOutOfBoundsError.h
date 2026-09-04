#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

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
    PropertyOutOfBoundsError(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::std::string const& propertyName, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);

    MCNAPI void* $ctor(
        ::std::string const&    propertyName,
        double                  value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
    // NOLINTEND
};

} // namespace Scripting
