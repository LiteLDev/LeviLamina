#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LootTableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk13423b;
    // NOLINTEND

public:
    // prevent constructor by default
    LootTableDefinition& operator=(LootTableDefinition const&);
    LootTableDefinition(LootTableDefinition const&);
    LootTableDefinition();
};
