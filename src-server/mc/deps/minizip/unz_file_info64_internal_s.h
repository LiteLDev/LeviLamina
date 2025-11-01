#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct unz_file_info64_internal_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk33aefe;
    // NOLINTEND

public:
    // prevent constructor by default
    unz_file_info64_internal_s& operator=(unz_file_info64_internal_s const&);
    unz_file_info64_internal_s(unz_file_info64_internal_s const&);
    unz_file_info64_internal_s();

};
