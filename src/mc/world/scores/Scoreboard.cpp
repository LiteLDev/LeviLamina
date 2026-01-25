#include "mc/world/scores/Scoreboard.h"
#include "mc/world/scores/ScoreboardIdentityRef.h"

int Scoreboard::modifyPlayerScore(
    ScoreboardOperationResult& result,
    ScoreboardId const&        id,
    Objective&                 objective,
    int                        scoreValue,
    PlayerScoreSetFunction     action
) {
    if (auto it = mIdentityRefs->find(id); it != mIdentityRefs->end()) {
        int newScore = 0;
        result       = it->second.modifyScoreInObjective(newScore, objective, scoreValue, action);
        if (result == ScoreboardOperationResult::Success) {
            onScoreChanged(id, objective);
        }
        return newScore;
    }
    result = ScoreboardOperationResult::UnknownId;
    return 0;
}
