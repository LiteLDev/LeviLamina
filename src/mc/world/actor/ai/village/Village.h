#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Village {
public:
    // Village inner types declare
    // clang-format off
    struct DwellerData;
    class StandingModifiers;
    // clang-format on

    // Village inner types define
    struct DwellerData {

    public:
        // prevent constructor by default
        DwellerData& operator=(DwellerData const&) = delete;
        DwellerData(DwellerData const&)            = delete;
        DwellerData()                              = delete;
    };

    class StandingModifiers {

    public:
        // prevent constructor by default
        StandingModifiers& operator=(StandingModifiers const&) = delete;
        StandingModifiers(StandingModifiers const&)            = delete;
        StandingModifiers()                                    = delete;

    public:
        /**
         * @symbol ?GOLEM_DEATH_PENALTY\@StandingModifiers\@Village\@\@2HB
         */
        MCAPI static int const GOLEM_DEATH_PENALTY; // NOLINT
        /**
         * @symbol ?LARGE_PENALTY\@StandingModifiers\@Village\@\@2HB
         */
        MCAPI static int const LARGE_PENALTY; // NOLINT
        /**
         * @symbol ?LARGE_REWARD\@StandingModifiers\@Village\@\@2HB
         */
        MCAPI static int const LARGE_REWARD; // NOLINT
        /**
         * @symbol ?MEDIUM_PENALTY\@StandingModifiers\@Village\@\@2HB
         */
        MCAPI static int const MEDIUM_PENALTY; // NOLINT
        /**
         * @symbol ?SMALL_PENALTY\@StandingModifiers\@Village\@\@2HB
         */
        MCAPI static int const SMALL_PENALTY; // NOLINT
        /**
         * @symbol ?SMALL_REWARD\@StandingModifiers\@Village\@\@2HB
         */
        MCAPI static int const SMALL_REWARD; // NOLINT
    };

public:
    // prevent constructor by default
    Village& operator=(Village const&) = delete;
    Village(Village const&)            = delete;
    Village()                          = delete;

