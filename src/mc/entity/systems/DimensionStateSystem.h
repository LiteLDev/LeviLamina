#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"
#include "mc/entity/components/DimensionStateComponent.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class DimensionStateSystem : public ::ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DimensionStateSystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isDimensionReady(::EntityContext const& entity);

    MCAPI static void setDimensionState(::EntityContext& entity, ::DimensionStateComponent::DimensionState state);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
