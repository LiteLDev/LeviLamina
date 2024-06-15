#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveSortOrder.h"

class DisplayObjective {
public:
    // prevent constructor by default
    DisplayObjective& operator=(DisplayObjective const&);
    DisplayObjective(DisplayObjective const&);
    DisplayObjective();

public:
    // NOLINTBEGIN
    // symbol: ??0DisplayObjective@@QEAA@AEBVObjective@@W4ObjectiveSortOrder@@@Z
    MCAPI DisplayObjective(class Objective const& obj, ::ObjectiveSortOrder order);

    // symbol:
    // ?getBelowNameStringForId@DisplayObjective@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUScoreboardId@@@Z
    MCAPI std::string const getBelowNameStringForId(struct ScoreboardId const&) const;

    // symbol: ?getObjective@DisplayObjective@@QEBAAEBVObjective@@XZ
    MCAPI class Objective const& getObjective() const;

    // symbol: ?getSortOrder@DisplayObjective@@QEBA?AW4ObjectiveSortOrder@@XZ
    MCAPI ::ObjectiveSortOrder getSortOrder() const;

    // symbol: ?isDisplaying@DisplayObjective@@QEBA_NAEBVObjective@@@Z
    MCAPI bool isDisplaying(class Objective const& targetObjective) const;

    // symbol: ?isValid@DisplayObjective@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?deserialize@DisplayObjective@@SA?AV1@AEBVCompoundTag@@AEBVScoreboard@@@Z
    MCAPI static class DisplayObjective deserialize(class CompoundTag const& dataTag, class Scoreboard const& owner);

    // symbol:
    // ?serialize@DisplayObjective@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class DisplayObjective const& toSave);

    // NOLINTEND
};
