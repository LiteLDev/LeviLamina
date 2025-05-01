#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name);

    MCNAPI ~EntityGoalFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
