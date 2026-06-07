#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct ContainerSizeOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> maxSize;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerSizeOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerSizeOutOfBoundsError(::std::string const& propertyName, uint maxSize_);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ErrorBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& propertyName, uint maxSize_);
    // NOLINTEND
};

} // namespace Scripting
