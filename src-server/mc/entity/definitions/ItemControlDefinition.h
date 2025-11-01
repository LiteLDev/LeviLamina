#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemControlDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk104938;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemControlDefinition& operator=(ItemControlDefinition const&);
    ItemControlDefinition(ItemControlDefinition const&);
    ItemControlDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addItemByName(::std::string const& name);
    // NOLINTEND

};
