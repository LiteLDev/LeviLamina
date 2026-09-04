#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

namespace Scripting {

struct ContainerSizeOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkea5a69;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerSizeOutOfBoundsError& operator=(ContainerSizeOutOfBoundsError const&);
    ContainerSizeOutOfBoundsError(ContainerSizeOutOfBoundsError const&);
    ContainerSizeOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerSizeOutOfBoundsError(::std::string const& propertyName, uint maxSize_);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& propertyName, uint maxSize_);
    // NOLINTEND
};

} // namespace Scripting
