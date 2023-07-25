#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Scoreboard {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOREBOARD
public:
    Scoreboard& operator=(Scoreboard const&) = delete;
    Scoreboard(Scoreboard const&)            = delete;
    Scoreboard()                             = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?setDisplayObjective\@Scoreboard\@\@UEAAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVObjective\@\@W4ObjectiveSortOrder\@\@\@Z
     */
    virtual class DisplayObjective const*
    setDisplayObjective(std::string const&, class Objective const&, enum class ObjectiveSortOrder);
    /**
     * @vftbl 2
     * @symbol
     * ?clearDisplayObjective\@Scoreboard\@\@UEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual class Objective* clearDisplayObjective(std::string const&);
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?onObjectiveAdded\@Scoreboard\@\@UEAAXAEBVObjective\@\@\@Z
     */
    virtual void onObjectiveAdded(class Objective const&);
    /**
     * @vftbl 7
     * @symbol ?onObjectiveRemoved\@Scoreboard\@\@UEAAXAEAVObjective\@\@\@Z
     */
    virtual void onObjectiveRemoved(class Objective&);
    /**
     * @vftbl 8
     * @symbol ?onScoreChanged\@Scoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    virtual void onScoreChanged(struct ScoreboardId const&, class Objective const&);
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol ?isClientSide\@Scoreboard\@\@MEBA_NXZ
     */
    virtual bool isClientSide() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCOREBOARD
    /**
     * @symbol ?createScoreboardId\@Scoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    MCVAPI struct ScoreboardId const& createScoreboardId(class Actor const&);
    /**
     * @symbol
     * ?createScoreboardId\@Scoreboard\@\@UEAAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI struct ScoreboardId const& createScoreboardId(std::string const&);
    /**
     * @symbol ?createScoreboardId\@Scoreboard\@\@UEAAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCVAPI struct ScoreboardId const& createScoreboardId(class Player const&);
    /**
     * @symbol ?onPlayerIdentityUpdated\@Scoreboard\@\@UEAAXAEBUPlayerScoreboardId\@\@\@Z
     */
    MCVAPI void onPlayerIdentityUpdated(struct PlayerScoreboardId const&);
    /**
     * @symbol ?onPlayerJoined\@Scoreboard\@\@UEAAXAEBVPlayer\@\@\@Z
     */
    MCVAPI void onPlayerJoined(class Player const&);
    /**
     * @symbol ?onPlayerScoreRemoved\@Scoreboard\@\@UEAAXAEBUScoreboardId\@\@AEBVObjective\@\@\@Z
     */
    MCVAPI void onPlayerScoreRemoved(struct ScoreboardId const&, class Objective const&);
    /**
     * @symbol ?setPacketSender\@Scoreboard\@\@UEAAXPEAVPacketSender\@\@\@Z
     */
    MCVAPI void setPacketSender(class PacketSender*);
    /**
     * @symbol ?tick\@Scoreboard\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol ?writeToLevelStorage\@Scoreboard\@\@UEAAXXZ
     */
    MCVAPI void writeToLevelStorage();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Scoreboard();
