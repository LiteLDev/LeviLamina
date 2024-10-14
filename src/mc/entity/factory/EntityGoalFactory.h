#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityGoalFactory {
public:
    // prevent constructor by default
    EntityGoalFactory& operator=(EntityGoalFactory const&);
    EntityGoalFactory(EntityGoalFactory const&);
    EntityGoalFactory();

public:
    // NOLINTBEGIN
    MCAPI class IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const& name);

    MCAPI ~EntityGoalFactory();

    MCAPI static void addGoals(
        class EntityRegistry&                entityRegistry,
        class EntityContext&                 entity,
        class DefinitionInstanceGroup const& definitionGroup
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
