#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Error.h"

namespace Scripting {

struct PropertyOutOfBoundsError : public ::Scripting::Error {
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
    PropertyOutOfBoundsError(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    PropertyOutOfBoundsError(::std::string const& propertyName, double value_, double minValue_, double maxValue_);

    MCAPI ~PropertyOutOfBoundsError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& propertyName, double value_, double minValue_, double maxValue_);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
