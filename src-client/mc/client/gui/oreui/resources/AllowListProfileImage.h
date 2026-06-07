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
    AllowListProfileImage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AllowListProfileImage(::OreUI::AllowListProfileImage const&);

    MCAPI AllowListProfileImage(::std::string id, ::Social::ProfileImageOptions const& imageOptions);

    MCFOLD ::Social::ProfileImageOptions const& imageOptions() const;

    MCAPI void invalidate();

    MCAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage const&);

    MCAPI ::OreUI::AllowListProfileImage& operator=(::OreUI::AllowListProfileImage&&);

    MCFOLD ::std::string const& url() const;

    MCAPI ~AllowListProfileImage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::AllowListProfileImage const&);

    MCAPI void* $ctor(::std::string id, ::Social::ProfileImageOptions const& imageOptions);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
