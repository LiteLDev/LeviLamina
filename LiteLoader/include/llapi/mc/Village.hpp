/**
 * @file  Village.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1814740295
     * @symbol ??0Village@@QEAA@AEAVDimension@@VUUID@mce@@AEBVBlockPos@@@Z
     */
    MCAPI Village(class Dimension &, class mce::UUID, class BlockPos const &);
    /**
     * @hash   -846055733
     * @symbol ?addActorToVillage@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
     */
    MCAPI void addActorToVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @hash   101889862
     * @symbol ?addAggressor@Village@@QEAAXAEBVMob@@@Z
     */
    MCAPI void addAggressor(class Mob const &);
    /**
     * @hash   -67112338
     * @symbol ?addPOI@Village@@QEAA_NV?$weak_ptr@VPOIInstance@@@std@@@Z
     */
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>);
    /**
     * @hash   -56544334
     * @symbol ?addVillager@Village@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void addVillager(struct ActorUniqueID const &);
    /**
     * @symbol ?alwaysTickRaid@Village@@QEBA_NXZ
     */
    MCAPI bool alwaysTickRaid() const;
    /**
     * @hash   -1822476714
     * @symbol ?canRemove@Village@@QEBA_NXZ
     */
    MCAPI bool canRemove() const;
    /**
     * @hash   -1701891848
     * @symbol ?checkNeedMoreVillagers@Village@@QEBA_NXZ
     */
    MCAPI bool checkNeedMoreVillagers() const;
    /**
     * @hash   -2141887083
     * @symbol ?clearOwnedPOIs@Village@@QEAAXXZ
     */
    MCAPI void clearOwnedPOIs();
    /**
     * @hash   1696440083
     * @symbol ?debugDraw@Village@@QEAAXXZ
     */
    MCAPI void debugDraw();
    /**
     * @hash   2146341253
     * @symbol ?fetchOwnedPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@AEBUActorUniqueID@@W4POIType@@@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const &, enum class POIType);
    /**
     * @hash   -2139198985
     * @symbol ?fireSoundTheAlarm@Village@@QEAAXXZ
     */
    MCAPI void fireSoundTheAlarm();
    /**
     * @hash   -172849036
     * @symbol ?getApproximateRadius@Village@@QEBAMXZ
     */
    MCAPI float getApproximateRadius() const;
    /**
     * @hash   1014336083
     * @symbol ?getBedPOICount@Village@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBedPOICount() const;
    /**
     * @hash   2075364354
     * @symbol ?getBounds@Village@@QEBAAEBVAABB@@XZ
     */
    MCAPI class AABB const & getBounds() const;
    /**
     * @hash   -746122824
     * @symbol ?getCenter@Village@@QEBA?AVVec3@@XZ
     */
    MCAPI class Vec3 getCenter() const;
    /**
     * @hash   -1358576016
     * @symbol ?getClosestAggressor@Village@@QEAAPEAVActor@@PEAV2@@Z
     */
    MCAPI class Actor * getClosestAggressor(class Actor *);
    /**
     * @hash   557722210
     * @symbol ?getClosestBadStandingPlayer@Village@@QEAAPEAVPlayer@@AEAVActor@@@Z
     */
    MCAPI class Player * getClosestBadStandingPlayer(class Actor &);
    /**
     * @hash   2136384933
     * @symbol ?getClosestPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@AEBVBlockPos@@@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum class POIType, class BlockPos const &);
    /**
     * @hash   1029633081
     * @symbol ?getRaid@Village@@QEBAPEBVRaid@@XZ
     */
    MCAPI class Raid const * getRaid() const;
    /**
     * @hash   -852419086
     * @symbol ?getRaidBounds@Village@@QEBAAEBVAABB@@XZ
     */
    MCAPI class AABB const & getRaidBounds() const;
    /**
     * @hash   639621277
     * @symbol ?getRaidMutable@Village@@QEAAPEAVRaid@@XZ
     */
    MCAPI class Raid * getRaidMutable();
    /**
     * @hash   -523713353
     * @symbol ?getStanding@Village@@QEAAHAEBUActorUniqueID@@@Z
     */
    MCAPI int getStanding(struct ActorUniqueID const &);
    /**
     * @hash   238485373
     * @symbol ?getUnclaimedPOIs@Village@@QEBAAEBV?$array@V?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@$02@std@@XZ
     */
    MCAPI class std::array<std::vector<class std::weak_ptr<class POIInstance>>, 3> const & getUnclaimedPOIs() const;
    /**
     * @hash   650177968
     * @symbol ?getUniqueID@Village@@QEBA?AVUUID@mce@@XZ
     */
    MCAPI class mce::UUID getUniqueID() const;
    /**
     * @hash   -2133324418
     * @symbol ?hasInvalidRole@Village@@QEAA_NAEBUActorUniqueID@@AEBW4DwellerRole@@@Z
     */
    MCAPI bool hasInvalidRole(struct ActorUniqueID const &, enum class DwellerRole const &);
    /**
     * @hash   1165670678
     * @symbol ?hasRaid@Village@@QEBA_NXZ
     */
    MCAPI bool hasRaid() const;
    /**
     * @hash   -347993196
     * @symbol ?hasSpecificDweller@Village@@QEBA_NW4DwellerRole@@AEBUActorUniqueID@@@Z
     */
    MCAPI bool hasSpecificDweller(enum class DwellerRole, struct ActorUniqueID const &) const;
    /**
     * @hash   2096712211
     * @symbol ?loadDataByKey@Village@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
     */
    MCAPI void loadDataByKey(std::string const &, class CompoundTag const &);
    /**
     * @hash   -2089009950
     * @symbol ?modifyStanding@Village@@QEAAHAEBUActorUniqueID@@H@Z
     */
    MCAPI int modifyStanding(struct ActorUniqueID const &, int);
    /**
     * @hash   483226090
     * @symbol ?removeActorFromVillage@Village@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUActorUniqueID@@UDwellerData@Village@@@std@@@std@@@std@@@std@@W4DwellerRole@@AEBUActorUniqueID@@@Z
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>> removeActorFromVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @hash   -784897352
     * @symbol ?removeAllInstancesofActorFromVillage@Village@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const &);
    /**
     * @hash   1637442533
     * @symbol ?removeVillageSavedData@Village@@QEAAXXZ
     */
    MCAPI void removeVillageSavedData();
    /**
     * @hash   725927739
     * @symbol ?resetDwellerTimer@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
     */
    MCAPI void resetDwellerTimer(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @hash   -797444841
     * @symbol ?resetNoBreedTimer@Village@@QEAAXXZ
     */
    MCAPI void resetNoBreedTimer();
    /**
     * @hash   1322439224
     * @symbol ?rewardAllPlayers@Village@@QEAAXH@Z
     */
    MCAPI void rewardAllPlayers(int);
    /**
     * @hash   195420497
     * @symbol ?saveEntireVillage@Village@@QEAAXXZ
     */
    MCAPI void saveEntireVillage();
    /**
     * @hash   1803055620
     * @symbol ?setSavedDwellerPosition@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@VBlockPos@@@Z
     */
    MCAPI void setSavedDwellerPosition(enum class DwellerRole, struct ActorUniqueID const &, class BlockPos);
    /**
     * @hash   1589099609
     * @symbol ?tick@Village@@QEAAXUTick@@AEAVBlockSource@@@Z
     */
    MCAPI void tick(struct Tick, class BlockSource &);
    /**
     * @symbol ?tickRaid@Village@@QEAAXUTick@@@Z
     */
    MCAPI void tickRaid(struct Tick);
    /**
     * @hash   646919817
     * @symbol ?triggerRaid@Village@@QEAAXXZ
     */
    MCAPI void triggerRaid();
    /**
     * @hash   -1331456048
     * @symbol ?trySetVillagerWorkTimestamp@Village@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const &);
    /**
     * @hash   1591933962
     * @symbol ?unlinkMismatchedJobsites@Village@@QEAAXAEBVActor@@@Z
     */
    MCAPI void unlinkMismatchedJobsites(class Actor const &);
    /**
     * @hash   875204013
     * @symbol ?villagerLivesHere@Village@@QEBA_NAEBUActorUniqueID@@@Z
     */
    MCAPI bool villagerLivesHere(struct ActorUniqueID const &) const;
    /**
     * @hash   1038231322
     * @symbol ?withinVillageBounds@Village@@QEBA_NAEBVVec3@@M@Z
     */
    MCAPI bool withinVillageBounds(class Vec3 const &, float) const;
    /**
     * @hash   568985224
     * @symbol ??1Village@@QEAA@XZ
     */
    MCAPI ~Village();
    /**
     * @hash   1208287755
     * @symbol ?DEBUG_DRAWING@Village@@2_NA
     */
    MCAPI static bool DEBUG_DRAWING;
    /**
     * @hash   2003147897
     * @symbol ?DWELLER_REMOVAL_TOLERANCE@Village@@2MB
     */
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;
    /**
     * @hash   -2136384873
     * @symbol ?MAX_VILLAGE_STANDING@Village@@2HB
     */
    MCAPI static int const MAX_VILLAGE_STANDING;
    /**
     * @hash   769149631
     * @symbol ?MIN_VILLAGE_STANDING@Village@@2HB
     */
    MCAPI static int const MIN_VILLAGE_STANDING;
    /**
     * @hash   1484543133
     * @symbol ?STORAGE_KEY_PREFIX@Village@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_KEY_PREFIX;
    /**
     * @hash   -1153321595
     * @symbol ?VILLAGE_START_XZ_BOUNDS@Village@@2HB
     */
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;
    /**
     * @hash   -991250308
     * @symbol ?isVillagePOI@Village@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI static bool isVillagePOI(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   1426621010
     * @symbol ?isVillagePOI@Village@@SA_NAEBVVillageManager@@AEBVBlock@@@Z
     */
    MCAPI static bool isVillagePOI(class VillageManager const &, class Block const &);

//private:
    /**
     * @hash   1269806936
     * @symbol ?_addPoiToVillage@Village@@AEAAXAEBUActorUniqueID@@V?$weak_ptr@VPOIInstance@@@std@@@Z
     */
    MCAPI void _addPoiToVillage(struct ActorUniqueID const &, class std::weak_ptr<class POIInstance>);
    /**
     * @hash   122133884
     * @symbol ?_calcPOIDist@Village@@AEAAXXZ
     */
    MCAPI void _calcPOIDist();
    /**
     * @hash   1996752942
     * @symbol ?_claimUnclaimedPOIs@Village@@AEAAXXZ
     */
    MCAPI void _claimUnclaimedPOIs();
    /**
     * @hash   -1289917426
     * @symbol ?_clearVillagerPOIs@Village@@AEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const &);
    /**
     * @hash   752103317
     * @symbol ?_createRaid@Village@@AEAAXXZ
     */
    MCAPI void _createRaid();
    /**
     * @hash   82313099
     * @symbol ?_findAvailablePOI@Village@@AEAA_N_KAEAVLevel@@AEAVRandom@@UActorUniqueID@@@Z
     */
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level &, class Random &, struct ActorUniqueID);
    /**
     * @hash   2040345779
     * @symbol ?_findPlayerCentricSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@_N@Z
     */
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3 &, bool) const;
    /**
     * @hash   1453585923
     * @symbol ?_findPreferredPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEBVHashedString@@UActorUniqueID@@@Z
     */
    MCAPI void _findPreferredPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class HashedString const &, struct ActorUniqueID);
    /**
     * @hash   -1681050884
     * @symbol ?_findSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@MM_N1@Z
     */
    MCAPI bool _findSpawnPointForRaid(class Vec3 &, float, float, bool, bool) const;
    /**
     * @hash   -1186013225
     * @symbol ?_findSpawnableRegion@Village@@AEBAPEAVBlockSource@@VVec3@@HAEA_N@Z
     */
    MCAPI class BlockSource * _findSpawnableRegion(class Vec3, int, bool &) const;
    /**
     * @hash   -575051813
     * @symbol ?_findWeightedPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEAVRandom@@UActorUniqueID@@@Z
     */
    MCAPI void _findWeightedPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class Random &, struct ActorUniqueID);
    /**
     * @hash   902282021
     * @symbol ?_helpLocateRaiders@Village@@AEAAXAEBVRaid@@@Z
     */
    MCAPI void _helpLocateRaiders(class Raid const &);
    /**
     * @hash   1435340089
     * @symbol ?_loadVillageData@Village@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _loadVillageData(class CompoundTag const &);
    /**
     * @hash   -1312182785
     * @symbol ?_loadVillageDwellers@Village@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _loadVillageDwellers(class CompoundTag const &);
    /**
     * @hash   -1923965958
     * @symbol ?_loadVillagePOIs@Village@@AEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void _loadVillagePOIs(class CompoundTag const &);
    /**
     * @hash   -1805828217
     * @symbol ?_playSoundFrom@Village@@AEAAXAEBVVec3@@W4LevelSoundEvent@@@Z
     */
    MCAPI void _playSoundFrom(class Vec3 const &, enum class LevelSoundEvent);
    /**
     * @hash   -66975233
     * @symbol ?_readyRaidGroup@Village@@AEAAXAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
     */
    MCAPI void _readyRaidGroup(class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &);
    /**
     * @hash   -1601722923
     * @symbol ?_ringBells@Village@@AEBAXAEAVBlockSource@@AEAVRandom@@@Z
     */
    MCAPI void _ringBells(class BlockSource &, class Random &) const;
    /**
     * @hash   -459661303
     * @symbol ?_saveVillageData@Village@@AEBAXXZ
     */
    MCAPI void _saveVillageData() const;
    /**
     * @hash   1209045571
     * @symbol ?_saveVillageDwellers@Village@@AEBAXXZ
     */
    MCAPI void _saveVillageDwellers() const;
    /**
     * @hash   1350711576
     * @symbol ?_saveVillagePOIs@Village@@AEBAXXZ
     */
    MCAPI void _saveVillagePOIs() const;
    /**
     * @hash   433862972
     * @symbol ?_saveVillagePlayerStanding@Village@@AEBAXXZ
     */
    MCAPI void _saveVillagePlayerStanding() const;
    /**
     * @hash   2027111305
     * @symbol ?_saveVillageRaid@Village@@AEBAXXZ
     */
    MCAPI void _saveVillageRaid() const;
    /**
     * @hash   -621954342
     * @symbol ?_spawnPassiveDwellers@Village@@AEAAXAEAVBlockSource@@H@Z
     */
    MCAPI void _spawnPassiveDwellers(class BlockSource &, int);
    /**
     * @hash   1206747843
     * @symbol ?_spawnRaidGroup@Village@@AEBA_NVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
     */
    MCAPI bool _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &) const;
    /**
     * @hash   -2014754795
     * @symbol ?_tryShiftStandingsTowardNeutral@Village@@AEAAXAEAUTick@@_K_N@Z
     */
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick &, unsigned __int64, bool);
    /**
     * @hash   168840894
     * @symbol ?_trySpawnDefenderDwellers@Village@@AEAAXAEAVBlockSource@@_K@Z
     */
    MCAPI void _trySpawnDefenderDwellers(class BlockSource &, unsigned __int64);
    /**
     * @hash   -1402004904
     * @symbol ?_updateAndRemoveInactiveDwellers@Village@@AEAAX_KM@Z
     */
    MCAPI void _updateAndRemoveInactiveDwellers(unsigned __int64, float);
    /**
     * @hash   868282280
     * @symbol ?_updateClaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _updateClaimedPOIs(class BlockSource &);
    /**
     * @hash   358199745
     * @symbol ?_updateUnclaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
     */
    MCAPI void _updateUnclaimedPOIs(class BlockSource &);