#endif
    /**
     * @symbol ??0Scoreboard\@\@QEAA\@VCommandSoftEnumRegistry\@\@\@Z
     */
    MCAPI Scoreboard(class CommandSoftEnumRegistry);
    /**
     * @symbol
     * ?addObjective\@Scoreboard\@\@QEAAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBVObjectiveCriteria\@\@\@Z
     */
    MCAPI class Objective* addObjective(std::string const&, std::string const&, class ObjectiveCriteria const&);
    /**
     * @symbol
     * ?addScoreListener\@Scoreboard\@\@QEAAXAEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void addScoreListener(class Player&, std::string const&);
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
    );
    /**
     * @symbol ?clearScoreboardIdentity\@Scoreboard\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearScoreboardIdentity(struct ScoreboardId const&);
    /**
     * @symbol ?forEachIdentityRef\@Scoreboard\@\@QEAAXV?$function\@$$A6AXAEAVScoreboardIdentityRef\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachIdentityRef(class std::function<void(class ScoreboardIdentityRef&)>);
    /**
     * @symbol ?forEachObjective\@Scoreboard\@\@QEAAXV?$function\@$$A6AXAEAVObjective\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void forEachObjective(class std::function<void(class Objective&)>);
    /**
     * @symbol
     * ?getCriteria\@Scoreboard\@\@QEBAPEAVObjectiveCriteria\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ObjectiveCriteria* getCriteria(std::string const&) const;
    /**
     * @symbol
     * ?getCriteriaNames\@Scoreboard\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getCriteriaNames() const;
    /**
     * @symbol
     * ?getDisplayInfoFiltered\@Scoreboard\@\@QEBA?AV?$vector\@UPlayerScore\@\@V?$allocator\@UPlayerScore\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<struct PlayerScore> getDisplayInfoFiltered(std::string const&) const;
    /**
     * @symbol
     * ?getDisplayObjective\@Scoreboard\@\@QEBAPEBVDisplayObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class DisplayObjective const* getDisplayObjective(std::string const&) const;
    /**
     * @symbol
     * ?getDisplayObjectiveSlotNames\@Scoreboard\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getDisplayObjectiveSlotNames() const;
    /**
     * @symbol
     * ?getIdScores\@Scoreboard\@\@QEBA?AV?$vector\@UScoreInfo\@\@V?$allocator\@UScoreInfo\@\@\@std\@\@\@std\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI std::vector<struct ScoreInfo> getIdScores(struct ScoreboardId const&) const;
    /**
     * @symbol
     * ?getObjective\@Scoreboard\@\@QEBAPEAVObjective\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class Objective* getObjective(std::string const&) const;
    /**
     * @symbol
     * ?getObjectiveNames\@Scoreboard\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getObjectiveNames() const;
    /**
     * @symbol
     * ?getObjectives\@Scoreboard\@\@QEBA?AV?$vector\@PEBVObjective\@\@V?$allocator\@PEBVObjective\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class Objective const*> getObjectives() const;
    /**
     * @symbol ?getScoreboardEventCoordinator\@Scoreboard\@\@QEAAAEAVScoreboardEventCoordinator\@\@XZ
     */
    MCAPI class ScoreboardEventCoordinator& getScoreboardEventCoordinator();
    /**
     * @symbol ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(class Player const&) const;
    /**
     * @symbol ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBVActor\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(class Actor const&) const;
    /**
     * @symbol
     * ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(std::string const&) const;
    /**
     * @symbol ?getScoreboardId\@Scoreboard\@\@QEBAAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const&) const;
    /**
     * @symbol ?getScoreboardIdentityRef\@Scoreboard\@\@QEAAPEAVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef* getScoreboardIdentityRef(struct ScoreboardId const&);
    /**
     * @symbol
     * ?getScoreboardIdentityRefs\@Scoreboard\@\@QEBA?AV?$vector\@VScoreboardIdentityRef\@\@V?$allocator\@VScoreboardIdentityRef\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class ScoreboardIdentityRef> getScoreboardIdentityRefs() const;
    /**
     * @symbol
     * ?getTrackedIds\@Scoreboard\@\@QEBA?AV?$vector\@UScoreboardId\@\@V?$allocator\@UScoreboardId\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ScoreboardId> getTrackedIds() const;
    /**
     * @symbol ?hasIdentityFor\@Scoreboard\@\@QEBA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool hasIdentityFor(struct ScoreboardId const&) const;
    /**
     * @symbol ?isObjectiveDisplayed\@Scoreboard\@\@QEBA_NAEBVObjective\@\@\@Z
     */
    MCAPI bool isObjectiveDisplayed(class Objective const&) const;
    /**
     * @symbol
     * ?modifyPlayerScore\@Scoreboard\@\@QEAAHAEA_NAEBUScoreboardId\@\@AEAVObjective\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI int
    modifyPlayerScore(bool&, struct ScoreboardId const&, class Objective&, int, enum class PlayerScoreSetFunction);
    /**
     * @symbol
     * ?modifyPlayerScore\@Scoreboard\@\@QEAAHAEA_NPEAVScoreboardIdentityRef\@\@AEAVObjective\@\@HW4PlayerScoreSetFunction\@\@\@Z
     */
    MCAPI int
    modifyPlayerScore(bool&, class ScoreboardIdentityRef*, class Objective&, int, enum class PlayerScoreSetFunction);
    /**
     * @symbol
     * ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const&, struct ActorUniqueID const&);
    /**
     * @symbol
     * ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(struct ScoreboardId const&, std::string const&);
    /**
     * @symbol ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const& registerScoreboardIdentity(class CompoundTag const&);
    /**
     * @symbol
     * ?registerScoreboardIdentity\@Scoreboard\@\@QEAAAEBVScoreboardIdentityRef\@\@AEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI class ScoreboardIdentityRef const&
    registerScoreboardIdentity(struct ScoreboardId const&, struct PlayerScoreboardId const&);
    /**
     * @symbol ?removeObjective\@Scoreboard\@\@QEAA_NPEAVObjective\@\@\@Z
     */
    MCAPI bool removeObjective(class Objective*);
    /**
     * @symbol ?removeScoreListener\@Scoreboard\@\@QEAAXAEBVPlayer\@\@\@Z
     */
    MCAPI void removeScoreListener(class Player const&);
    /**
     * @symbol
     * ?removeScoreListener\@Scoreboard\@\@QEAAXAEBVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void removeScoreListener(class Player const&, std::string const&);
    /**
     * @symbol ?replaceFakePlayer\@Scoreboard\@\@QEAAXAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI void replaceFakePlayer(struct ScoreboardId const&, struct PlayerScoreboardId const&);
    /**
     * @symbol ?resetPlayerScore\@Scoreboard\@\@QEAAXAEBUScoreboardId\@\@AEAVObjective\@\@\@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const&, class Objective&);
    /**
     * @symbol ?resetPlayerScore\@Scoreboard\@\@QEAAXAEBUScoreboardId\@\@\@Z
     */
    MCAPI void resetPlayerScore(struct ScoreboardId const&);
    /**
     * @symbol
     * ?DEFAULT_CRITERIA\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DEFAULT_CRITERIA;
    /**
     * @symbol
     * ?DISPLAY_SLOT_BELOWNAME\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DISPLAY_SLOT_BELOWNAME;
    /**
     * @symbol
     * ?DISPLAY_SLOT_LIST\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DISPLAY_SLOT_LIST;
    /**
     * @symbol
     * ?DISPLAY_SLOT_SIDEBAR\@Scoreboard\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DISPLAY_SLOT_SIDEBAR;
    /**
     * @symbol ?OBJECTIVES_ENUM\@Scoreboard\@\@2PEBDEB
     */
    MCAPI static char const* OBJECTIVES_ENUM;
    /**
     * @symbol ?shouldClearScoresOnDeath\@Scoreboard\@\@SA_NAEBVActor\@\@\@Z
     */
    MCAPI static bool shouldClearScoresOnDeath(class Actor const&);

    // protected:
    /**
     * @symbol
     * ?_addLoadedCriteria\@Scoreboard\@\@IEAAXV?$unique_ptr\@VObjectiveCriteria\@\@U?$default_delete\@VObjectiveCriteria\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addLoadedCriteria(std::unique_ptr<class ObjectiveCriteria>);
    /**
     * @symbol
     * ?_addLoadedObjective\@Scoreboard\@\@IEAAXV?$unique_ptr\@VObjective\@\@U?$default_delete\@VObjective\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void _addLoadedObjective(std::unique_ptr<class Objective>);
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
    _getCriteriaMap() const;
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
    _getObjectiveMap() const;

    // private:
    /**
     * @symbol ?_init\@Scoreboard\@\@AEAAXXZ
     */
    MCAPI void _init();

protected:
private:
};
