#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_hash_entry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk46035f;
    ::ll::UntypedStorage<8, 8> mUnk304047;
    ::ll::UntypedStorage<8, 8> mUnk43f7b3;
    ::ll::UntypedStorage<8, 8> mUnkd86177;
    ::ll::UntypedStorage<4, 4> mUnk69914e;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_hash_entry& operator=(zip_hash_entry const&);
    zip_hash_entry(zip_hash_entry const&);
    zip_hash_entry();
};
