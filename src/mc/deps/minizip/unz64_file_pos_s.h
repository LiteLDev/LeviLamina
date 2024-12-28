#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz64_file_pos_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk217836;
    ::ll::UntypedStorage<8, 8> mUnk359708;
    // NOLINTEND

public:
    // prevent constructor by default
    unz64_file_pos_s& operator=(unz64_file_pos_s const&);
    unz64_file_pos_s(unz64_file_pos_s const&);
    unz64_file_pos_s();
};
