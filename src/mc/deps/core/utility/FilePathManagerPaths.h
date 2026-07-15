#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct FilePathManagerPaths {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke7e628;
    ::ll::UntypedStorage<8, 32> mUnk8c8d75;
    ::ll::UntypedStorage<8, 32> mUnk112a97;
    ::ll::UntypedStorage<8, 32> mUnk2871ed;
    ::ll::UntypedStorage<8, 32> mUnkfc8089;
    ::ll::UntypedStorage<8, 32> mUnkdf0bdb;
    ::ll::UntypedStorage<8, 32> mUnkba5c3a;
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
#ifdef LL_PLAT_C
    MCNAPI ~FilePathManagerPaths();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Core
