#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/RealmEventId.h"

class RealmsStoriesData {
public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&);
    RealmsStoriesData(RealmsStoriesData const&);
    RealmsStoriesData();

public:
    // NOLINTBEGIN
    MCAPI explicit RealmsStoriesData(class LevelStorage& levelStorage);

    MCAPI void clearAllRealmEventsInLevelData();

    MCAPI void setPlayerRealmEventPublished(::RealmEventId eventId, std::string const& xuid);

    MCAPI void setWorldRealmEventPublished(::RealmEventId eventId);

    MCAPI bool wasPlayerRealmEventPublished(::RealmEventId eventId, std::string const& xuid) const;

    MCAPI bool wasWorldRealmEventPublished(::RealmEventId eventId) const;

    MCAPI ~RealmsStoriesData();

    MCAPI static std::string const& getRealmEventInternalName(::RealmEventId eventId);

    MCAPI static std::string const REALMS_STORIES_PREFIX;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::map<::RealmEventId, std::string> const mRealmEventInternalNames;

    // NOLINTEND
};
