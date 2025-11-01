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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContainerScreenActionScope() = default;
    // NOLINTEND
};
