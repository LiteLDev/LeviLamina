#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TestConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk9d6546;
    ::ll::UntypedStorage<4, 4>  mUnk5d82e6;
    ::ll::UntypedStorage<1, 1>  mUnk1524f2;
    ::ll::UntypedStorage<4, 4>  mUnkddc2c8;
    ::ll::UntypedStorage<8, 24> mUnke80acc;
    ::ll::UntypedStorage<4, 4>  mUnka31c3c;
    ::ll::UntypedStorage<1, 1>  mUnk9988fe;
    ::ll::UntypedStorage<1, 1>  mUnkce1c9d;
    ::ll::UntypedStorage<1, 1>  mUnk5a5683;
    ::ll::UntypedStorage<8, 32> mUnk2212f5;
    ::ll::UntypedStorage<8, 32> mUnkaed291;
    ::ll::UntypedStorage<1, 1>  mUnk36c632;
    // NOLINTEND

public:
    // prevent constructor by default
    TestConfig& operator=(TestConfig const&);
    TestConfig(TestConfig const&);
    TestConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TestConfig();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
