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
    ::ll::UntypedStorage<8, 16> mUnkc8e614;
    ::ll::UntypedStorage<8, 16> mUnk676da1;
    ::ll::UntypedStorage<8, 16> mUnk952d53;
    ::ll::UntypedStorage<4, 4>  mUnk34f2c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentOutOfBoundsError(::Scripting::ArgumentOutOfBoundsError const&);

    MCNAPI ArgumentOutOfBoundsError(
        ::std::string const&    propertyName,
        int                     index_,
        ::std::optional<double> value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );

    MCNAPI ~ArgumentOutOfBoundsError();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ArgumentOutOfBoundsError const&);

    MCNAPI void* $ctor(
        ::std::string const&    propertyName,
        int                     index_,
        ::std::optional<double> value_,
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
