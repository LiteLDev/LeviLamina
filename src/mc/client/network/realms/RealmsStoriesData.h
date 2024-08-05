#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/RealmEventId.h"

class RealmsStoriesData {
public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&);
    RealmsStoriesData(RealmsStoriesData const&);
    RealmsStoriesData();

public:
    // NOLINTBEGIN
    MCAPI explicit RealmsStoriesData(class LevelStorage&);

    MCAPI void clearAllRealmEventsInLevelData();

    MCAPI void setPlayerRealmEventPublished(::RealmEventId, std::string const&);

    MCAPI void setWorldRealmEventPublished(::RealmEventId);

    MCAPI bool wasPlayerRealmEventPublished(::RealmEventId, std::string const&) const;

    MCAPI bool wasWorldRealmEventPublished(::RealmEventId) const;

    MCAPI ~RealmsStoriesData();

    MCAPI static std::string const& getRealmEventInternalName(::RealmEventId);

    MCAPI static std::string const REALMS_STORIES_PREFIX;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::map<::RealmEventId, std::string> const mRealmEventInternalNames;

    // NOLINTEND
};
