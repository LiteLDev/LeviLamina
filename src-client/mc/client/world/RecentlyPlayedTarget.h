#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/RecentlyPlayedTargetType.h"

namespace World {

class RecentlyPlayedTarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::World::RecentlyPlayedTargetType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                    mCanonicalId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mLevelId;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mIsEditorWorld;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mNetherNetId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mRakNetGuid;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mWebRtcNetworkId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mHostGuid;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mRealmId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mExternalServerAddress;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mThirdPartyServerId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mExperienceId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mWorldId;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mFriendId;
    // NOLINTEND

public:
    // prevent constructor by default
    RecentlyPlayedTarget& operator=(RecentlyPlayedTarget const&);
    RecentlyPlayedTarget();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RecentlyPlayedTarget(::World::RecentlyPlayedTarget&&);

    MCNAPI RecentlyPlayedTarget(::World::RecentlyPlayedTarget const&);

    MCNAPI bool isSameDestination(::World::RecentlyPlayedTarget const& other) const;

    MCNAPI ::World::RecentlyPlayedTarget mergeDestinationIdentity(::World::RecentlyPlayedTarget const& other) const;

    MCNAPI ::World::RecentlyPlayedTarget& operator=(::World::RecentlyPlayedTarget&&);

    MCNAPI ~RecentlyPlayedTarget();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::World::RecentlyPlayedTarget experience(
        ::std::string                  experienceId,
        ::std::optional<::std::string> worldId,
        ::std::optional<::std::string> friendId
    );

    MCNAPI static ::World::RecentlyPlayedTarget externalServer(::std::string address, int port);

    MCNAPI static ::World::RecentlyPlayedTarget friendWorld(
        ::std::string                  levelId,
        int64                          realmId,
        ::std::optional<::std::string> netherNetId,
        ::std::optional<::std::string> rakNetGuid
    );

    MCNAPI static ::World::RecentlyPlayedTarget
    lanWorld(::std::string hostGuid, ::std::optional<::std::string> webRtcNetworkId);

    MCNAPI static ::World::RecentlyPlayedTarget localWorld(::std::string levelId, bool isEditorWorld);

    MCNAPI static ::World::RecentlyPlayedTarget realmWorld(int64 realmId);

    MCNAPI static ::World::RecentlyPlayedTarget thirdPartyServer(::std::string productId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::World::RecentlyPlayedTarget&&);

    MCNAPI void* $ctor(::World::RecentlyPlayedTarget const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace World
