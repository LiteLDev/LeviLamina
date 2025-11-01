#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct list_head {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8e4e1a;
    ::ll::UntypedStorage<8, 8> mUnka009c9;
    // NOLINTEND

public:
    // prevent constructor by default
    list_head& operator=(list_head const&);
    list_head(list_head const&);
    list_head();

};
