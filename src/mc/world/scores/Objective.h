#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/ObjectiveCriteria.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class Objective : public ::Bedrock::EnableNonOwnerReferences {
public:
    std::unordered_map<ScoreboardId, int> mScores;
    const std::string                     mName;
    std::string                           mDisplayName;
    ObjectiveCriteria const*              mCriteria;

public:
    // prevent constructor by default
    Objective() = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Objective@@UEAA@XZ
    virtual ~Objective() = default;

    // symbol:
    // ??0Objective@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjectiveCriteria@@@Z
    MCAPI Objective(std::string const& name, class ObjectiveCriteria const& criteria);

    // symbol: ?getCriteria@Objective@@QEBAAEBVObjectiveCriteria@@XZ
    MCAPI class ObjectiveCriteria const& getCriteria() const;

    // symbol: ?getDisplayName@Objective@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getDisplayName() const;

    // symbol: ?getName@Objective@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getPlayerScore@Objective@@QEBA?AUScoreInfo@@AEBUScoreboardId@@@Z
    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const& id) const;

    // symbol: ?getPlayerScoreRef@Objective@@QEAA_NAEBUScoreboardId@@AEAUScoreInfoRef@@@Z
    MCAPI bool getPlayerScoreRef(struct ScoreboardId const& id, struct ScoreInfoRef& scoreInfo);

    // symbol: ?getPlayers@Objective@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
    MCAPI std::vector<struct ScoreboardId> getPlayers() const;

    // symbol:
    // ?getScores@Objective@@QEBAAEBV?$unordered_map@UScoreboardId@@HU?$hash@UScoreboardId@@@std@@U?$equal_to@UScoreboardId@@@3@V?$allocator@U?$pair@$$CBUScoreboardId@@H@std@@@3@@std@@XZ
    MCAPI std::unordered_map<struct ScoreboardId, int> const& getScores() const;

    // symbol: ?hasScore@Objective@@QEBA_NAEBUScoreboardId@@@Z
    MCAPI bool hasScore(struct ScoreboardId const& id) const;

    // symbol:
    // ?deserialize@Objective@@SA?AV?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@std@@AEBVCompoundTag@@AEAVScoreboard@@@Z
    MCAPI static std::unique_ptr<class Objective>
    deserialize(class CompoundTag const& dataTag, class Scoreboard& owner);

    // symbol:
    // ?serialize@Objective@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const& toSave);

    // NOLINTEND
};
