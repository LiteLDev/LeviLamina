#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DBStorageConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke62718;
    ::ll::UntypedStorage<8, 32> mUnk58a05d;
    ::ll::UntypedStorage<8, 32> mUnkf6a008;
    ::ll::UntypedStorage<8, 32> mUnk130302;
    ::ll::UntypedStorage<8, 8>  mUnkda5f4b;
    ::ll::UntypedStorage<8, 24> mUnk1302c9;
    ::ll::UntypedStorage<8, 24> mUnka667c2;
    ::ll::UntypedStorage<8, 8>  mUnk52857a;
    ::ll::UntypedStorage<8, 8>  mUnk8641ac;
    ::ll::UntypedStorage<8, 16> mUnk5094f5;
    ::ll::UntypedStorage<1, 1>  mUnkba61c5;
    ::ll::UntypedStorage<1, 1>  mUnkd40bd1;
    ::ll::UntypedStorage<1, 1>  mUnk939fe9;
    ::ll::UntypedStorage<8, 8>  mUnk891574;
    // NOLINTEND

public:
    // prevent constructor by default
    DBStorageConfig& operator=(DBStorageConfig const&);
    DBStorageConfig(DBStorageConfig const&);
    DBStorageConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DBStorageConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