private:
    /**
     * @hash   -1594374592
     * @symbol ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE@Village@@0MB
     */
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    /**
     * @hash   417790692
     * @symbol ?CELEBRATION_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const CELEBRATION_EVENT;
    /**
     * @hash   -1466499227
     * @symbol ?RAID_BOUNDS_PADDING@Village@@0VVec3@@B
     */
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;
    /**
     * @hash   516256258
     * @symbol ?RAID_EXPIRY_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const RAID_EXPIRY_EVENT;
    /**
     * @hash   1307832276
     * @symbol ?RAID_FINISHED_DELAY_IN_TICKS@Village@@0HB
     */
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;
    /**
     * @hash   -1712702363
     * @symbol ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS@Village@@0HB
     */
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    /**
     * @hash   -1252183551
     * @symbol ?RAID_LOCATION_HELP_DELAY_IN_TICKS@Village@@0HB
     */
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;
    /**
     * @hash   58367476
     * @symbol ?RAID_MAX_SPAWN_FAILURES@Village@@0EB
     */
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES;
    /**
     * @hash   2048358985
     * @symbol ?RAID_PREP_TIME_IN_TICKS@Village@@0HB
     */
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;
    /**
     * @hash   1530714327
     * @symbol ?RAID_TIMEOUT_IN_TICKS@Village@@0UTick@@B
     */
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;
    /**
     * @hash   -588542064
     * @symbol ?STANDING_DECAY_INTERVAL_BAD@Village@@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD;
    /**
     * @hash   -910003788
     * @symbol ?STANDING_DECAY_INTERVAL_GOOD@Village@@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD;
    /**
     * @hash   1605819799
     * @symbol ?STORAGE_KEY_DWELLERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_KEY_DWELLERS;
    /**
     * @hash   -1945126195
     * @symbol ?STORAGE_KEY_PLAYERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_KEY_PLAYERS;
    /**
     * @hash   1442453669
     * @symbol ?STORAGE_KEY_POI@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_KEY_POI;
    /**
     * @hash   -232933843
     * @symbol ?STORAGE_KEY_RAID@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_KEY_RAID;
    /**
     * @hash   -70162457
     * @symbol ?STORAGE_KEY_VILLAGE@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STORAGE_KEY_VILLAGE;
    /**
     * @hash   -2131784932
     * @symbol ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS@Village@@0HB
     */
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    /**
     * @hash   -1931715145
     * @symbol ?VILLAGER_EXPECTED_WORK_INTERVAL@Village@@0_JB
     */
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL;
    /**
     * @hash   -2051848394
     * @symbol ?VILLAGE_HERO_BESTOW_TIME@Village@@0HB
     */
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;
    /**
     * @hash   -617283234
     * @symbol ?VILLAGE_POI_PURGE_TIME@Village@@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME;
    /**
     * @hash   -830507978
     * @symbol ?VILLAGE_RADIUS_APPROX_SCALAR@Village@@0MB
     */
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;
    /**
     * @hash   696539749
     * @symbol ?VILLAGE_SAVE_TICK_DELAY@Village@@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY;
    /**
     * @hash   -1625238233
     * @symbol ?VILLAGE_START_HEIGHT@Village@@0HB
     */
    MCAPI static int const VILLAGE_START_HEIGHT;
    /**
     * @hash   1220681345
     * @symbol ?VILLAGE_UNCLAIMED_POI_CAP@Village@@0HB
     */
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;
    /**
     * @hash   1478844113
     * @symbol ?VILLAGE_UPDATE_TICK_DELAY@Village@@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY;
    /**
     * @hash   1431920725
     * @symbol ?VILLAGE_VERSION_CURRENT@Village@@0EB
     */
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT;

};