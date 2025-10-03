#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSJobEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk98830d;
    ::ll::UntypedStorage<8, 8>  mUnk11b2d7;
    ::ll::UntypedStorage<8, 8>  mUnkff1eba;
    ::ll::UntypedStorage<4, 4>  mUnk679cc4;
    ::ll::UntypedStorage<8, 0>  mUnkef45cb;
    // NOLINTEND

public:
    // prevent constructor by default
    JSJobEntry& operator=(JSJobEntry const&);
    JSJobEntry(JSJobEntry const&);
    JSJobEntry();
};
