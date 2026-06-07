#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLootComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::string const& getLootTable() const;
    // NOLINTEND
};
