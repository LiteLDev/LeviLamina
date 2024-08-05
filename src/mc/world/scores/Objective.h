#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/scores/ObjectiveCriteria.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/actor/player/PlayerScoreSetFunction.h"

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
    // vIndex: 0
    virtual ~Objective() = default;

    MCAPI Objective(std::string const& name, class ObjectiveCriteria const& criteria);

    MCAPI class ObjectiveCriteria const& getCriteria() const;

    MCAPI std::string const& getDisplayName() const;

    MCAPI std::string const& getName() const;

    MCAPI struct ScoreInfo getPlayerScore(struct ScoreboardId const& id) const;

    MCAPI bool getPlayerScoreRef(struct ScoreboardId const& id, struct ScoreInfoRef& scoreInfo);

    MCAPI std::vector<struct ScoreboardId> getPlayers() const;

    MCAPI std::unordered_map<struct ScoreboardId, int> const& getScores() const;

    MCAPI bool hasScore(struct ScoreboardId const& id) const;

    MCAPI bool hasScores() const;

    MCAPI void setDisplayName(std::string const& displayName);

    MCAPI static std::unique_ptr<class Objective>
    deserialize(class CompoundTag const& dataTag, class Scoreboard& owner);

    MCAPI static std::unique_ptr<class CompoundTag> serialize(class Objective const& toSave);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool
    _modifyPlayerScore(int& result, struct ScoreboardId const& id, int value, ::PlayerScoreSetFunction action);

    MCAPI void _resetPlayer(struct ScoreboardId const& id);

    // NOLINTEND
};
