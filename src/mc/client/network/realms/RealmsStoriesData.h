#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/RealmsEventId.h"

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
    // ?getRealmsEventInternalName@RealmsStoriesData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RealmsEventId@@@Z
    MCAPI std::string const& getRealmsEventInternalName(::RealmsEventId) const;

    // symbol:
    // ?setPlayerRealmsEventPublished@RealmsStoriesData@@QEAAXW4RealmsEventId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setPlayerRealmsEventPublished(::RealmsEventId, std::string const&);

    // symbol: ?setWorldRealmsEventPublished@RealmsStoriesData@@QEAAXW4RealmsEventId@@@Z
    MCAPI void setWorldRealmsEventPublished(::RealmsEventId);

    // symbol:
    // ?wasPlayerRealmsEventPublished@RealmsStoriesData@@QEBA_NW4RealmsEventId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool wasPlayerRealmsEventPublished(::RealmsEventId, std::string const&) const;

    // symbol: ?wasWorldRealmsEventPublished@RealmsStoriesData@@QEBA_NW4RealmsEventId@@@Z
    MCAPI bool wasWorldRealmsEventPublished(::RealmsEventId) const;

    // symbol: ??1RealmsStoriesData@@QEAA@XZ
    MCAPI ~RealmsStoriesData();

    // symbol:
    // ?REALMS_STORIES_PREFIX@RealmsStoriesData@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const REALMS_STORIES_PREFIX;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?mRealmsEventInternalNames@RealmsStoriesData@@0V?$map@W4RealmsEventId@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@W4RealmsEventId@@@3@V?$allocator@U?$pair@$$CBW4RealmsEventId@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@B
    MCAPI static std::map<::RealmsEventId, std::string> const mRealmsEventInternalNames;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mRealmsEventInternalNames() { return mRealmsEventInternalNames; }

    // NOLINTEND
};
