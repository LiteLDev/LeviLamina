#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct tree_desc_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9f2532;
    ::ll::UntypedStorage<4, 4> mUnk2bd145;
    ::ll::UntypedStorage<8, 8> mUnk3000be;
    // NOLINTEND

public:
    // prevent constructor by default
    tree_desc_s& operator=(tree_desc_s const&);
    tree_desc_s(tree_desc_s const&);
    tree_desc_s();
};
