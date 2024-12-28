#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_entry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk926801;
    ::ll::UntypedStorage<8, 8> mUnka760cd;
    ::ll::UntypedStorage<8, 8> mUnk81c4db;
    ::ll::UntypedStorage<1, 1> mUnk5da45c;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_entry& operator=(zip_entry const&);
    zip_entry(zip_entry const&);
    zip_entry();
};
