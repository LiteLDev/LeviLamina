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
    AllowListPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListPath(::OreUI::AllowListPath const&);

    MCNAPI AllowListPath(::std::string id, ::Core::Path path);

    MCNAPI ::OreUI::AllowListPath& operator=(::OreUI::AllowListPath&&);

    MCNAPI ::OreUI::AllowListPath& operator=(::OreUI::AllowListPath const&);

    MCNAPI ~AllowListPath();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::AllowListPath const& empty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::AllowListPath const&);

    MCNAPI void* $ctor(::std::string id, ::Core::Path path);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
