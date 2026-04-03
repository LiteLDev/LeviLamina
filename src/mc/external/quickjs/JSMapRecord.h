#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSMapRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbaed45;
    int                         mUnk9816e4 : 8;
    ::ll::UntypedStorage<8, 16> mUnkec432e;
    ::ll::UntypedStorage<8, 8>  mUnk6d3622;
    ::ll::UntypedStorage<8, 16> mUnk88818f;
    ::ll::UntypedStorage<8, 16> mUnk4c0fa0;
    // NOLINTEND

public:
    // prevent constructor by default
    JSMapRecord& operator=(JSMapRecord const&);
    JSMapRecord(JSMapRecord const&);
    JSMapRecord();
};
