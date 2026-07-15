#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class ServiceError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk67b4f1;
    ::ll::UntypedStorage<8, 32> mUnka18608;
    ::ll::UntypedStorage<8, 32> mUnk277444;
    ::ll::UntypedStorage<8, 16> mUnk6295e3;
    ::ll::UntypedStorage<8, 40> mUnk731bd2;
    ::ll::UntypedStorage<8, 16> mUnk7eb6de;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceError& operator=(ServiceError const&);
    ServiceError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServiceError(::JsonRpc::ServiceError&&);

    MCNAPI ServiceError(::JsonRpc::ServiceError const&);

    MCNAPI ~ServiceError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JsonRpc::ServiceError&&);

    MCNAPI void* $ctor(::JsonRpc::ServiceError const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace JsonRpc
