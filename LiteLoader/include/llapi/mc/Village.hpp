/**
 * @file  Village.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1839924233
     * @symbol  ??0Village\@\@QEAA\@AEAVDimension\@\@VUUID\@mce\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI Village(class Dimension &, class mce::UUID, class BlockPos const &);
    /**
     * @hash   -1486035605
     * @symbol  ?addActorToVillage\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addActorToVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @hash   -538074634
     * @symbol  ?addAggressor\@Village\@\@QEAAXAEBVMob\@\@\@Z
     */
    MCAPI void addAggressor(class Mob const &);
    /**
     * @hash   -707076834
     * @symbol  ?addPOI\@Village\@\@QEAA_NV?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI bool addPOI(class std::weak_ptr<class POIInstance>);
    /**
     * @hash   -696493454
     * @symbol  ?addVillager\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void addVillager(struct ActorUniqueID const &);
    /**
     * @hash   -1959622440
     * @symbol  ?alwaysTickRaid\@Village\@\@QEBA_NXZ
     */
    MCAPI bool alwaysTickRaid() const;
    /**
     * @hash   1832664470
     * @symbol  ?canRemove\@Village\@\@QEBA_NXZ
     */
    MCAPI bool canRemove() const;
    /**
     * @hash   1953249336
     * @symbol  ?checkNeedMoreVillagers\@Village\@\@QEBA_NXZ
     */
    MCAPI bool checkNeedMoreVillagers() const;
    /**
     * @hash   1513254101
     * @symbol  ?clearOwnedPOIs\@Village\@\@QEAAXXZ
     */
    MCAPI void clearOwnedPOIs();
    /**
     * @hash   1056629347
     * @symbol  ?debugDraw\@Village\@\@QEAAXXZ
     */
    MCAPI void debugDraw();
    /**
     * @hash   1506592021
     * @symbol  ?fetchOwnedPOI\@Village\@\@QEAA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@AEBUActorUniqueID\@\@W4POIType\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const &, enum class POIType);
    /**
     * @hash   1516019079
     * @symbol  ?fireSoundTheAlarm\@Village\@\@QEAAXXZ
     */
    MCAPI void fireSoundTheAlarm();
    /**
     * @hash   -812629020
     * @symbol  ?getApproximateRadius\@Village\@\@QEBAMXZ
     */
    MCAPI float getApproximateRadius() const;
    /**
     * @hash   374556099
     * @symbol  ?getBedPOICount\@Village\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getBedPOICount() const;
    /**
     * @hash   1435615122
     * @symbol  ?getBounds\@Village\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getBounds() const;
    /**
     * @hash   -1385872056
     * @symbol  ?getCenter\@Village\@\@QEBA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 getCenter() const;
    /**
     * @hash   -1998325248
     * @symbol  ?getClosestAggressor\@Village\@\@QEAAPEAVActor\@\@PEAV2\@\@Z
     */
    MCAPI class Actor * getClosestAggressor(class Actor *);
    /**
     * @hash   -82027022
     * @symbol  ?getClosestBadStandingPlayer\@Village\@\@QEAAPEAVPlayer\@\@AEAVActor\@\@\@Z
     */
    MCAPI class Player * getClosestBadStandingPlayer(class Actor &);
    /**
     * @hash   1496651077
     * @symbol  ?getClosestPOI\@Village\@\@QEAA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@W4POIType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> getClosestPOI(enum class POIType, class BlockPos const &);
    /**
     * @hash   389929977
     * @symbol  ?getRaid\@Village\@\@QEBAPEBVRaid\@\@XZ
     */
    MCAPI class Raid const * getRaid() const;
    /**
     * @hash   -1492122190
     * @symbol  ?getRaidBounds\@Village\@\@QEBAAEBVAABB\@\@XZ
     */
    MCAPI class AABB const & getRaidBounds() const;
    /**
     * @hash   -81827
     * @symbol  ?getRaidMutable\@Village\@\@QEAAPEAVRaid\@\@XZ
     */
    MCAPI class Raid * getRaidMutable();
    /**
     * @hash   -1163416457
     * @symbol  ?getStanding\@Village\@\@QEAAHAEBUActorUniqueID\@\@\@Z
     */
    MCAPI int getStanding(struct ActorUniqueID const &);
    /**
     * @hash   -627014291
     * @symbol  ?getUnclaimedPOIs\@Village\@\@QEBAAEBV?$array\@V?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@$02\@std\@\@XZ
     */
    MCAPI class std::array<std::vector<class std::weak_ptr<class POIInstance>>, 3> const & getUnclaimedPOIs() const;
    /**
     * @hash   10474864
     * @symbol  ?getUniqueID\@Village\@\@QEBA?AVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID getUniqueID() const;
    /**
     * @hash   1521939774
     * @symbol  ?hasInvalidRole\@Village\@\@QEAA_NAEBUActorUniqueID\@\@AEBW4DwellerRole\@\@\@Z
     */
    MCAPI bool hasInvalidRole(struct ActorUniqueID const &, enum class DwellerRole const &);
    /**
     * @hash   525967574
     * @symbol  ?hasRaid\@Village\@\@QEBA_NXZ
     */
    MCAPI bool hasRaid() const;
    /**
     * @hash   -987696300
     * @symbol  ?hasSpecificDweller\@Village\@\@QEBA_NW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool hasSpecificDweller(enum class DwellerRole, struct ActorUniqueID const &) const;
    /**
     * @hash   1457162867
     * @symbol  ?loadDataByKey\@Village\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadDataByKey(std::string const &, class CompoundTag const &);
    /**
     * @hash   1566408002
     * @symbol  ?modifyStanding\@Village\@\@QEAAHAEBUActorUniqueID\@\@H\@Z
     */
    MCAPI int modifyStanding(struct ActorUniqueID const &, int);
    /**
     * @hash   -156323254
     * @symbol  ?removeActorFromVillage\@Village\@\@QEAA?AV?$_List_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBUActorUniqueID\@\@UDwellerData\@Village\@\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@W4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI class std::_List_iterator<class std::_List_val<struct std::_List_simple_types<struct std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>> removeActorFromVillage(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @hash   -1424446696
     * @symbol  ?removeAllInstancesofActorFromVillage\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const &);
    /**
     * @hash   997893189
     * @symbol  ?removeVillageSavedData\@Village\@\@QEAAXXZ
     */
    MCAPI void removeVillageSavedData();
    /**
     * @hash   86486027
     * @symbol  ?resetDwellerTimer\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@\@Z
     */
    MCAPI void resetDwellerTimer(enum class DwellerRole, struct ActorUniqueID const &);
    /**
     * @hash   -1436886553
     * @symbol  ?resetNoBreedTimer\@Village\@\@QEAAXXZ
     */
    MCAPI void resetNoBreedTimer();
    /**
     * @hash   682997512
     * @symbol  ?rewardAllPlayers\@Village\@\@QEAAXH\@Z
     */
    MCAPI void rewardAllPlayers(int);
    /**
     * @hash   -444021215
     * @symbol  ?saveEntireVillage\@Village\@\@QEAAXXZ
     */
    MCAPI void saveEntireVillage();
    /**
     * @hash   1163613908
     * @symbol  ?setSavedDwellerPosition\@Village\@\@QEAAXW4DwellerRole\@\@AEBUActorUniqueID\@\@VBlockPos\@\@\@Z
     */
    MCAPI void setSavedDwellerPosition(enum class DwellerRole, struct ActorUniqueID const &, class BlockPos);
    /**
     * @hash   949657897
     * @symbol  ?tick\@Village\@\@QEAAXUTick\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tick(struct Tick, class BlockSource &);
    /**
     * @hash   993227140
     * @symbol  ?tickRaid\@Village\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tickRaid(struct Tick);
    /**
     * @hash   7677993
     * @symbol  ?triggerRaid\@Village\@\@QEAAXXZ
     */
    MCAPI void triggerRaid();
    /**
     * @hash   -1970697872
     * @symbol  ?trySetVillagerWorkTimestamp\@Village\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const &);
    /**
     * @hash   952676762
     * @symbol  ?unlinkMismatchedJobsites\@Village\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void unlinkMismatchedJobsites(class Actor const &);
    /**
     * @hash   235977565
     * @symbol  ?villagerLivesHere\@Village\@\@QEBA_NAEBUActorUniqueID\@\@\@Z
     */
    MCAPI bool villagerLivesHere(struct ActorUniqueID const &) const;
    /**
     * @hash   399004874
     * @symbol  ?withinVillageBounds\@Village\@\@QEBA_NAEBVVec3\@\@M\@Z
     */
    MCAPI bool withinVillageBounds(class Vec3 const &, float) const;
    /**
     * @hash   -69595432
     * @symbol  ??1Village\@\@QEAA\@XZ
     */
    MCAPI ~Village();
    /**
     * @hash   -1981022133
     * @symbol  ?DEBUG_DRAWING\@Village\@\@2_NA
     */
    MCAPI static bool DEBUG_DRAWING;
    /**
     * @hash   -1321178647
     * @symbol  ?DWELLER_REMOVAL_TOLERANCE\@Village\@\@2MB
     */
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;
    /**
     * @hash   -1165744121
     * @symbol  ?MAX_VILLAGE_STANDING\@Village\@\@2HB
     */
    MCAPI static int const MAX_VILLAGE_STANDING;
    /**
     * @hash   1739790383
     * @symbol  ?MIN_VILLAGE_STANDING\@Village\@\@2HB
     */
    MCAPI static int const MIN_VILLAGE_STANDING;
    /**
     * @hash   -1111668307
     * @symbol  ?STORAGE_KEY_PREFIX\@Village\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_PREFIX;
    /**
     * @hash   -182680843
     * @symbol  ?VILLAGE_START_XZ_BOUNDS\@Village\@\@2HB
     */
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;
    /**
     * @hash   -1484956106
     * @symbol  ?isValidRegisteredPOI\@Village\@\@SA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isValidRegisteredPOI(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1630815028
     * @symbol  ?isVillagePOI\@Village\@\@SA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static bool isVillagePOI(class BlockSource const &, class BlockPos const &);
    /**
     * @hash   787071666
     * @symbol  ?isVillagePOI\@Village\@\@SA_NAEBVVillageManager\@\@AEBVBlock\@\@\@Z
     */
    MCAPI static bool isVillagePOI(class VillageManager const &, class Block const &);

