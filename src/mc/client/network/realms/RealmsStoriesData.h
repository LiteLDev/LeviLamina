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
    // symbol: ??0RealmsStoriesData@@QEAA@AEAVLevelStorage@@@Z
    MCAPI explicit RealmsStoriesData(class LevelStorage&);

    // symbol: ?clearAllRealmEventsInLevelData@RealmsStoriesData@@QEAAXXZ
    MCAPI void clearAllRealmEventsInLevelData();

    // symbol:
    // ?setPlayerRealmEventPublished@RealmsStoriesData@@QEAAXW4RealmEventId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setPlayerRealmEventPublished(::RealmEventId, std::string const&);

    // symbol: ?setWorldRealmEventPublished@RealmsStoriesData@@QEAAXW4RealmEventId@@@Z
    MCAPI void setWorldRealmEventPublished(::RealmEventId);

    // symbol:
    // ?wasPlayerRealmEventPublished@RealmsStoriesData@@QEBA_NW4RealmEventId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool wasPlayerRealmEventPublished(::RealmEventId, std::string const&) const;

    // symbol: ?wasWorldRealmEventPublished@RealmsStoriesData@@QEBA_NW4RealmEventId@@@Z
    MCAPI bool wasWorldRealmEventPublished(::RealmEventId) const;

    // symbol: ??1RealmsStoriesData@@QEAA@XZ
    MCAPI ~RealmsStoriesData();

    // symbol:
    // ?getRealmEventInternalName@RealmsStoriesData@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RealmEventId@@@Z
    MCAPI static std::string const& getRealmEventInternalName(::RealmEventId);

    // symbol:
    // ?REALMS_STORIES_PREFIX@RealmsStoriesData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const REALMS_STORIES_PREFIX;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mRealmEventInternalNames@RealmsStoriesData@@0V?$map@W4RealmEventId@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4RealmEventId@@@3@V?$allocator@U?$pair@$$CBW4RealmEventId@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@B
    MCAPI static std::map<::RealmEventId, std::string> const mRealmEventInternalNames;

    // NOLINTEND
};
