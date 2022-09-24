/**
 * @file  Scoreboard.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Add include headers & pre-declares
class Player;
class Objective;
struct PlayerScore;

struct ScoreInfo {
    Objective* mObjective;
    bool mValid;
    int mValue;
	
    Objective* getObjective() {
        return mObjective;
    }
    int getCount() {
        return mValue;
    }
};
#undef BEFORE_EXTRA

/**
 * @brief MC class Scoreboard.
 *
 */
class Scoreboard {

#define AFTER_EXTRA
// Add new members to class
#define ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
public:

    /**
     * @brief Create a new objective.
     * 
     * @param objname The objective name
     * @param displayName The display name of the objective
     * @return The objective
     */
    LIAPI static Objective* newObjective(const std::string& objname, const std::string& displayName);

    //LIAPI static bool setDisplayObjective(const std::string& objname, const std::string& slot, int sort);
    //LIAPI static Objective* clearDisplayObjective(const std::string& slot);
    //LIAPI static Objective* getDisplayObjective(const std::string& slot);
    LIAPI static bool removeFromObjective(const std::string& objname, const std::string& id);

    /**
     * @brief Remove the score of a player from an objective.
     * 
     * @param objname The objective name
     * @param player The player
     * @return True if removed; otherwise false.
     */
    LIAPI static bool removeFromObjective(const std::string& objname, Player* player);

    LIAPI static struct ScoreboardId& getOrCreateScoreboardId(std::string const& id);
    LIAPI static int getScore(const std::string& objname, const std::string& id);
    LIAPI static bool getScore(const std::string& objname, const std::string& id, int& score);
    LIAPI static std::optional<int> setScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> addScore(const std::string& objname, const std::string& id, int score);
    LIAPI static std::optional<int> reduceScore(const std::string& objname, const std::string& id, int score);

    /**
     * @brief Get the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @return The score
     * @exception std::invalid_argument The objective is not found.
     * @exception std::runtime_error Failed to get the score.
     */
    LIAPI static int getScore(const std::string& objname, Player* player);

    LIAPI static int getScore(Player* player, const std::string& objname);
    LIAPI static bool getScore(const std::string& objname, Player* player, int& score);

    /**
     * @brief Set the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @param value The score
     * @return True if set; otherwise false.
     */
    LIAPI static bool setScore(const std::string& objname, Player* player, int value);

    LIAPI static bool setScore(Player* player, const std::string& objname, int value);

    /**
     * @brief Add the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @param value The added score
     * @return True if added; otherwise false.
     */
    LIAPI static bool addScore(const std::string& objname, Player* player, int value);

    LIAPI static bool addScore(Player* player, const std::string& objname, int value);

    /**
     * @brief Reduce the score of a player of an objective.
     *
     * @param objname The objective name
     * @param player The player
     * @param value The reduced score
     * @return True if reduced; otherwise false.
     */
    LIAPI static bool reduceScore(const std::string& objname, Player* player, int value);

    LIAPI static bool reduceScore(Player* player, const std::string& objname, int value);

    LIAPI static bool deleteScore(const std::string& objname, Player* player);
    LIAPI static bool deleteScore(Player* player, const std::string& objname);

