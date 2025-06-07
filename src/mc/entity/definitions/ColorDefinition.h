#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ColorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb1b293;
    // NOLINTEND

public:
    // prevent constructor by default
    ColorDefinition& operator=(ColorDefinition const&);
    ColorDefinition(ColorDefinition const&);
    ColorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setColorChoice(int const& colorChoice);
    // NOLINTEND
};
