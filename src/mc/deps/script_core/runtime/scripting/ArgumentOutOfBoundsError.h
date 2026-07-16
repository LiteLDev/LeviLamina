#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace Scripting {

struct ArgumentOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc8e614;
    ::ll::UntypedStorage<8, 16> mUnk676da1;
    ::ll::UntypedStorage<8, 16> mUnk952d53;
    ::ll::UntypedStorage<4, 4>  mUnk34f2c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentOutOfBoundsError(
        ::std::string const&    propertyName,
        int                     index_,
        ::std::optional<double> value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::string const&    propertyName,
        int                     index_,
        ::std::optional<double> value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
    // NOLINTEND
};

} // namespace Scripting
