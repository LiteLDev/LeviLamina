#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4a3990;
    ::ll::UntypedStorage<4, 4>  mUnkd9c671;
    ::ll::UntypedStorage<1, 1>  mUnk25938f;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&);
    ContainerValidationResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerValidationResult(::ContainerValidationResult const&);

    MCNAPI ~ContainerValidationResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerValidationResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
