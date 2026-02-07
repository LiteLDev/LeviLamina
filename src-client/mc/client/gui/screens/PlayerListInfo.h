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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerListInfo();

    MCAPI PlayerListInfo(::PlayerListInfo&&);

    MCAPI PlayerListInfo(::PlayerListInfo const&);

    MCAPI ::PlayerListInfo& operator=(::PlayerListInfo&&);

    MCAPI ~PlayerListInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::PlayerListInfo&&);

    MCAPI void* $ctor(::PlayerListInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
