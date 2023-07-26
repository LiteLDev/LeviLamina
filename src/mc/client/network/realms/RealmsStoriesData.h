#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RealmsStoriesData {

public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&) = delete;
    RealmsStoriesData(RealmsStoriesData const&)            = delete;
    RealmsStoriesData()                                    = delete;

public:
    /**
     * @symbol ??0RealmsStoriesData\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI RealmsStoriesData(class LevelStorage&); // NOLINT
    /**
     * @symbol ?didRealmsEventAlreadyHappen\@RealmsStoriesData\@\@QEBA_NW4RealmsEventId\@\@\@Z
     */
    MCAPI bool didRealmsEventAlreadyHappen(enum class RealmsEventId) const; // NOLINT
    /**
     * @symbol
     * ?getRealmsEventInternalName\@RealmsStoriesData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RealmsEventId\@\@\@Z
     */
    MCAPI std::string const& getRealmsEventInternalName(enum class RealmsEventId) const; // NOLINT
    /**
     * @symbol ?setRealmsEventHappenedAndSave\@RealmsStoriesData\@\@QEAAXW4RealmsEventId\@\@\@Z
     */
    MCAPI void setRealmsEventHappenedAndSave(enum class RealmsEventId); // NOLINT
    /**
     * @symbol
     * ?REALMS_STORIES_PREFIX\@RealmsStoriesData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const REALMS_STORIES_PREFIX; // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mRealmsEventInternalNames\@RealmsStoriesData\@\@0V?$map\@W4RealmsEventId\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@W4RealmsEventId\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4RealmsEventId\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::map<
        enum class RealmsEventId,
        std::string,
        struct std::less<enum class RealmsEventId>,
        class std::allocator<struct std::pair<enum class RealmsEventId const, std::string>>> const
        mRealmsEventInternalNames; // NOLINT
};
