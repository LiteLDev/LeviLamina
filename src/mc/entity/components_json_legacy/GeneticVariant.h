#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IntRange.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"

struct GeneticVariant {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::IntRange>                 mainAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                 hiddenAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                 eitherAllele;
    ::ll::TypedStorage<4, 8, ::IntRange>                 bothAllele;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> onBorn;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~GeneticVariant();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
