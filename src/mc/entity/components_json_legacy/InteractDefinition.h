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
    ::ll::UntypedStorage<8, 24> mUnkc1876e;
    // NOLINTEND

public:
    // prevent constructor by default
    InteractDefinition& operator=(InteractDefinition const&);
    InteractDefinition(InteractDefinition const&);
    InteractDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addInteraction(::Interaction const& interaction);
    // NOLINTEND
};
