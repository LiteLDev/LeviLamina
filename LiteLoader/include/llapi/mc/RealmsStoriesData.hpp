/**
 * @file  RealmsStoriesData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RealmsStoriesData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REALMSSTORIESDATA
public:
    class RealmsStoriesData& operator=(class RealmsStoriesData const &) = delete;
    RealmsStoriesData(class RealmsStoriesData const &) = delete;
    RealmsStoriesData() = delete;
#endif

public:
    /**
     * @symbol ??0RealmsStoriesData\@\@QEAA\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI RealmsStoriesData(class LevelStorage &);
    /**
     * @symbol ?getRealmsEventInternalName\@RealmsStoriesData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4RealmsEventId\@\@\@Z
     */
    MCAPI std::string const & getRealmsEventInternalName(enum class RealmsEventId) const;
    /**
     * @symbol ?setPlayerRealmsEventPublished\@RealmsStoriesData\@\@QEAAXW4RealmsEventId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setPlayerRealmsEventPublished(enum class RealmsEventId, std::string const &);
    /**
     * @symbol ?setWorldRealmsEventPublished\@RealmsStoriesData\@\@QEAAXW4RealmsEventId\@\@\@Z
     */
    MCAPI void setWorldRealmsEventPublished(enum class RealmsEventId);
    /**
     * @symbol ?wasPlayerRealmsEventPublished\@RealmsStoriesData\@\@QEBA_NW4RealmsEventId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool wasPlayerRealmsEventPublished(enum class RealmsEventId, std::string const &) const;
    /**
     * @symbol ?wasWorldRealmsEventPublished\@RealmsStoriesData\@\@QEBA_NW4RealmsEventId\@\@\@Z
     */
    MCAPI bool wasWorldRealmsEventPublished(enum class RealmsEventId) const;
    /**
     * @symbol ?REALMS_STORIES_PREFIX\@RealmsStoriesData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const REALMS_STORIES_PREFIX;

//private:

private:
    /**
     * @symbol ?mRealmsEventInternalNames\@RealmsStoriesData\@\@0V?$map\@W4RealmsEventId\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$less\@W4RealmsEventId\@\@\@3\@V?$allocator\@U?$pair\@$$CBW4RealmsEventId\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@B
     */
    MCAPI static class std::map<enum class RealmsEventId, std::string, struct std::less<enum class RealmsEventId>, class std::allocator<struct std::pair<enum class RealmsEventId const, std::string>>> const mRealmsEventInternalNames;

};
