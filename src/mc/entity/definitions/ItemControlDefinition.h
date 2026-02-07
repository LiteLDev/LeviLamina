#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

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
    MCAPI void addItemByName(::std::string const& name);
    // NOLINTEND
};
