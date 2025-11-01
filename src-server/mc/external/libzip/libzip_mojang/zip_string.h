#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct zip_string {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcc898c;
    ::ll::UntypedStorage<2, 2> mUnk511f91;
    ::ll::UntypedStorage<4, 4> mUnk5c6d12;
    ::ll::UntypedStorage<8, 8> mUnk69976e;
    ::ll::UntypedStorage<4, 4> mUnkd9b4d9;
    // NOLINTEND

public:
    // prevent constructor by default
    zip_string& operator=(zip_string const&);
    zip_string(zip_string const&);
    zip_string();

};
