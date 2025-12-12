#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_file_pos_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1716f9;
    ::ll::UntypedStorage<4, 4> mUnk5dc9a0;
    // NOLINTEND

public:
    // prevent constructor by default
    unz_file_pos_s& operator=(unz_file_pos_s const&);
    unz_file_pos_s(unz_file_pos_s const&);
    unz_file_pos_s();
};
