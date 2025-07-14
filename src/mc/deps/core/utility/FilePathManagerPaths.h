#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct FilePathManagerPaths {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk687cd1;
    ::ll::UntypedStorage<8, 32> mUnk910413;
    ::ll::UntypedStorage<8, 32> mUnk4a5599;
    ::ll::UntypedStorage<8, 32> mUnk85ffb1;
    ::ll::UntypedStorage<8, 32> mUnk42dbbc;
    ::ll::UntypedStorage<8, 32> mUnk10610c;
    ::ll::UntypedStorage<8, 32> mUnk1f66e9;
    ::ll::UntypedStorage<1, 1>  mUnkba5e88;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePathManagerPaths& operator=(FilePathManagerPaths const&);
    FilePathManagerPaths(FilePathManagerPaths const&);
    FilePathManagerPaths();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~FilePathManagerPaths();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
