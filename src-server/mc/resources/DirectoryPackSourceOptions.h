#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirectoryPackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkbcaf4b;
    ::ll::UntypedStorage<8, 32> mUnk1032f2;
    ::ll::UntypedStorage<1, 1> mUnk88abc6;
    ::ll::UntypedStorage<1, 1> mUnk769245;
    ::ll::UntypedStorage<1, 1> mUnkbd672e;
    ::ll::UntypedStorage<8, 24> mUnk588ae8;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryPackSourceOptions& operator=(DirectoryPackSourceOptions const&);
    DirectoryPackSourceOptions(DirectoryPackSourceOptions const&);
    DirectoryPackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DirectoryPackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
