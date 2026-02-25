#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/ProfileImageOptions.h"

namespace OreUI {

class AllowListProfileImage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mID;
    ::ll::TypedStorage<8, 32, ::std::string>                 mURL;
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions> mImageOptions;
    ::ll::TypedStorage<4, 4, int>                            mCacheBust;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowListProfileImage(AllowListProfileImage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListProfileImage();

    MCAPI AllowListProfileImage(::std::string id, ::Social::ProfileImageOptions const& imageOptions);

    MCAPI void invalidate();

    MCAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage const&);

    MCAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage&&);

    MCAPI ~AllowListProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string id, ::Social::ProfileImageOptions const& imageOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
