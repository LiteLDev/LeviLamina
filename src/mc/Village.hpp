/**
 * @file  Village.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Village.
 *
 */
class Village {

#define AFTER_EXTRA
// Add Member There
public:
struct DwellerData {
    DwellerData() = delete;
    DwellerData(DwellerData const&) = delete;
    DwellerData(DwellerData const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGE
public:
    class Village& operator=(class Village const &) = delete;
    Village(class Village const &) = delete;
    Village() = delete;
#endif

public:
    /**
     * @symbol  ??0Village\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI Village(class Dimension &, class mce::UUID, class BlockPos const &);
    /**
     * @symbol  ?addActorToVillage\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addActorToVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol  ?addAggressor\@Village\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void addAggressor(class Mob const &);
    /**
     * @symbol  ?addPOI\@Village\@\@QEAA_NV?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>);
    /**
     * @symbol  ?addVillager\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addVillager(struct ActorUniqueID const &);
    /**
     * @symbol  ?alwaysTickRaid\@Village\@\@QEBA_NXZ
     */
    MCAPI bool alwaysTickRaid() const;
    /**
     * @symbol  ?canRemove\@Village\@\@QEBA_NXZ
     */
    MCAPI bool canRemove() const;
    /**
     * @symbol  ?checkNeedMoreVillagers\@Village\@\@QEBA_NXZ
     */
    MCAPI bool checkNeedMoreVillagers() const;
    /**
     * @symbol  ?clearOwnedPOIs\@Village\@\@QEAAXXZ
     */
    MCAPI void clearOwnedPOIs();
    /**
     * @symbol  ?debugDraw\@Village\@\@QEAAXXZ
     */
    MCAPI void debugDraw();
    /**
     * @symbol  ?fetchOwnedPOI\@Village\@\@QEAA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@AEBUActorUniqueID\@\@W4POIType\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const &, enum class POIType);
    /**
     * @symbol  ?fireSoundTheAlarm\@Village\@\@QEAAXXZ
     */
    MCAPI void fireSoundTheAlarm();
    /**
     * @symbol  ?getApproximateRadius\@Village\@\@QEBAMXZ
     */
    MCAPI float getApproximateRadius() const;
    /**
     * @symbol  ?getBedPOICount\@Village\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBedPOICount() const;
    /**
     * @symbol  ?getBounds\@Village\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getBounds() const;
    /**
     * @symbol  ?getCenter\@Village\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getCenter() const;
    /**
     * @symbol  ?getClosestAggressor\@Village\@\@QEAAPEAVActor\@\@PEAV2\@\@Z
     */
    MCAPI class Actor * getClosestAggressor(class Actor *);
    /**
     * @symbol  ?getClosestBadStandingPlayer\@Village\@\@QEAAPEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCAPI class Player * getClosestBadStandingPlayer(class Actor &);
    /**
     * @symbol  ?getClosestPOI\@Village\@\@QEAA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum class POIType, class BlockPos const &);
    /**
     * @symbol  ?getRaid\@Village\@\@QEBAPEBVRaid\@\@XZ
     */
    MCAPI class Raid const * getRaid() const;
    /**
     * @symbol  ?getRaidBounds\@Village\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getRaidBounds() const;
    /**
     * @symbol  ?getRaidMutable\@Village\@\@QEAAPEAVRaid\@\@XZ
     */
    MCAPI class Raid * getRaidMutable();
    /**
     * @symbol  ?getStanding\@Village\@\@QEAAHAEBUActorUniqueID\@\@\@Z
     */
    MCAPI int getStanding(struct ActorUniqueID const &);
    /**
     * @symbol  ?getUnclaimedPOIs\@Village\@\@QEBAAEBV?$array\@V?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@$02\@std\@\@XZ
     */
    MCAPI class std::array<std::vector<class std::weak_ptr<class POIInstance>>, 3> const & getUnclaimedPOIs() const;
    /**
     * @symbol  ?getUniqueID\@Village\@\@QEBA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getUniqueID() const;
    /**
     * @symbol  ?hasInvalidRole\@Village\@\@QEAA_NAEBUActorUniqueID\@\@AEBW4DwellerRole\@\@\@Z
     */
    MCAPI bool hasInvalidRole(struct ActorUniqueID const &, enum class DwellerRole const &);
    /**
     * @symbol  ?hasRaid\@Village\@\@QEBA_NXZ
     */
    MCAPI bool hasRaid() const;
    /**
     * @symbol  ?hasSpecificDweller\@Village\@\@QEBA_NW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool hasSpecificDweller(enum class DwellerRole, struct ActorUniqueID const &) const;
    /**
     * @symbol  ?loadDataByKey\@Village\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadDataByKey(std::string const &, class CompoundTag const &);
    /**
     * @symbol  ?modifyStanding\@Village\@\@QEAAHAEBUActorUniqueID\@\@H\@Z
     */
    MCAPI int modifyStanding(struct ActorUniqueID const &, int);
    /**
     * @symbol  ?removeActorFromVillage\@Village\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBUActorUniqueID\@\@UDwellerData\@Village\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@W4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>> removeActorFromVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol  ?removeAllInstancesofActorFromVillage\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const &);
    /**
     * @symbol  ?removeVillageSavedData\@Village\@\@QEAAXXZ
     */
    MCAPI void removeVillageSavedData();
    /**
     * @symbol  ?resetDwellerTimer\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void resetDwellerTimer(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @symbol  ?resetNoBreedTimer\@Village\@\@QEAAXXZ
     */
    MCAPI void resetNoBreedTimer();
    /**
     * @symbol  ?rewardAllPlayers\@Village\@\@QEAAXH\@Z
     */
    MCAPI void rewardAllPlayers(int);
    /**
     * @symbol  ?saveEntireVillage\@Village\@\@QEAAXXZ
     */
    MCAPI void saveEntireVillage();
    /**
     * @symbol  ?setSavedDwellerPosition\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@VBlockPos\@\@\@Z
     */
    MCAPI void setSavedDwellerPosition(enum class DwellerRole, struct ActorUniqueID const &, class BlockPos);
    /**
     * @symbol  ?tick\@Village\@\@QEAAXUTick\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tick(struct Tick, class BlockSource &);
    /**
     * @symbol  ?tickRaid\@Village\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tickRaid(struct Tick);
    /**
     * @symbol  ?triggerRaid\@Village\@\@QEAAXXZ
     */
    MCAPI void triggerRaid();
    /**
     * @symbol  ?trySetVillagerWorkTimestamp\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const &);
    /**
     * @symbol  ?unlinkMismatchedJobsites\@Village\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void unlinkMismatchedJobsites(class Actor const &);
    /**
     * @symbol  ?villagerLivesHere\@Village\@\@QEBA_NAEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool villagerLivesHere(struct ActorUniqueID const &) const;
    /**
     * @symbol  ?withinVillageBounds\@Village\@\@QEBA_NAEBVVec3\@\@M\@Z
     */
    MCAPI bool withinVillageBounds(class Vec3 const &, float) const;
    /**
     * @symbol  ??1Village\@\@QEAA\@XZ
     */
    MCAPI ~Village();
    /**
     * @symbol  ?DEBUG_DRAWING\@Village\@\@2_NA
     */
    MCAPI static bool DEBUG_DRAWING;
    /**
     * @symbol  ?DWELLER_REMOVAL_TOLERANCE\@Village\@\@2MB
     */
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;
    /**
     * @symbol  ?MAX_VILLAGE_STANDING\@Village\@\@2HB
     */
    MCAPI static int const MAX_VILLAGE_STANDING;
    /**
     * @symbol  ?MIN_VILLAGE_STANDING\@Village\@\@2HB
     */
    MCAPI static int const MIN_VILLAGE_STANDING;
    /**
     * @symbol  ?STORAGE_KEY_PREFIX\@Village\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_PREFIX;
    /**
     * @symbol  ?VILLAGE_START_XZ_BOUNDS\@Village\@\@2HB
     */
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;
    /**
     * @symbol  ?isValidRegisteredPOI\@Village\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isValidRegisteredPOI(class BlockSource &, class BlockPos const &);
    /**
     * @symbol  ?isVillagePOI\@Village\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isVillagePOI(class BlockSource const &, class BlockPos const &);
    /**
     * @symbol  ?isVillagePOI\@Village\@\@SA_NAEBVVillageManager\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static bool isVillagePOI(class VillageManager const &, class Block const &);

//private:
    /**
     * @symbol  ?_addPoiToVillage\@Village\@\@AEAAXAEBUActorUniqueID\@\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void _addPoiToVillage(struct ActorUniqueID const &, class std::weak_ptr<class POIInstance>);
    /**
     * @symbol  ?_calcPOIDist\@Village\@\@AEAAXXZ
     */
    MCAPI void _calcPOIDist();
    /**
     * @symbol  ?_claimUnclaimedPOIs\@Village\@\@AEAAXXZ
     */
    MCAPI void _claimUnclaimedPOIs();
    /**
     * @symbol  ?_clearVillagerPOIs\@Village\@\@AEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const &);
    /**
     * @symbol  ?_createRaid\@Village\@\@AEAAXXZ
     */
    MCAPI void _createRaid();
    /**
     * @symbol  ?_findAvailablePOI\@Village\@\@AEAA_N_KAEAVLevel\@\@AEAVRandom\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level &, class Random &, struct ActorUniqueID);
    /**
     * @symbol  ?_findPlayerCentricSpawnPointForRaid\@Village\@\@AEBA_NAEAVVec3\@\@_N\@Z
     */
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3 &, bool) const;
    /**
     * @symbol  ?_findPreferredPOI\@Village\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@AEBVHashedString\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI void _findPreferredPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class HashedString const &, struct ActorUniqueID);
    /**
     * @symbol  ?_findSpawnPointForRaid\@Village\@\@AEBA_NAEAVVec3\@\@MM_N1\@Z
     */
    MCAPI bool _findSpawnPointForRaid(class Vec3 &, float, float, bool, bool) const;
    /**
     * @symbol  ?_findSpawnableRegion\@Village\@\@AEBAPEAVBlockSource\@\@VVec3\@\@HAEA_N\@Z
     */
    MCAPI class BlockSource * _findSpawnableRegion(class Vec3, int, bool &) const;
    /**
     * @symbol  ?_findWeightedPOI\@Village\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI void _findWeightedPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class Random &, struct ActorUniqueID);
    /**
     * @symbol  ?_helpLocateRaiders\@Village\@\@AEAAXAEBVRaid\@\@\@Z
     */
    MCAPI void _helpLocateRaiders(class Raid const &);
    /**
     * @symbol  ?_loadVillageData\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillageData(class CompoundTag const &);
    /**
     * @symbol  ?_loadVillageDwellers\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillageDwellers(class CompoundTag const &);
    /**
     * @symbol  ?_loadVillagePOIs\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillagePOIs(class CompoundTag const &);
    /**
     * @symbol  ?_playSoundFrom\@Village\@\@AEAAXAEBVVec3\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI void _playSoundFrom(class Vec3 const &, enum class LevelSoundEvent);
    /**
     * @symbol  ?_readyRaidGroup\@Village\@\@AEAAXAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void _readyRaidGroup(class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &);
    /**
     * @symbol  ?_ringBells\@Village\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _ringBells(class BlockSource &, class Random &) const;
    /**
     * @symbol  ?_saveVillageData\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageData() const;
    /**
     * @symbol  ?_saveVillageDwellers\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageDwellers() const;
    /**
     * @symbol  ?_saveVillagePOIs\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillagePOIs() const;
    /**
     * @symbol  ?_saveVillagePlayerStanding\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillagePlayerStanding() const;
    /**
     * @symbol  ?_saveVillageRaid\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageRaid() const;
    /**
     * @symbol  ?_spawnPassiveDwellers\@Village\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _spawnPassiveDwellers(class BlockSource &, int);
    /**
     * @symbol  ?_spawnRaidGroup\@Village\@\@AEBA_NVVec3\@\@EAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI bool _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &) const;
    /**
     * @symbol  ?_tryShiftStandingsTowardNeutral\@Village\@\@AEAAXAEAUTick\@\@_K_N\@Z
     */
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick &, unsigned __int64, bool);
    /**
     * @symbol  ?_trySpawnDefenderDwellers\@Village\@\@AEAAXAEAVBlockSource\@\@_K\@Z
     */
    MCAPI void _trySpawnDefenderDwellers(class BlockSource &, unsigned __int64);
    /**
     * @symbol  ?_updateAndRemoveInactiveDwellers\@Village\@\@AEAAX_KM\@Z
     */
    MCAPI void _updateAndRemoveInactiveDwellers(unsigned __int64, float);
    /**
     * @symbol  ?_updateClaimedPOIs\@Village\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateClaimedPOIs(class BlockSource &);
    /**
     * @symbol  ?_updateUnclaimedPOIs\@Village\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateUnclaimedPOIs(class BlockSource &);

private:
    /**
     * @symbol  ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE\@Village\@\@0MB
     */
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    /**
     * @symbol  ?CELEBRATION_EVENT\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CELEBRATION_EVENT;
    /**
     * @symbol  ?RAID_BOUNDS_PADDING\@Village\@\@0VVec3\@\@B
     */
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;
    /**
     * @symbol  ?RAID_EXPIRY_EVENT\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAID_EXPIRY_EVENT;
    /**
     * @symbol  ?RAID_FINISHED_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;
    /**
     * @symbol  ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    /**
     * @symbol  ?RAID_LOCATION_HELP_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;
    /**
     * @symbol  ?RAID_MAX_SPAWN_FAILURES\@Village\@\@0EB
     */
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES;
    /**
     * @symbol  ?RAID_PREP_TIME_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;
    /**
     * @symbol  ?RAID_TIMEOUT_IN_TICKS\@Village\@\@0UTick\@\@B
     */
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;
    /**
     * @symbol  ?STANDING_DECAY_INTERVAL_BAD\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD;
    /**
     * @symbol  ?STANDING_DECAY_INTERVAL_GOOD\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD;
    /**
     * @symbol  ?STORAGE_KEY_DWELLERS\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_DWELLERS;
    /**
     * @symbol  ?STORAGE_KEY_PLAYERS\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_PLAYERS;
    /**
     * @symbol  ?STORAGE_KEY_POI\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_POI;
    /**
     * @symbol  ?STORAGE_KEY_RAID\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_RAID;
    /**
     * @symbol  ?STORAGE_KEY_VILLAGE\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_VILLAGE;
    /**
     * @symbol  ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS\@Village\@\@0HB
     */
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    /**
     * @symbol  ?VILLAGER_EXPECTED_WORK_INTERVAL\@Village\@\@0_JB
     */
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL;
    /**
     * @symbol  ?VILLAGE_HERO_BESTOW_TIME\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;
    /**
     * @symbol  ?VILLAGE_POI_PURGE_TIME\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME;
    /**
     * @symbol  ?VILLAGE_RADIUS_APPROX_SCALAR\@Village\@\@0MB
     */
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;
    /**
     * @symbol  ?VILLAGE_SAVE_TICK_DELAY\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY;
    /**
     * @symbol  ?VILLAGE_START_HEIGHT\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_START_HEIGHT;
    /**
     * @symbol  ?VILLAGE_UNCLAIMED_POI_CAP\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;
    /**
     * @symbol  ?VILLAGE_UPDATE_TICK_DELAY\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY;
    /**
     * @symbol  ?VILLAGE_VERSION_CURRENT\@Village\@\@0EB
     */
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT;

};