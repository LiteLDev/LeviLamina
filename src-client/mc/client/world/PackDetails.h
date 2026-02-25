#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackActionError.h"
#include "mc/deps/core/file/PathBuffer.h"

namespace World {

struct PackDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mName;
    ::ll::TypedStorage<8, 32, ::std::string>                            mType;
    ::ll::TypedStorage<8, 32, ::std::string>                            mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                            mSize;
    ::ll::TypedStorage<8, 32, ::std::string>                            mId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mContentId;
    ::ll::TypedStorage<8, 32, ::std::string>                            mIconPathStr;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>        mIconPath;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::PackActionError>> mError;
    ::ll::TypedStorage<1, 1, bool>                                      mIsMarketplaceItem;
    ::ll::TypedStorage<1, 1, bool>                                      mIsPlatformLocked;
    ::ll::TypedStorage<1, 1, bool>                                      mHasSettings;
    ::ll::TypedStorage<1, 1, bool>                                      mIsAddon;
    // NOLINTEND

public:
    // prevent constructor by default
    PackDetails(PackDetails const&);
    PackDetails();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackDetails(::World::PackDetails&&);

    MCAPI ::World::PackDetails& operator=(::World::PackDetails const&);

    MCAPI ~PackDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::World::PackDetails&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
