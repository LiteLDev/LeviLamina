/**
 * @file  DisplayObjective.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DisplayObjective.
 *
 */
class DisplayObjective {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISPLAYOBJECTIVE
public:
    class DisplayObjective& operator=(class DisplayObjective const &) = delete;
    DisplayObjective(class DisplayObjective const &) = delete;
    DisplayObjective() = delete;
#endif

public:
    /**
     * @symbol  ??0DisplayObjective\@\@QEAA\@AEBVObjective\@\@W4ObjectiveSortOrder\@\@\@Z
     */
    MCAPI DisplayObjective(class Objective const &, enum class ObjectiveSortOrder);
    /**
     * @symbol  ?getBelowNameStringForId\@DisplayObjective\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const &) const;
    /**
     * @symbol  ?getObjective\@DisplayObjective\@\@QEBAAEBVObjective\@\@XZ
     */
    MCAPI class Objective const & getObjective() const;
    /**
     * @symbol  ?getSortOrder\@DisplayObjective\@\@QEBA?AW4ObjectiveSortOrder\@\@XZ
     */
    MCAPI enum class ObjectiveSortOrder getSortOrder() const;
    /**
     * @symbol  ?isDisplaying\@DisplayObjective\@\@QEBA_NAEBVObjective\@\@\@Z
     */
    MCAPI bool isDisplaying(class Objective const &) const;
    /**
     * @symbol  ?isValid\@DisplayObjective\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol  ?deserialize\@DisplayObjective\@\@SA?AV1\@AEBVCompoundTag\@\@AEBVScoreboard\@\@\@Z
     */
    MCAPI static class DisplayObjective deserialize(class CompoundTag const &, class Scoreboard const &);
    /**
     * @symbol  ?serialize\@DisplayObjective\@\@SA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBV1\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class DisplayObjective const &);

};