//private:
    /**
     * @hash   629611800
     * @symbol  ?_addPoiToVillage\@Village\@\@AEAAXAEBUActorUniqueID\@\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void _addPoiToVillage(struct ActorUniqueID const &, class std::weak_ptr<class POIInstance>);
    /**
     * @hash   -517968996
     * @symbol  ?_calcPOIDist\@Village\@\@AEAAXXZ
     */
    MCAPI void _calcPOIDist();
    /**
     * @hash   1356680814
     * @symbol  ?_claimUnclaimedPOIs\@Village\@\@AEAAXXZ
     */
    MCAPI void _claimUnclaimedPOIs();
    /**
     * @hash   -1929974178
     * @symbol  ?_clearVillagerPOIs\@Village\@\@AEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const &);
    /**
     * @hash   112046565
     * @symbol  ?_createRaid\@Village\@\@AEAAXXZ
     */
    MCAPI void _createRaid();
    /**
     * @hash   -557620645
     * @symbol  ?_findAvailablePOI\@Village\@\@AEAA_N_KAEAVLevel\@\@AEAVRandom\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI bool _findAvailablePOI(unsigned __int64, class Level &, class Random &, struct ActorUniqueID);
    /**
     * @hash   1400365907
     * @symbol  ?_findPlayerCentricSpawnPointForRaid\@Village\@\@AEBA_NAEAVVec3\@\@_N\@Z
     */
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3 &, bool) const;
    /**
     * @hash   813606051
     * @symbol  ?_findPreferredPOI\@Village\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@AEBVHashedString\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI void _findPreferredPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class HashedString const &, struct ActorUniqueID);
    /**
     * @hash   1973998044
     * @symbol  ?_findSpawnPointForRaid\@Village\@\@AEBA_NAEAVVec3\@\@MM_N1\@Z
     */
    MCAPI bool _findSpawnPointForRaid(class Vec3 &, float, float, bool, bool) const;
    /**
     * @hash   -1825931593
     * @symbol  ?_findSpawnableRegion\@Village\@\@AEBAPEAVBlockSource\@\@VVec3\@\@HAEA_N\@Z
     */
    MCAPI class BlockSource * _findSpawnableRegion(class Vec3, int, bool &) const;
    /**
     * @hash   -1214970181
     * @symbol  ?_findWeightedPOI\@Village\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@UActorUniqueID\@\@\@Z
     */
    MCAPI void _findWeightedPOI(std::vector<class std::weak_ptr<class POIInstance>> &, class Random &, struct ActorUniqueID);
    /**
     * @hash   262409781
     * @symbol  ?_helpLocateRaiders\@Village\@\@AEAAXAEBVRaid\@\@\@Z
     */
    MCAPI void _helpLocateRaiders(class Raid const &);
    /**
     * @hash   795483225
     * @symbol  ?_loadVillageData\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillageData(class CompoundTag const &);
    /**
     * @hash   -1952039649
     * @symbol  ?_loadVillageDwellers\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillageDwellers(class CompoundTag const &);
    /**
     * @hash   1731159850
     * @symbol  ?_loadVillagePOIs\@Village\@\@AEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void _loadVillagePOIs(class CompoundTag const &);
    /**
     * @hash   1849236087
     * @symbol  ?_playSoundFrom\@Village\@\@AEAAXAEBVVec3\@\@W4LevelSoundEvent\@\@\@Z
     */
    MCAPI void _playSoundFrom(class Vec3 const &, enum class LevelSoundEvent);
    /**
     * @hash   -706878225
     * @symbol  ?_readyRaidGroup\@Village\@\@AEAAXAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI void _readyRaidGroup(class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &);
    /**
     * @hash   2053326005
     * @symbol  ?_ringBells\@Village\@\@AEBAXAEAVBlockSource\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _ringBells(class BlockSource &, class Random &) const;
    /**
     * @hash   -1099533543
     * @symbol  ?_saveVillageData\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageData() const;
    /**
     * @hash   569127203
     * @symbol  ?_saveVillageDwellers\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageDwellers() const;
    /**
     * @hash   710808584
     * @symbol  ?_saveVillagePOIs\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillagePOIs() const;
    /**
     * @hash   -206163028
     * @symbol  ?_saveVillagePlayerStanding\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillagePlayerStanding() const;
    /**
     * @hash   1387116057
     * @symbol  ?_saveVillageRaid\@Village\@\@AEBAXXZ
     */
    MCAPI void _saveVillageRaid() const;
    /**
     * @hash   -1261918838
     * @symbol  ?_spawnPassiveDwellers\@Village\@\@AEAAXAEAVBlockSource\@\@H\@Z
     */
    MCAPI void _spawnPassiveDwellers(class BlockSource &, int);
    /**
     * @hash   566798723
     * @symbol  ?_spawnRaidGroup\@Village\@\@AEBA_NVVec3\@\@EAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI bool _spawnRaidGroup(class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &) const;
    /**
     * @hash   1640309509
     * @symbol  ?_tryShiftStandingsTowardNeutral\@Village\@\@AEAAXAEAUTick\@\@_K_N\@Z
     */
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick &, unsigned __int64, bool);
    /**
     * @hash   -471062098
     * @symbol  ?_trySpawnDefenderDwellers\@Village\@\@AEAAXAEAVBlockSource\@\@_K\@Z
     */
    MCAPI void _trySpawnDefenderDwellers(class BlockSource &, unsigned __int64);
    /**
     * @hash   -2041923272
     * @symbol  ?_updateAndRemoveInactiveDwellers\@Village\@\@AEAAX_KM\@Z
     */
    MCAPI void _updateAndRemoveInactiveDwellers(unsigned __int64, float);
    /**
     * @hash   228410040
     * @symbol  ?_updateClaimedPOIs\@Village\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateClaimedPOIs(class BlockSource &);
    /**
     * @hash   -281733999
     * @symbol  ?_updateUnclaimedPOIs\@Village\@\@AEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _updateUnclaimedPOIs(class BlockSource &);

private:
    /**
     * @hash   -623733840
     * @symbol  ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE\@Village\@\@0MB
     */
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;
    /**
     * @hash   2116446604
     * @symbol  ?CELEBRATION_EVENT\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const CELEBRATION_EVENT;
    /**
     * @hash   -495858475
     * @symbol  ?RAID_BOUNDS_PADDING\@Village\@\@0VVec3\@\@B
     */
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;
    /**
     * @hash   -2080055126
     * @symbol  ?RAID_EXPIRY_EVENT\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const RAID_EXPIRY_EVENT;
    /**
     * @hash   -2016494268
     * @symbol  ?RAID_FINISHED_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;
    /**
     * @hash   -742061611
     * @symbol  ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;
    /**
     * @hash   -281542799
     * @symbol  ?RAID_LOCATION_HELP_DELAY_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;
    /**
     * @hash   1029008228
     * @symbol  ?RAID_MAX_SPAWN_FAILURES\@Village\@\@0EB
     */
    MCAPI static unsigned char const RAID_MAX_SPAWN_FAILURES;
    /**
     * @hash   -1275967559
     * @symbol  ?RAID_PREP_TIME_IN_TICKS\@Village\@\@0HB
     */
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;
    /**
     * @hash   -1687533193
     * @symbol  ?RAID_TIMEOUT_IN_TICKS\@Village\@\@0UTick\@\@B
     */
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;
    /**
     * @hash   382098688
     * @symbol  ?STANDING_DECAY_INTERVAL_BAD\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_BAD;
    /**
     * @hash   60636964
     * @symbol  ?STANDING_DECAY_INTERVAL_GOOD\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const STANDING_DECAY_INTERVAL_GOOD;
    /**
     * @hash   -990460833
     * @symbol  ?STORAGE_KEY_DWELLERS\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_DWELLERS;
    /**
     * @hash   -246439531
     * @symbol  ?STORAGE_KEY_PLAYERS\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_PLAYERS;
    /**
     * @hash   -1153826963
     * @symbol  ?STORAGE_KEY_POI\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_POI;
    /**
     * @hash   1465752821
     * @symbol  ?STORAGE_KEY_RAID\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_RAID;
    /**
     * @hash   1628524207
     * @symbol  ?STORAGE_KEY_VILLAGE\@Village\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STORAGE_KEY_VILLAGE;
    /**
     * @hash   -1161144180
     * @symbol  ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS\@Village\@\@0HB
     */
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;
    /**
     * @hash   -961074393
     * @symbol  ?VILLAGER_EXPECTED_WORK_INTERVAL\@Village\@\@0_JB
     */
    MCAPI static __int64 const VILLAGER_EXPECTED_WORK_INTERVAL;
    /**
     * @hash   -1081207642
     * @symbol  ?VILLAGE_HERO_BESTOW_TIME\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;
    /**
     * @hash   353357518
     * @symbol  ?VILLAGE_POI_PURGE_TIME\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_POI_PURGE_TIME;
    /**
     * @hash   140132774
     * @symbol  ?VILLAGE_RADIUS_APPROX_SCALAR\@Village\@\@0MB
     */
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;
    /**
     * @hash   1667180501
     * @symbol  ?VILLAGE_SAVE_TICK_DELAY\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_SAVE_TICK_DELAY;
    /**
     * @hash   -654597481
     * @symbol  ?VILLAGE_START_HEIGHT\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_START_HEIGHT;
    /**
     * @hash   -2103645199
     * @symbol  ?VILLAGE_UNCLAIMED_POI_CAP\@Village\@\@0HB
     */
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;
    /**
     * @hash   -1845482431
     * @symbol  ?VILLAGE_UPDATE_TICK_DELAY\@Village\@\@0_KB
     */
    MCAPI static unsigned __int64 const VILLAGE_UPDATE_TICK_DELAY;
    /**
     * @hash   -1892405819
     * @symbol  ?VILLAGE_VERSION_CURRENT\@Village\@\@0EB
     */
    MCAPI static unsigned char const VILLAGE_VERSION_CURRENT;

};