    LIAPI static bool scoreboardIdIsValid(ScoreboardId* id);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARD
public:
    class Scoreboard& operator=(class Scoreboard const &) = delete;
    Scoreboard(class Scoreboard const &) = delete;
    Scoreboard() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~Scoreboard();
    /**
     * @hash   -364918607
     * @vftbl  1
     * @symbol ?setDisplayObjective@Scoreboard@@UEAAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVObjective@@W4ObjectiveSortOrder@@@Z
     */
    virtual class DisplayObjective const * setDisplayObjective(std::string const &, class Objective const &, enum ObjectiveSortOrder);
    /**
     * @hash   -775064832
     * @vftbl  2
     * @symbol ?clearDisplayObjective@Scoreboard@@UEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual class Objective * clearDisplayObjective(std::string const &);
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -2073065113
     * @vftbl  6
     * @symbol ?onObjectiveAdded@Scoreboard@@UEAAXAEBVObjective@@@Z
     */
    virtual void onObjectiveAdded(class Objective const &);
    /**
     * @hash   1534315386
     * @vftbl  7
     * @symbol ?onObjectiveRemoved@Scoreboard@@UEAAXAEAVObjective@@@Z
     */
    virtual void onObjectiveRemoved(class Objective &);
    /**
     * @hash   467471317
     * @vftbl  8
     * @symbol ?onScoreChanged@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const &, class Objective const &);
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @hash   1576626793
     * @vftbl  15
     * @symbol ?isClientSide@Scoreboard@@MEBA_NXZ
     */
    virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
    /**
     * @hash   -1838350687
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVActor@@@Z
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(class Actor const &);
    /**
     * @hash   1435999353
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(std::string const &);
    /**
     * @hash   -99717203
     * @symbol ?createScoreboardId@Scoreboard@@UEAAAEBUScoreboardId@@AEBVPlayer@@@Z
     */
    MCVAPI struct ScoreboardId const & createScoreboardId(class Player const &);
    /**
     * @hash   260361262
     * @symbol ?onPlayerIdentityUpdated@Scoreboard@@UEAAXAEBUPlayerScoreboardId@@@Z
     */
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const &);
    /**
     * @hash   766430996
     * @symbol ?onPlayerJoined@Scoreboard@@UEAAXAEBVPlayer@@@Z
     */
    MCVAPI void onPlayerJoined(class Player const &);
    /**
     * @hash   1199020114
     * @symbol ?onPlayerScoreRemoved@Scoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z
     */
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const &, class Objective const &);
    /**
     * @hash   -1060916191
     * @symbol ?setPacketSender@Scoreboard@@UEAAXPEAVPacketSender@@@Z
     */
    MCVAPI void setPacketSender(class PacketSender *);
    /**
     * @hash   919992688
     * @symbol ?tick@Scoreboard@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   1117715140
     * @symbol ?writeToLevelStorage@Scoreboard@@UEAAXXZ
     */
    MCVAPI void writeToLevelStorage();
