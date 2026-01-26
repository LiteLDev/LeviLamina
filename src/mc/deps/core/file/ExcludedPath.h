#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

struct ExcludedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke85ec7;
    ::ll::UntypedStorage<1, 1>  mUnk40717f;
    // NOLINTEND

public:
    // prevent constructor by default
    ExcludedPath& operator=(ExcludedPath const&);
    ExcludedPath(ExcludedPath const&);
    ExcludedPath();

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Core::PathBuffer<::std::string> path, bool copyLooseFile);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Core
