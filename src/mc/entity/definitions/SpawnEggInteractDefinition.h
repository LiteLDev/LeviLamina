#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct SpawnEggInteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk714abe;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnEggInteractDefinition& operator=(SpawnEggInteractDefinition const&);
    SpawnEggInteractDefinition(SpawnEggInteractDefinition const&);
    SpawnEggInteractDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity) const;
    // NOLINTEND
};
