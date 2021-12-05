#ifdef EXTRA_INCLUDE_PART_SCOREBOARD
// Add include headers & pre-declares
class Player;
class Objective;
struct PlayerScore;

struct ScoreInfo {
    char filler[20];
    Objective* getObjective() {
        return dAccess<Objective*>(this, 0);
    }
    int getCount() {
        return dAccess<int>(this, 12);
    }
};
#else
// Add new members to class
public:

    inline struct ScoreboardId const& createScoreboardId(std::string const& a0) {
        struct ScoreboardId const& (Scoreboard::*rv)(std::string const&);
        *((void**)&rv) = dlsym("?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        return (this->*rv)(std::forward<std::string const&>(a0));
    }

    inline struct ScoreboardId const& createScoreboardId(class Player const& a0) {
        struct ScoreboardId const& (Scoreboard::*rv)(class Player const&);
        *((void**)&rv) = dlsym("?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z");
        return (this->*rv)(std::forward<class Player const&>(a0));
    }

    LIAPI static Objective* newObjective(const std::string& objname, const std::string& displayName);
    LIAPI static bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    //LIAPI static Objective* clearDisplayObjective(const std::string& slot);
    //LIAPI static Objective* getDisplayObjective(const std::string& slot);
    LIAPI static bool removeFromObjective(const std::string& objname, const std::string& id);
    LIAPI static bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI static struct ScoreboardId& getOrCreateScoreboardId(std::string const& id);

    LIAPI static int getScore(const std::string& objname, const std::string& id);
    LIAPI static std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> reduceScore(const std::string& objname, const std::string& id, int score);

    LIAPI static int getScore(Player* player, const std::string& key);
    LIAPI static bool setScore(Player* player, const std::string& key, int value);
    LIAPI static bool addScore(Player* player, const std::string& key, int value);
    LIAPI static bool reduceScore(Player* player, const std::string& key, int value);
    LIAPI static bool deleteScore(Player* player, const std::string& objname);

    LIAPI static bool scoreboardIdIsValid(ScoreboardId* id);
#endif