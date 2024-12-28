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
    MCAPI ExcludedPath(::Core::PathBuffer<::std::string> path, bool copyLooseFile);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::PathBuffer<::std::string> path, bool copyLooseFile);
    // NOLINTEND
};

} // namespace Core
