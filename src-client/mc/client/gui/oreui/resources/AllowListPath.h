#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

namespace OreUI {

class AllowListPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mID;
    ::ll::TypedStorage<8, 32, ::std::string> mURL;
    ::ll::TypedStorage<8, 32, ::Core::Path>  mResourcePath;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListPath(AllowListPath const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListPath();

    MCAPI AllowListPath(::std::string id, ::Core::Path path);

    MCAPI ::OreUI::AllowListPath& operator=(::OreUI::AllowListPath&&);

    MCFOLD ::OreUI::AllowListPath& operator=(::OreUI::AllowListPath const&);

    MCAPI ~AllowListPath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::OreUI::AllowListPath const& empty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string id, ::Core::Path path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