public:
    /**
     * @symbol ??0Village\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI Village(class Dimension&, class mce::UUID, class BlockPos const&); // NOLINT
    /**
     * @symbol ?addActorToVillage\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addActorToVillage(enum class DwellerRole, struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?addAggressor\@Village\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void addAggressor(class Mob const&); // NOLINT
    /**
     * @symbol ?addPOI\@Village\@\@QEAA_NV?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>); // NOLINT
    /**
     * @symbol ?addVillager\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addVillager(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?checkNeedMoreVillagers\@Village\@\@QEBA_NXZ
     */
    MCAPI bool checkNeedMoreVillagers() const; // NOLINT
    /**
     * @symbol ?debugDraw\@Village\@\@QEAAXXZ
     */
    MCAPI void debugDraw(); // NOLINT
    /**
     * @symbol
     * ?fetchOwnedPOI\@Village\@\@QEAA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@AEBUActorUniqueID\@\@W4POIType\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance>
    fetchOwnedPOI(struct ActorUniqueID const&, enum class POIType); // NOLINT
    /**
     * @symbol ?fireSoundTheAlarm\@Village\@\@QEAAXXZ
     */
    MCAPI void fireSoundTheAlarm(); // NOLINT
    /**
     * @symbol ?getApproximateRadius\@Village\@\@QEBAMXZ
     */
    MCAPI float getApproximateRadius() const; // NOLINT
    /**
     * @symbol ?getBedPOICount\@Village\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBedPOICount() const; // NOLINT
    /**
     * @symbol ?getBounds\@Village\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const& getBounds() const; // NOLINT
    /**
     * @symbol ?getCenter\@Village\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getCenter() const; // NOLINT
    /**
     * @symbol ?getClosestAggressor\@Village\@\@QEAAPEAVActor\@\@PEAV2\@\@Z
     */
    MCAPI class Actor* getClosestAggressor(class Actor*); // NOLINT
    /**
     * @symbol ?getClosestBadStandingPlayer\@Village\@\@QEAAPEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCAPI class Player* getClosestBadStandingPlayer(class Actor&); // NOLINT
    /**
     * @symbol ?getClosestPOI\@Village\@\@QEAA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum class POIType, class BlockPos const&); // NOLINT
    /**
     * @symbol ?getRaid\@Village\@\@QEBAPEBVRaid\@\@XZ
     */
    MCAPI class Raid const* getRaid() const; // NOLINT
    /**
     * @symbol ?getRaidBounds\@Village\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const& getRaidBounds() const; // NOLINT
    /**
     * @symbol ?getRaidMutable\@Village\@\@QEAAPEAVRaid\@\@XZ
     */
    MCAPI class Raid* getRaidMutable(); // NOLINT
    /**
     * @symbol ?getStanding\@Village\@\@QEAAHAEBUActorUniqueID\@\@\@Z
     */
    MCAPI int getStanding(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?getUniqueID\@Village\@\@QEBA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getUniqueID() const; // NOLINT
    /**
     * @symbol ?hasInvalidRole\@Village\@\@QEAA_NAEBUActorUniqueID\@\@AEBW4DwellerRole\@\@\@Z
     */
    MCAPI bool hasInvalidRole(struct ActorUniqueID const&, enum class DwellerRole const&); // NOLINT
    /**
     * @symbol ?hasRaid\@Village\@\@QEBA_NXZ
     */
    MCAPI bool hasRaid() const; // NOLINT
    /**
     * @symbol ?hasSpecificDweller\@Village\@\@QEBA_NW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool hasSpecificDweller(enum class DwellerRole, struct ActorUniqueID const&) const; // NOLINT
    /**
     * @symbol
     * ?loadDataByKey\@Village\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadDataByKey(std::string const&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?modifyStanding\@Village\@\@QEAAHAEBUActorUniqueID\@\@H\@Z
     */
    MCAPI int modifyStanding(struct ActorUniqueID const&, int); // NOLINT
    /**
     * @symbol
     * ?removeActorFromVillage\@Village\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBUActorUniqueID\@\@UDwellerData\@Village\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@W4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class std::_List_iterator<class std::_List_val<
        struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>>
    removeActorFromVillage(enum class DwellerRole, struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?removeAllInstancesofActorFromVillage\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?removeVillageSavedData\@Village\@\@QEAAXXZ
     */
    MCAPI void removeVillageSavedData(); // NOLINT
    /**
     * @symbol ?resetDwellerTimer\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void resetDwellerTimer(enum class DwellerRole, struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?resetNoBreedTimer\@Village\@\@QEAAXXZ
     */
    MCAPI void resetNoBreedTimer(); // NOLINT
    /**
     * @symbol ?rewardAllPlayers\@Village\@\@QEAAXH\@Z
     */
    MCAPI void rewardAllPlayers(int); // NOLINT
    /**
     * @symbol ?setSavedDwellerPosition\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@VBlockPos\@\@\@Z
     */
    MCAPI void setSavedDwellerPosition(enum class DwellerRole, struct ActorUniqueID const&, class BlockPos); // NOLINT
    /**
     * @symbol ?tick\@Village\@\@QEAAXUTick\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tick(struct Tick, class BlockSource&); // NOLINT
    /**
     * @symbol ?tickRaid\@Village\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tickRaid(struct Tick); // NOLINT
    /**
     * @symbol ?triggerRaid\@Village\@\@QEAAXXZ
     */
    MCAPI void triggerRaid(); // NOLINT
    /**
     * @symbol ?trySetVillagerWorkTimestamp\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?unlinkMismatchedJobsites\@Village\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void unlinkMismatchedJobsites(class Actor const&); // NOLINT
    /**
     * @symbol ?villagerLivesHere\@Village\@\@QEBA_NAEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool villagerLivesHere(struct ActorUniqueID const&) const; // NOLINT
    /**
     * @symbol ?withinVillageBounds\@Village\@\@QEBA_NAEBVVec3\@\@M\@Z
     */
    MCAPI bool withinVillageBounds(class Vec3 const&, float) const; // NOLINT
    /**
     * @symbol ?isValidRegisteredPOI\@Village\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isValidRegisteredPOI(class BlockSource&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isVillagePOI\@Village\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isVillagePOI(class BlockSource const&, class BlockPos const&); // NOLINT
    /**
     * @symbol ?isVillagePOI\@Village\@\@SA_NAEBVVillageManager\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static bool isVillagePOI(class VillageManager const&, class Block const&); // NOLINT
    /**
     * @symbol ?DEBUG_DRAWING\@Village\@\@2_NA
     */
    MCAPI static bool DEBUG_DRAWING; // NOLINT
    /**
     * @symbol ?DWELLER_REMOVAL_TOLERANCE\@Village\@\@2MB
     */
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE; // NOLINT
    /**
     * @symbol ?MAX_VILLAGE_STANDING\@Village\@\@2HB
     */
    MCAPI static int const MAX_VILLAGE_STANDING; // NOLINT
    /**
     * @symbol ?MIN_VILLAGE_STANDING\@Village\@\@2HB
     */
    MCAPI static int const MIN_VILLAGE_STANDING; // NOLINT
    /**
     * @symbol
     * ?STORAGE_KEY_PREFIX\@Village\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_PREFIX; // NOLINT
    /**
     * @symbol ?VILLAGE_START_XZ_BOUNDS\@Village\@\@2HB
     */
    MCAPI static int const VILLAGE_START_XZ_BOUNDS; // NOLINT

    // private:
    /**
     * @symbol ?_addPoiToVillage\@Village\@\@AEAAXAEBUActorUniqueID\@\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void _addPoiToVillage(struct ActorUniqueID const&, class std::weak_ptr<class POIInstance>); // NOLINT
    /**
     * @symbol ?_calcPOIDist\@Village\@\@AEAAXXZ
     */
    MCAPI void _calcPOIDist(); // NOLINT
    /**
     * @symbol ?_claimUnclaimedPOIs\@Village\@\@AEAAXXZ
     */
    MCAPI void _claimUnclaimedPOIs(); // NOLINT
    /**
     * @symbol ?_clearVillagerPOIs\@Village\@\@AEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?_createRaid\@Village\@\@AEAAXXZ
     */
    MCAPI void _createRaid(); // NOLINT
    /**
     * @symbol ?_findAvailablePOI\@Village\@\@AEAA_N_KAEAVLevel\@\@AEAVRandom\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level&, class Random&, struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?_findPlayerCentricSpawnPointForRaid\@Village\@\@AEBA_NAEAVVec3\@\@_N\@Z
     */
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3&, bool) const; // NOLINT
    /**
     * @symbol
     * ?_findPreferredPOI\@Village\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@AEBVHashedString\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI void _findPreferredPOI(
        std::vector<class std::weak_ptr<class POIInstance>>&,
        class HashedString const&,
        struct ActorUniqueID
    ); // NOLINT
    /**
     * @symbol ?_findSpawnPointForRaid\@Village\@\@AEBA_NAEAVVec3\@\@MM_N1\@Z
     */
    MCAPI bool _findSpawnPointForRaid(class Vec3&, float, float, bool, bool) const; // NOLINT
    /**
     * @symbol ?_findSpawnableRegion\@Village\@\@AEBAPEAVBlockSource\@\@VVec3\@\@HAEA_N\@Z
     */
    MCAPI class BlockSource* _findSpawnableRegion(class Vec3, int, bool&) const; // NOLINT
    /**
     * @symbol
     * ?_findWeightedPOI\@Village\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI void _findWeightedPOI(
        std::vector<class std::weak_ptr<class POIInstance>>&,
        class Random&,
        struct ActorUniqueID
    ); // NOLINT
    /**
     * @symbol ?_helpLocateRaiders\@Village\@\@AEAAXAEBVRaid\@\@\@Z
     */
    MCAPI void _helpLocateRaiders(class Raid const&); // NOLINT
    /**
     * @symbol ?_loadVillageData\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillageData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_loadVillageDwellers\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillageDwellers(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_loadVillagePOIs\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillagePOIs(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?_playSoundFrom\@Village\@\@AEAAXAEBVVec3\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI void _playSoundFrom(class Vec3 const&, enum class LevelSoundEvent); // NOLINT
    /**
     * @symbol
     * ?_readyRaidGroup\@Village\@\@AEAAXAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void _readyRaidGroup(class std::unordered_set<
                               struct ActorUniqueID,
                               struct std::hash<struct ActorUniqueID>,
                               struct std::equal_to<struct ActorUniqueID>,
                               class std::allocator<struct ActorUniqueID>>&); // NOLINT
    /**
     * @symbol ?_ringBells\@Village\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _ringBells(class BlockSource&, class Random&) const; // NOLINT
    /**
     * @symbol ?_saveVillageData\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageData() const; // NOLINT
    /**
     * @symbol ?_saveVillageDwellers\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageDwellers() const; // NOLINT
    /**
     * @symbol ?_saveVillagePOIs\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillagePOIs() const; // NOLINT
    /**
     * @symbol ?_saveVillagePlayerStanding\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillagePlayerStanding() const; // NOLINT
    /**
     * @symbol ?_saveVillageRaid\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageRaid() const; // NOLINT
    /**
     * @symbol ?_spawnPassiveDwellers\@Village\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _spawnPassiveDwellers(class BlockSource&, int); // NOLINT
    /**
     * @symbol
     * ?_spawnRaidGroup\@Village\@\@AEBA_NVVec3\@\@EAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI bool
    _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>>&)
        const; // NOLINT
    /**
     * @symbol ?_tryShiftStandingsTowardNeutral\@Village\@\@AEAAXAEAUTick\@\@_K_N\@Z
     */
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick&, unsigned __int64, bool); // NOLINT
    /**
     * @symbol ?_trySpawnDefenderDwellers\@Village\@\@AEAAXAEAVBlockSource\@\@_K\@Z
     */
    MCAPI void _trySpawnDefenderDwellers(class BlockSource&, unsigned __int64); // NOLINT
    /**
     * @symbol ?_updateAndRemoveInactiveDwellers\@Village\@\@AEAAX_KM\@Z
     */
    MCAPI void _updateAndRemoveInactiveDwellers(unsigned __int64, float); // NOLINT
    /**
     * @symbol ?_updateClaimedPOIs\@Village\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateClaimedPOIs(class BlockSource&); // NOLINT
    /**
     * @symbol ?_updateUnclaimedPOIs\@Village\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateUnclaimedPOIs(class BlockSource&); // NOLINT

private:
    /**
     * @symbol ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE\@Village\@\@0MB
     */
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE; // NOLINT
    /**
     * @symbol
     * ?CELEBRATION_EVENT\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CELEBRATION_EVENT; // NOLINT
    /**
     * @symbol ?RAID_BOUNDS_PADDING\@Village\@\@0VVec3\@\@B
     */
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING; // NOLINT
    /**
     * @symbol
     * ?RAID_EXPIRY_EVENT\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAID_EXPIRY_EVENT; // NOLINT
    /**
     * @symbol ?RAID_FINISHED_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS; // NOLINT
    /**
     * @symbol ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS; // NOLINT
    /**
     * @symbol ?RAID_LOCATION_HELP_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS; // NOLINT
    /**
     * @symbol ?RAID_MAX_SPAWN_FAILURES\@Village\@\@0EB
     */
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES; // NOLINT
    /**
     * @symbol ?RAID_PREP_TIME_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_PREP_TIME_IN_TICKS; // NOLINT
    /**
     * @symbol ?RAID_TIMEOUT_IN_TICKS\@Village\@\@0UTick\@\@B
     */
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS; // NOLINT
    /**
     * @symbol ?STANDING_DECAY_INTERVAL_BAD\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD; // NOLINT
    /**
     * @symbol ?STANDING_DECAY_INTERVAL_GOOD\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD; // NOLINT
    /**
     * @symbol
     * ?STORAGE_KEY_DWELLERS\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_DWELLERS; // NOLINT
    /**
     * @symbol
     * ?STORAGE_KEY_PLAYERS\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_PLAYERS; // NOLINT
    /**
     * @symbol ?STORAGE_KEY_POI\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_POI; // NOLINT
    /**
     * @symbol ?STORAGE_KEY_RAID\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_RAID; // NOLINT
    /**
     * @symbol
     * ?STORAGE_KEY_VILLAGE\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_VILLAGE; // NOLINT
    /**
     * @symbol ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS\@Village\@\@0HB
     */
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS; // NOLINT
    /**
     * @symbol ?VILLAGER_EXPECTED_WORK_INTERVAL\@Village\@\@0_JB
     */
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL; // NOLINT
    /**
     * @symbol ?VILLAGE_HERO_BESTOW_TIME\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME; // NOLINT
    /**
     * @symbol ?VILLAGE_POI_PURGE_TIME\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME; // NOLINT
    /**
     * @symbol ?VILLAGE_RADIUS_APPROX_SCALAR\@Village\@\@0MB
     */
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR; // NOLINT
    /**
     * @symbol ?VILLAGE_SAVE_TICK_DELAY\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY; // NOLINT
    /**
     * @symbol ?VILLAGE_START_HEIGHT\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_START_HEIGHT; // NOLINT
    /**
     * @symbol ?VILLAGE_UNCLAIMED_POI_CAP\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP; // NOLINT
    /**
     * @symbol ?VILLAGE_UPDATE_TICK_DELAY\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY; // NOLINT
    /**
     * @symbol ?VILLAGE_VERSION_CURRENT\@Village\@\@0EB
     */
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT; // NOLINT
};
