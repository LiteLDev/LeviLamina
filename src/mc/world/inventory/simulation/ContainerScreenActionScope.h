#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/inventory/simulation/ContainerScreenActionResult.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenSimulation;
// clang-format on

class ContainerScreenActionScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mTemporaryScope;
    ::ll::TypedStorage<8, 8, ::ContainerScreenActionScope*>                               mParentScope;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContainerScreenSimulation>> mSimulation;
    ::ll::TypedStorage<8, 56, ::ContainerScreenActionResult>                              mScreenSimulationResult;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenActionScope();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContainerScreenActionScope() = default;
#else // LL_PLAT_C
    virtual ~ContainerScreenActionScope();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C
    ContainerScreenActionScope(::ContainerScreenSimulation& simulation, ::ContainerScreenActionScope* parentScope);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ContainerScreenSimulation& simulation, ::ContainerScreenActionScope* parentScope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
