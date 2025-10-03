#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct linkedlist_data_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4a9ca0;
    ::ll::UntypedStorage<8, 8> mUnkc4813a;
    // NOLINTEND

public:
    // prevent constructor by default
    linkedlist_data_s& operator=(linkedlist_data_s const&);
    linkedlist_data_s(linkedlist_data_s const&);
    linkedlist_data_s();
};
