#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSMapRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkbaed45;
    ::ll::UntypedStorage<4, 4>  mUnka3d7b7;
    ::ll::UntypedStorage<8, 8>  mUnk6cd987;
    ::ll::UntypedStorage<8, 8>  mUnkd99389;
    ::ll::UntypedStorage<8, 16> mUnkec432e;
    ::ll::UntypedStorage<8, 16> mUnk3dba7c;
    ::ll::UntypedStorage<8, 16> mUnk88818f;
    ::ll::UntypedStorage<8, 16> mUnk4c0fa0;
    // NOLINTEND

public:
    // prevent constructor by default
    JSMapRecord& operator=(JSMapRecord const&);
    JSMapRecord(JSMapRecord const&);
    JSMapRecord();
};