#endif
    /**
     * @hash   390278983
     * @symbol ??0Scoreboard@@QEAA@VCommandSoftEnumRegistry@@@Z
     */
    MCAPI Scoreboard(class CommandSoftEnumRegistry);
    /**
     * @hash   -2021879117
     * @symbol ?addObjective@Scoreboard@@QEAAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVObjectiveCriteria@@@Z
     */
    MCAPI class Objective * addObjective(std::string const &, std::string const &, class ObjectiveCriteria const &);
    /**
     * @hash   2109342929
     * @symbol ?addScoreListener@Scoreboard@@QEAAXAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void addScoreListener(class Player &, std::string const &);
    /**
     * @hash   1122014783
     * @symbol ?applyPlayerOperation@Scoreboard@@QEAAHAEA_NAEAV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@AEBUScoreboardId@@AEAVObjective@@13W4CommandOperator@@@Z
     */
    MCAPI int applyPlayerOperation(bool &, std::vector<struct ScoreboardId> &, struct ScoreboardId const &, class Objective &, std::vector<struct ScoreboardId> &, class Objective &, enum CommandOperator);
    /**
     * @hash   1603784129
     * @symbol ?clearScoreboardIdentity@Scoreboard@@QEAA_NAEBUScoreboardId@@@Z
     */
    MCAPI bool clearScoreboardIdentity(struct ScoreboardId const &);
    /**
     * @hash   1514946671
     * @symbol ?forEachIdentityRef@Scoreboard@@QEAAXV?$function@$$A6AXAEAVScoreboardIdentityRef@@@Z@std@@@Z
     */
    MCAPI void forEachIdentityRef(class std::function<void (class ScoreboardIdentityRef &)>);
    /**
     * @hash   -117591361
     * @symbol ?forEachObjective@Scoreboard@@QEAAXV?$function@$$A6AXAEAVObjective@@@Z@std@@@Z
     */
    MCAPI void forEachObjective(class std::function<void (class Objective &)>);
    /**
     * @hash   245912030
     * @symbol ?getCriteria@Scoreboard@@QEBAPEAVObjectiveCriteria@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ObjectiveCriteria * getCriteria(std::string const &) const;
    /**
     * @hash   -35455533
     * @symbol ?getCriteriaNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getCriteriaNames() const;
    /**
     * @hash   672470407
     * @symbol ?getDisplayInfoFiltered@Scoreboard@@QEBA?AV?$vector@UPlayerScore@@V?$allocator@UPlayerScore@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const &) const;
    /**
     * @hash   -1358817708
     * @symbol ?getDisplayObjective@Scoreboard@@QEBAPEBVDisplayObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class DisplayObjective const * getDisplayObjective(std::string const &) const;
    /**
     * @hash   -1509465785
     * @symbol ?getDisplayObjectiveSlotNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
    /**
     * @hash   -1890522823
     * @symbol ?getIdScores@Scoreboard@@QEBA?AV?$vector@UScoreInfo@@V?$allocator@UScoreInfo@@@std@@@std@@AEBUScoreboardId@@@Z
     */
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const &) const;
    /**
     * @hash   -1319692994
     * @symbol ?getObjective@Scoreboard@@QEBAPEAVObjective@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class Objective * getObjective(std::string const &) const;
    /**
     * @hash   1712437401
     * @symbol ?getObjectiveNames@Scoreboard@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getObjectiveNames() const;
    /**
     * @hash   -1908583278
     * @symbol ?getObjectives@Scoreboard@@QEBA?AV?$vector@PEBVObjective@@V?$allocator@PEBVObjective@@@std@@@std@@XZ
     */
    MCAPI std::vector<class Objective const *> getObjectives() const;
    /**
     * @hash   -266085662
     * @symbol ?getScoreboardEventCoordinator@Scoreboard@@QEAAAEAVScoreboardEventCoordinator@@XZ
     */
    MCAPI class ScoreboardEventCoordinator & getScoreboardEventCoordinator();
    /**
     * @hash   -157735099
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(struct PlayerScoreboardId const &) const;
    /**
     * @hash   -1828347375
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(std::string const &) const;
    /**
     * @hash   14213467
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVActor@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(class Actor const &) const;
    /**
     * @hash   848472453
     * @symbol ?getScoreboardId@Scoreboard@@QEBAAEBUScoreboardId@@AEBVPlayer@@@Z
     */
    MCAPI struct ScoreboardId const & getScoreboardId(class Player const &) const;
    /**
     * @hash   -1845481728
     * @symbol ?getScoreboardIdentityRef@Scoreboard@@QEAAPEAVScoreboardIdentityRef@@AEBUScoreboardId@@@Z
     */
    MCAPI class ScoreboardIdentityRef * getScoreboardIdentityRef(struct ScoreboardId const &);
    /**
     * @hash   -314678772
     * @symbol ?getScoreboardIdentityRefs@Scoreboard@@QEBA?AV?$vector@VScoreboardIdentityRef@@V?$allocator@VScoreboardIdentityRef@@@std@@@std@@XZ
     */
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    /**
     * @hash   458773794
     * @symbol ?getTrackedIds@Scoreboard@@QEBA?AV?$vector@UScoreboardId@@V?$allocator@UScoreboardId@@@std@@@std@@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    /**
     * @hash   319080583
     * @symbol ?isObjectiveDisplayed@Scoreboard@@QEBA_NAEBVObjective@@@Z
     */
    MCAPI bool isObjectiveDisplayed(class Objective const &) const;
    /**
     * @hash   1845067238
     * @symbol ?modifyPlayerScore@Scoreboard@@QEAAHAEA_NAEBUScoreboardId@@AEAVObjective@@HW4PlayerScoreSetFunction@@@Z
     */
    MCAPI int modifyPlayerScore(bool &, struct ScoreboardId const &, class Objective &, int, enum PlayerScoreSetFunction);
    /**
     * @hash   887612292
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUActorUniqueID@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct ActorUniqueID const &);
    /**
     * @hash   -1830803140
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   728464656
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBUScoreboardId@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(struct ScoreboardId const &, std::string const &);
    /**
     * @hash   -524929659
     * @symbol ?registerScoreboardIdentity@Scoreboard@@QEAAAEBVScoreboardIdentityRef@@AEBVCompoundTag@@@Z
     */
    MCAPI class ScoreboardIdentityRef const & registerScoreboardIdentity(class CompoundTag const &);
    /**
     * @hash   1106379282
     * @symbol ?removeObjective@Scoreboard@@QEAA_NPEAVObjective@@@Z
     */
    MCAPI bool removeObjective(class Objective *);
    /**
     * @hash   1489672602
     * @symbol ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@@Z
     */
    MCAPI void removeScoreListener(class Player const &);
    /**
     * @hash   -599826513
     * @symbol ?removeScoreListener@Scoreboard@@QEAAXAEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void removeScoreListener(class Player const &, std::string const &);
    /**
     * @hash   -1949585651
     * @symbol ?replaceFakePlayer@Scoreboard@@QEAAXAEBUScoreboardId@@AEBUPlayerScoreboardId@@@Z
     */
    MCAPI void replaceFakePlayer(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @hash   577737214
     * @symbol ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const &);
    /**
     * @hash   1004803937
     * @symbol ?resetPlayerScore@Scoreboard@@QEAAXAEBUScoreboardId@@AEAVObjective@@@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const &, class Objective &);
    /**
     * @hash   491570341
     * @symbol ?DEFAULT_CRITERIA@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DEFAULT_CRITERIA;
    /**
     * @hash   -270901829
     * @symbol ?DISPLAY_SLOT_BELOWNAME@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
    /**
     * @hash   429835057
     * @symbol ?DISPLAY_SLOT_LIST@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DISPLAY_SLOT_LIST;
    /**
     * @hash   342426011
     * @symbol ?DISPLAY_SLOT_SIDEBAR@Scoreboard@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
    /**
     * @hash   -1205328888
     * @symbol ?OBJECTIVES_ENUM@Scoreboard@@2PEBDEB
     */
    MCAPI static char const * OBJECTIVES_ENUM;
    /**
     * @hash   451424235
     * @symbol ?shouldClearScoresOnDeath@Scoreboard@@SA_NAEBVActor@@@Z
     */
    MCAPI static bool shouldClearScoresOnDeath(class Actor const &);

