#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileImageOptions.h"

namespace OreUI {

class AllowListProfileImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mID;
    ::ll::TypedStorage<8, 32, ::std::string>                  mURL;
    ::ll::TypedStorage<8, 104, ::Social::ProfileImageOptions> mImageOptions;
    ::ll::TypedStorage<4, 4, int>                             mCacheBust;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListProfileImage& operator=(AllowListProfileImage const&);
    AllowListProfileImage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AllowListProfileImage(::OreUI::AllowListProfileImage const&);

    MCNAPI AllowListProfileImage(::std::string id, ::Social::ProfileImageOptions const& imageOptions);

    MCNAPI void invalidate();

    MCNAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage&&);

    MCNAPI ~AllowListProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::AllowListProfileImage const&);

    MCNAPI void* $ctor(::std::string id, ::Social::ProfileImageOptions const& imageOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
