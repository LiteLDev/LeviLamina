#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Interaction;
// clang-format on

class InteractDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Interaction>> mInteractions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addInteraction(::Interaction const& interaction);
    // NOLINTEND
};
