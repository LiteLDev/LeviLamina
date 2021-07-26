#include <Scoreboard/ScoreInfo.h>
#include <Scoreboard/ScoreboardId.h>
#include <cstring>
#include <hook.h>

class Scoreboard {
public:
    MCAPI struct ScoreboardId const&          getScoreboardId(class Actor const&) const;
    MCAPI class std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const&) const;
    MCAPI class Objective*                    getObjective(std::string const&) const;
};