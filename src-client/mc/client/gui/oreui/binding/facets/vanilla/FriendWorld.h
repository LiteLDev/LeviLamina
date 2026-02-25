#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameType.h"

namespace OreUI {

struct FriendWorld {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mJoinId;
    ::ll::TypedStorage<8, 32, ::std::string> mOwnerName;
    ::ll::TypedStorage<8, 32, ::std::string> mOwnerId;
    ::ll::TypedStorage<8, 32, ::std::string> mWorldName;
    ::ll::TypedStorage<4, 4, ::GameType>     mGameType;
    ::ll::TypedStorage<1, 1, bool>           mIsHardcore;
    ::ll::TypedStorage<4, 4, int>            mPlayerCount;
    ::ll::TypedStorage<4, 4, int>            mCapacity;
    ::ll::TypedStorage<1, 1, bool>           mFriendOfFriendWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendWorld& operator=(FriendWorld const&);
    FriendWorld(FriendWorld const&);
    FriendWorld();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendWorld(::OreUI::FriendWorld&&);

    MCAPI ::OreUI::FriendWorld& operator=(::OreUI::FriendWorld&&);

    MCAPI bool operator==(::OreUI::FriendWorld const&) const;

    MCAPI ~FriendWorld();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::FriendWorld&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
