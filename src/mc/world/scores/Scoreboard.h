#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Scoreboard {

public:
    // prevent constructor by default
    Scoreboard& operator=(Scoreboard const&) = delete;
    Scoreboard(Scoreboard const&)            = delete;
    Scoreboard()                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?setDisplayObjective\@Scoreboard\@\@UEAAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjective\@\@W4ObjectiveSortOrder\@\@\@Z
     */
    virtual class DisplayObjective const*
    setDisplayObjective(std::string const&, class Objective const&, enum class ObjectiveSortOrder); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?clearDisplayObjective\@Scoreboard\@\@UEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Objective* clearDisplayObjective(std::string const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4(); // NOLINT
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?onObjectiveAdded\@Scoreboard\@\@UEAAXAEBVObjective\@\@\@Z
     */
    virtual void onObjectiveAdded(class Objective const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?onObjectiveRemoved\@Scoreboard\@\@UEAAXAEAVObjective\@\@\@Z
     */
    virtual void onObjectiveRemoved(class Objective&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onScoreChanged\@Scoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const&, class Objective const&); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13(); // NOLINT
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14(); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?isClientSide\@Scoreboard\@\@MEBA_NXZ
     */
    virtual bool isClientSide() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
    /**
     * @symbol ?createScoreboardId\@Scoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    MCVAPI struct ScoreboardId const& createScoreboardId(class Actor const&); // NOLINT
    /**
     * @symbol
     * ?createScoreboardId\@Scoreboard\@\@UEAAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct ScoreboardId const& createScoreboardId(std::string const&); // NOLINT
    /**
     * @symbol ?createScoreboardId\@Scoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCVAPI struct ScoreboardId const& createScoreboardId(class Player const&); // NOLINT
    /**
     * @symbol ?onPlayerIdentityUpdated\@Scoreboard\@\@UEAAXAEBUPlayerScoreboardId\@\@\@Z
     */
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const&); // NOLINT
    /**
     * @symbol ?onPlayerJoined\@Scoreboard\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerJoined(class Player const&); // NOLINT
    /**
     * @symbol ?onPlayerScoreRemoved\@Scoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const&, class Objective const&); // NOLINT
    /**
     * @symbol ?setPacketSender\@Scoreboard\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    MCVAPI void setPacketSender(class PacketSender*); // NOLINT
    /**
     * @symbol ?tick\@Scoreboard\@\@UEAAXXZ
     */
    MCVAPI void tick(); // NOLINT
    /**
     * @symbol ?writeToLevelStorage\@Scoreboard\@\@UEAAXXZ
     */
    MCVAPI void writeToLevelStorage(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Scoreboard(); // NOLINT
#endif
    /**
     * @symbol ??0Scoreboard\@\@QEAA\@VCommandSoftEnumRegistry\@\@\@Z
     */
    MCAPI Scoreboard(class CommandSoftEnumRegistry); // NOLINT
    /**
     * @symbol
     * ?addObjective\@Scoreboard\@\@QEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBVObjectiveCriteria\@\@\@Z
     */
    MCAPI class Objective*
    addObjective(std::string const&, std::string const&, class ObjectiveCriteria const&); // NOLINT
    /**
     * @symbol
     * ?addScoreListener\@Scoreboard\@\@QEAAXAEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addScoreListener(class Player&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?applyPlayerOperation\@Scoreboard\@\@QEAAHAEA_NAEAV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@AEBUScoreboardId\@\@AEAVObjective\@\@13W4CommandOperator\@\@\@Z
     */
    MCAPI int applyPlayerOperation(
        bool&,
        std::vector<struct ScoreboardId>&,
        struct ScoreboardId const&,
        class Objective&,
        std::vector<struct ScoreboardId>&,
        class Objective&,
        enum class CommandOperator
    ); // NOLINT
    /**
     * @symbol ?clearScoreboardIdentity\@Scoreboard\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearScoreboardIdentity(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol ?forEachIdentityRef\@Scoreboard\@\@QEAAXV?$function\@$$A6AXAEAVScoreboardIdentityRef\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachIdentityRef(class std::function<void(class ScoreboardIdentityRef&)>); // NOLINT
    /**
     * @symbol ?forEachObjective\@Scoreboard\@\@QEAAXV?$function\@$$A6AXAEAVObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachObjective(class std::function<void(class Objective&)>); // NOLINT
    /**
     * @symbol
     * ?getCriteria\@Scoreboard\@\@QEBAPEAVObjectiveCriteria\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ObjectiveCriteria* getCriteria(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getCriteriaNames\@Scoreboard\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getCriteriaNames() const; // NOLINT
    /**
     * @symbol
     * ?getDisplayInfoFiltered\@Scoreboard\@\@QEBA?AV?$vector\@UPlayerScore\@\@V?$allocator\@UPlayerScore\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getDisplayObjective\@Scoreboard\@\@QEBAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class DisplayObjective const* getDisplayObjective(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getDisplayObjectiveSlotNames\@Scoreboard\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const; // NOLINT
    /**
     * @symbol
     * ?getIdScores\@Scoreboard\@\@QEBA?AV?$vector\@UScoreInfo\@\@V?$allocator\@UScoreInfo\@\@\@std\@\@\@std\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const&) const; // NOLINT
    /**
     * @symbol
     * ?getObjective\@Scoreboard\@\@QEBAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Objective* getObjective(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?getObjectiveNames\@Scoreboard\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getObjectiveNames() const; // NOLINT
    /**
     * @symbol
     * ?getObjectives\@Scoreboard\@\@QEBA?AV?$vector\@PEBVObjective\@\@V?$allocator\@PEBVObjective\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Objective const*> getObjectives() const; // NOLINT
    /**
     * @symbol ?getScoreboardEventCoordinator\@Scoreboard\@\@QEAAAEAVScoreboardEventCoordinator\@\@XZ
     */
    MCAPI class ScoreboardEventCoordinator& getScoreboardEventCoordinator(); // NOLINT
    /**
     * @symbol ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(class Player const&) const; // NOLINT
    /**
     * @symbol ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(class Actor const&) const; // NOLINT
    /**
     * @symbol
     * ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(std::string const&) const; // NOLINT
    /**
     * @symbol ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const&) const; // NOLINT
    /**
     * @symbol ?getScoreboardIdentityRef\@Scoreboard\@\@QEAAPEAVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef* getScoreboardIdentityRef(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol
     * ?getScoreboardIdentityRefs\@Scoreboard\@\@QEBA?AV?$vector\@VScoreboardIdentityRef\@\@V?$allocator\@VScoreboardIdentityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const; // NOLINT
    /**
     * @symbol
     * ?getTrackedIds\@Scoreboard\@\@QEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const; // NOLINT
    /**
     * @symbol ?hasIdentityFor\@Scoreboard\@\@QEBA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool hasIdentityFor(struct ScoreboardId const&) const; // NOLINT
    /**
     * @symbol ?isObjectiveDisplayed\@Scoreboard\@\@QEBA_NAEBVObjective\@\@\@Z
     */
    MCAPI bool isObjectiveDisplayed(class Objective const&) const; // NOLINT
    /**
     * @symbol
     * ?modifyPlayerScore\@Scoreboard\@\@QEAAHAEA_NAEBUScoreboardId\@\@AEAVObjective\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI int modifyPlayerScore(
        bool&,
        struct ScoreboardId const&,
        class Objective&,
        int,
        enum class PlayerScoreSetFunction
    ); // NOLINT
    /**
     * @symbol
     * ?modifyPlayerScore\@Scoreboard\@\@QEAAHAEA_NPEAVScoreboardIdentityRef\@\@AEAVObjective\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI int modifyPlayerScore(
        bool&,
        class ScoreboardIdentityRef*,
        class Objective&,
        int,
        enum class PlayerScoreSetFunction
    ); // NOLINT
    /**
     * @symbol
     * ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const&, struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol
     * ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const&, std::string const&); // NOLINT
    /**
     * @symbol ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const&, struct PlayerScoreboardId const&); // NOLINT
    /**
     * @symbol ?removeObjective\@Scoreboard\@\@QEAA_NPEAVObjective\@\@\@Z
     */
    MCAPI bool removeObjective(class Objective*); // NOLINT
    /**
     * @symbol ?removeScoreListener\@Scoreboard\@\@QEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void removeScoreListener(class Player const&); // NOLINT
    /**
     * @symbol
     * ?removeScoreListener\@Scoreboard\@\@QEAAXAEBVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeScoreListener(class Player const&, std::string const&); // NOLINT
    /**
     * @symbol ?replaceFakePlayer\@Scoreboard\@\@QEAAXAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI void replaceFakePlayer(struct ScoreboardId const&, struct PlayerScoreboardId const&); // NOLINT
    /**
     * @symbol ?resetPlayerScore\@Scoreboard\@\@QEAAXAEBUScoreboardId\@\@AEAVObjective\@\@\@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const&, class Objective&); // NOLINT
    /**
     * @symbol ?resetPlayerScore\@Scoreboard\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol ?shouldClearScoresOnDeath\@Scoreboard\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool shouldClearScoresOnDeath(class Actor const&); // NOLINT
    /**
     * @symbol
     * ?DEFAULT_CRITERIA\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_CRITERIA; // NOLINT
    /**
     * @symbol
     * ?DISPLAY_SLOT_BELOWNAME\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME; // NOLINT
    /**
     * @symbol
     * ?DISPLAY_SLOT_LIST\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DISPLAY_SLOT_LIST; // NOLINT
    /**
     * @symbol
     * ?DISPLAY_SLOT_SIDEBAR\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR; // NOLINT
    /**
     * @symbol ?OBJECTIVES_ENUM\@Scoreboard\@\@2PEBDEB
     */
    MCAPI static char const* OBJECTIVES_ENUM; // NOLINT

    // protected:
    /**
     * @symbol
     * ?_addLoadedCriteria\@Scoreboard\@\@IEAAXV?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addLoadedCriteria(std::unique_ptr<class ObjectiveCriteria>); // NOLINT
    /**
     * @symbol
     * ?_addLoadedObjective\@Scoreboard\@\@IEAAXV?$unique_ptr\@VObjective\@\@U?$default_delete\@VObjective\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addLoadedObjective(std::unique_ptr<class Objective>); // NOLINT
    /**
     * @symbol
     * ?_getCriteriaMap\@Scoreboard\@\@IEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        std::string,
        std::unique_ptr<class ObjectiveCriteria>,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, std::unique_ptr<class ObjectiveCriteria>>>> const&
    _getCriteriaMap() const; // NOLINT
    /**
     * @symbol
     * ?_getObjectiveMap\@Scoreboard\@\@IEBAAEBV?$unordered_map\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VObjective\@\@U?$default_delete\@VObjective\@\@\@std\@\@\@2\@U?$hash\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@U?$equal_to\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@V?$allocator\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VObjective\@\@U?$default_delete\@VObjective\@\@\@std\@\@\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        std::string,
        std::unique_ptr<class Objective>,
        struct std::hash<std::string>,
        struct std::equal_to<std::string>,
        class std::allocator<struct std::pair<std::string const, std::unique_ptr<class Objective>>>> const&
    _getObjectiveMap() const; // NOLINT

    // private:
    /**
     * @symbol ?_init\@Scoreboard\@\@AEAAXXZ
     */
    MCAPI void _init(); // NOLINT

protected:
private:
};
