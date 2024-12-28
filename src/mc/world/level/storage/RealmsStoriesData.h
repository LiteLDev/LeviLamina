#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class RealmsStoriesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk28ab59;
    ::ll::UntypedStorage<8, 16> mUnk61f101;
    ::ll::UntypedStorage<8, 8>  mUnk6e3afa;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&);
    RealmsStoriesData(RealmsStoriesData const&);
    RealmsStoriesData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsStoriesData(::LevelStorage& levelStorage);

    MCAPI void clearAllRealmEventsInLevelData();

    MCAPI void setPlayerRealmEventPublished(::RealmEventId eventId, ::std::string const& xuid);

    MCAPI void setWorldRealmEventPublished(::RealmEventId eventId);

    MCAPI bool wasPlayerRealmEventPublished(::RealmEventId eventId, ::std::string const& xuid) const;

    MCAPI bool wasWorldRealmEventPublished(::RealmEventId eventId) const;

    MCAPI ~RealmsStoriesData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string const& getRealmEventInternalName(::RealmEventId eventId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& REALMS_STORIES_PREFIX();

    MCAPI static ::std::map<::RealmEventId, ::std::string> const& mRealmEventInternalNames();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelStorage& levelStorage);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
