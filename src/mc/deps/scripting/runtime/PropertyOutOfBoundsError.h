#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

namespace Scripting {

struct PropertyOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk932921;
    ::ll::UntypedStorage<8, 8> mUnk65443d;
    ::ll::UntypedStorage<8, 8> mUnk2fdc41;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyOutOfBoundsError(::Scripting::PropertyOutOfBoundsError const&);

    MCNAPI PropertyOutOfBoundsError(::Scripting::PropertyOutOfBoundsError&&);

    MCNAPI
    PropertyOutOfBoundsError(::std::string const& propertyName, double value_, double minValue_, double maxValue_);

    MCNAPI ::Scripting::PropertyOutOfBoundsError& operator=(::Scripting::PropertyOutOfBoundsError&&);

    MCNAPI ~PropertyOutOfBoundsError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::PropertyOutOfBoundsError const&);

    MCNAPI void* $ctor(::Scripting::PropertyOutOfBoundsError&&);

    MCNAPI void* $ctor(::std::string const& propertyName, double value_, double minValue_, double maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
