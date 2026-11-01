#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"

struct PlayerListInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mPlayerName;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>     mId;
    ::ll::TypedStorage<8, 16, ::mce::UUID>        mUUID;
    ::ll::TypedStorage<8, 32, ::std::string>      mXUID;
    ::ll::TypedStorage<8, 32, ::std::string>      mPlatformOnlineId;
    ::ll::TypedStorage<1, 1, bool>                mIsOnXBL;
    ::ll::TypedStorage<1, 1, bool>                mIsPlatformIconVisible;
    ::ll::TypedStorage<1, 1, bool>                mIsPlatformProfileCardVisible;
    ::ll::TypedStorage<1, 1, bool>                mHasPlatformGamerpic;
    ::ll::TypedStorage<1, 1, bool>                mAllowGamerPics;
    ::ll::TypedStorage<8, 56, ::ResourceLocation> mGamerPicLocation;
    ::ll::TypedStorage<1, 1, bool>                mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                mIsHost;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerListInfo& operator=(PlayerListInfo const&);
    PlayerListInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerListInfo(::PlayerListInfo&&);

    MCNAPI PlayerListInfo(::PlayerListInfo const&);

    MCNAPI ::PlayerListInfo& operator=(::PlayerListInfo&&);

    MCNAPI ~PlayerListInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerListInfo&&);

    MCNAPI void* $ctor(::PlayerListInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
