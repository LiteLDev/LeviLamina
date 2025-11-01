#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_file {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke233ae;
    ::ll::UntypedStorage<8, 8> mUnk1d6d4b;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_file& operator=(zip_file const&);
    zip_file(zip_file const&);
    zip_file();

};
