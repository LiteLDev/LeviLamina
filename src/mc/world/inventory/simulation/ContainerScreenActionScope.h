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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContainerScreenActionScope();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerScreenActionScope() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI
    ContainerScreenActionScope(::ContainerScreenSimulation& simulation, ::ContainerScreenActionScope* parentScope);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ContainerScreenSimulation& simulation, ::ContainerScreenActionScope* parentScope);
#endif
    // NOLINTEND
};
