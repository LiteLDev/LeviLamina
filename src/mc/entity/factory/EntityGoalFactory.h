#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DefinitionInstanceGroup;
class EntityContext;
class EntityRegistry;
class IJsonDefinitionSerializer;
// clang-format on

class EntityGoalFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8112d0;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityGoalFactory& operator=(EntityGoalFactory const&);
    EntityGoalFactory(EntityGoalFactory const&);
    EntityGoalFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name);

    MCAPI ~EntityGoalFactory();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addGoals(
        ::EntityRegistry&                entityRegistry,
        ::EntityContext&                 entity,
        ::DefinitionInstanceGroup const& definitionGroup
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
