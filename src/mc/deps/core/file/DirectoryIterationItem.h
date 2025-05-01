#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathPart; }
// clang-format on

namespace Core {

struct DirectoryIterationItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1011ef;
    ::ll::UntypedStorage<8, 32> mUnk2172c9;
    ::ll::UntypedStorage<8, 8>  mUnk657388;
    ::ll::UntypedStorage<8, 8>  mUnk5990e0;
    ::ll::UntypedStorage<4, 4>  mUnk657618;
    ::ll::UntypedStorage<8, 8>  mUnkd41f5c;
    ::ll::UntypedStorage<8, 8>  mUnkf25ac3;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryIterationItem& operator=(DirectoryIterationItem const&);
    DirectoryIterationItem(DirectoryIterationItem const&);
    DirectoryIterationItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DirectoryIterationItem(::Core::DirectoryIterationFlags flags);

    MCNAPI void setName(::Core::PathPart const& name);

    MCNAPI ~DirectoryIterationItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::DirectoryIterationFlags flags);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
