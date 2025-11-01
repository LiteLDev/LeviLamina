#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct gzFile_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk815d01;
    ::ll::UntypedStorage<8, 8> mUnkdff036;
    ::ll::UntypedStorage<8, 8> mUnk1cecd2;
    // NOLINTEND

public:
    // prevent constructor by default
    gzFile_s& operator=(gzFile_s const&);
    gzFile_s(gzFile_s const&);
    gzFile_s();

};
