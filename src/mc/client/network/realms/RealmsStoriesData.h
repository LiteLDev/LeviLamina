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

    // symbol: ?didRealmsEventAlreadyHappen@RealmsStoriesData@@QEBA_NW4RealmsEventId@@@Z
    MCAPI bool didRealmsEventAlreadyHappen(::RealmsEventId) const;

    // symbol:
    // ?getRealmsEventInternalName@RealmsStoriesData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4RealmsEventId@@@Z
    MCAPI std::string const& getRealmsEventInternalName(::RealmsEventId) const;

    // symbol: ?setRealmsEventHappenedAndSave@RealmsStoriesData@@QEAAXW4RealmsEventId@@@Z
    MCAPI void setRealmsEventHappenedAndSave(::RealmsEventId);

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
    auto& $mRealmsEventInternalNames() { return mRealmsEventInternalNames; }

    // NOLINTEND
};