//protected:
    /**
     * @hash   -1764504082
     * @symbol ?_addLoadedCriteria@Scoreboard@@IEAAXV?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@std@@@Z
     */
    MCAPI void _addLoadedCriteria(std::unique_ptr<class ObjectiveCriteria>);
    /**
     * @hash   2119269808
     * @symbol ?_addLoadedObjective@Scoreboard@@IEAAXV?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@std@@@Z
     */
    MCAPI void _addLoadedObjective(std::unique_ptr<class Objective>);
    /**
     * @hash   1443992408
     * @symbol ?_getCriteriaMap@Scoreboard@@IEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@2@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class ObjectiveCriteria>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ObjectiveCriteria>>>> const & _getCriteriaMap() const;
    /**
     * @hash   -81008484
     * @symbol ?_getObjectiveMap@Scoreboard@@IEBAAEBV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@2@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VObjective@@U?$default_delete@VObjective@@@std@@@2@@std@@@2@@std@@XZ
     */
    MCAPI class std::unordered_map<std::string, std::unique_ptr<class Objective>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class Objective>>>> const & _getObjectiveMap() const;

//private:
    /**
     * @hash   1700390583
     * @symbol ?_init@Scoreboard@@AEAAXXZ
     */
    MCAPI void _init();

protected:

private:

};