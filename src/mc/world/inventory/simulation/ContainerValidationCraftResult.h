#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationCraftResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfabfde;
    ::ll::UntypedStorage<8, 24> mUnk411ce8;
    ::ll::UntypedStorage<8, 24> mUnkefc82b;
    ::ll::UntypedStorage<8, 24> mUnk893107;
    ::ll::UntypedStorage<8, 24> mUnk2f3ad0;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerValidationCraftResult& operator=(ContainerValidationCraftResult const&);
    ContainerValidationCraftResult(ContainerValidationCraftResult const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerValidationCraftResult();

    MCNAPI ContainerValidationCraftResult(::ContainerValidationCraftResult&&);

    MCNAPI ~ContainerValidationCraftResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ContainerValidationCraftResult&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
