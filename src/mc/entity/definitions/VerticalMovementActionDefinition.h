#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
struct VerticalMovementActionComponent;
// clang-format on

struct VerticalMovementActionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk30b936;
    // NOLINTEND

public:
    // prevent constructor by default
    VerticalMovementActionDefinition& operator=(VerticalMovementActionDefinition const&);
    VerticalMovementActionDefinition(VerticalMovementActionDefinition const&);
    VerticalMovementActionDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::VerticalMovementActionComponent& component) const;

    MCAPI void uninitialize(::EntityContext& entity) const;
    // NOLINTEND
};
