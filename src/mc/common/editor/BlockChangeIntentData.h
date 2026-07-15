#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct BlockChangeIntentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7d81fc;
    ::ll::UntypedStorage<4, 4>  mUnkfd388c;
    ::ll::UntypedStorage<8, 8>  mUnkd4d9a2;
    ::ll::UntypedStorage<4, 12> mUnka242ca;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockChangeIntentData& operator=(BlockChangeIntentData const&);
    BlockChangeIntentData(BlockChangeIntentData const&);
    BlockChangeIntentData();
};

} // namespace Editor::Transactions
