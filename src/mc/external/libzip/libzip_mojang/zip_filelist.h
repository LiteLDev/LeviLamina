#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_filelist {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd909a2;
    ::ll::UntypedStorage<8, 8> mUnkf390ef;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_filelist& operator=(zip_filelist const&);
    zip_filelist(zip_filelist const&);
    zip_filelist();
};
