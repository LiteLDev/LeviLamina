#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DwellerRole.h"
#include "mc/enums/POIType.h"
#include "mc/events/LevelSoundEvent.h"

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
        DwellerData& operator=(DwellerData const&);
        DwellerData(DwellerData const&);
        DwellerData();
    };

    class StandingModifiers {
    public:
        // prevent constructor by default
        StandingModifiers& operator=(StandingModifiers const&);
        StandingModifiers(StandingModifiers const&);
        StandingModifiers();

    public:
        // NOLINTBEGIN
        // symbol: ?GOLEM_DEATH_PENALTY@StandingModifiers@Village@@2HB
        MCAPI static int const GOLEM_DEATH_PENALTY;

        // symbol: ?LARGE_PENALTY@StandingModifiers@Village@@2HB
        MCAPI static int const LARGE_PENALTY;

        // symbol: ?LARGE_REWARD@StandingModifiers@Village@@2HB
        MCAPI static int const LARGE_REWARD;

        // symbol: ?MEDIUM_PENALTY@StandingModifiers@Village@@2HB
        MCAPI static int const MEDIUM_PENALTY;

        // symbol: ?SMALL_PENALTY@StandingModifiers@Village@@2HB
        MCAPI static int const SMALL_PENALTY;

        // symbol: ?SMALL_REWARD@StandingModifiers@Village@@2HB
        MCAPI static int const SMALL_REWARD;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Village& operator=(Village const&);
    Village(Village const&);
    Village();

public:
    // NOLINTBEGIN
    // symbol: ??0Village@@QEAA@AEAVDimension@@VUUID@mce@@AEBVBlockPos@@@Z
    MCAPI Village(class Dimension&, class mce::UUID, class BlockPos const&);

    // symbol: ?addActorToVillage@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
    MCAPI void addActorToVillage(::DwellerRole, struct ActorUniqueID const&);

    // symbol: ?addAggressor@Village@@QEAAXAEBVMob@@@Z
    MCAPI void addAggressor(class Mob const&);

    // symbol: ?addPOI@Village@@QEAA_NV?$weak_ptr@VPOIInstance@@@std@@@Z
    MCAPI bool addPOI(std::weak_ptr<class POIInstance>);

    // symbol: ?addVillager@Village@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void addVillager(struct ActorUniqueID const&);

    // symbol: ?checkNeedMoreVillagers@Village@@QEBA_NXZ
    MCAPI bool checkNeedMoreVillagers() const;

    // symbol: ?debugDraw@Village@@QEAAXXZ
    MCAPI void debugDraw();

    // symbol: ?fetchOwnedPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@AEBUActorUniqueID@@W4POIType@@@Z
    MCAPI std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const&, ::POIType);

    // symbol: ?fireSoundTheAlarm@Village@@QEAAXXZ
    MCAPI void fireSoundTheAlarm();

    // symbol: ?getApproximateRadius@Village@@QEBAMXZ
    MCAPI float getApproximateRadius() const;

    // symbol: ?getBedPOICount@Village@@QEBA_KXZ
    MCAPI uint64 getBedPOICount() const;

    // symbol: ?getBounds@Village@@QEBAAEBVAABB@@XZ
    MCAPI class AABB const& getBounds() const;

    // symbol: ?getCenter@Village@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getCenter() const;

    // symbol: ?getClosestAggressor@Village@@QEAAPEAVActor@@PEAV2@@Z
    MCAPI class Actor* getClosestAggressor(class Actor*);

    // symbol: ?getClosestBadStandingPlayer@Village@@QEAAPEAVPlayer@@AEAVActor@@@Z
    MCAPI class Player* getClosestBadStandingPlayer(class Actor&);

    // symbol: ?getClosestPOI@Village@@QEAA?AV?$weak_ptr@VPOIInstance@@@std@@W4POIType@@AEBVBlockPos@@@Z
    MCAPI std::weak_ptr<class POIInstance> getClosestPOI(::POIType, class BlockPos const&);

    // symbol: ?getRaid@Village@@QEBAPEBVRaid@@XZ
    MCAPI class Raid const* getRaid() const;

    // symbol: ?getRaidBounds@Village@@QEBAAEBVAABB@@XZ
    MCAPI class AABB const& getRaidBounds() const;

    // symbol: ?getRaidMutable@Village@@QEAAPEAVRaid@@XZ
    MCAPI class Raid* getRaidMutable();

    // symbol: ?getStanding@Village@@QEAAHAEBUActorUniqueID@@@Z
    MCAPI int getStanding(struct ActorUniqueID const&);

    // symbol: ?getUniqueID@Village@@QEBA?AVUUID@mce@@XZ
    MCAPI class mce::UUID getUniqueID() const;

    // symbol: ?hasInvalidRole@Village@@QEAA_NAEBUActorUniqueID@@AEBW4DwellerRole@@@Z
    MCAPI bool hasInvalidRole(struct ActorUniqueID const&, ::DwellerRole const&);

    // symbol: ?hasRaid@Village@@QEBA_NXZ
    MCAPI bool hasRaid() const;

    // symbol: ?hasSpecificDweller@Village@@QEBA_NW4DwellerRole@@AEBUActorUniqueID@@@Z
    MCAPI bool hasSpecificDweller(::DwellerRole, struct ActorUniqueID const&) const;

    // symbol:
    // ?loadDataByKey@Village@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@@Z
    MCAPI void loadDataByKey(std::string const&, class CompoundTag const&);

    // symbol: ?modifyStanding@Village@@QEAAHAEBUActorUniqueID@@H@Z
    MCAPI int modifyStanding(struct ActorUniqueID const&, int);

    // symbol:
    // ?removeActorFromVillage@Village@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUActorUniqueID@@UDwellerData@Village@@@std@@@std@@@std@@@std@@W4DwellerRole@@AEBUActorUniqueID@@@Z
    MCAPI std::_List_iterator<
        std::_List_val<std::_List_simple_types<std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>>
    removeActorFromVillage(::DwellerRole, struct ActorUniqueID const&);

    // symbol: ?removeAllInstancesofActorFromVillage@Village@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const&);

    // symbol: ?removeVillageSavedData@Village@@QEAAXXZ
    MCAPI void removeVillageSavedData();

    // symbol: ?resetDwellerTimer@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@@Z
    MCAPI void resetDwellerTimer(::DwellerRole, struct ActorUniqueID const&);

    // symbol: ?resetNoBreedTimer@Village@@QEAAXXZ
    MCAPI void resetNoBreedTimer();

    // symbol: ?rewardAllPlayers@Village@@QEAAXH@Z
    MCAPI void rewardAllPlayers(int);

    // symbol: ?setSavedDwellerPosition@Village@@QEAAXW4DwellerRole@@AEBUActorUniqueID@@VBlockPos@@@Z
    MCAPI void setSavedDwellerPosition(::DwellerRole, struct ActorUniqueID const&, class BlockPos);

    // symbol: ?tick@Village@@QEAAXUTick@@AEAVBlockSource@@@Z
    MCAPI void tick(struct Tick, class BlockSource&);

    // symbol: ?tickRaid@Village@@QEAAXUTick@@@Z
    MCAPI void tickRaid(struct Tick);

    // symbol: ?triggerRaid@Village@@QEAAXXZ
    MCAPI void triggerRaid();

    // symbol: ?trySetVillagerWorkTimestamp@Village@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const&);

    // symbol: ?unlinkMismatchedJobsites@Village@@QEAAXAEBVActor@@@Z
    MCAPI void unlinkMismatchedJobsites(class Actor const&);

    // symbol: ?villagerLivesHere@Village@@QEBA_NAEBUActorUniqueID@@@Z
    MCAPI bool villagerLivesHere(struct ActorUniqueID const&) const;

    // symbol: ?withinVillageBounds@Village@@QEBA_NAEBVVec3@@M@Z
    MCAPI bool withinVillageBounds(class Vec3 const&, float) const;

    // symbol: ?isValidRegisteredPOI@Village@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isValidRegisteredPOI(class BlockSource&, class BlockPos const&);

    // symbol: ?isVillagePOI@Village@@SA_NAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static bool isVillagePOI(class BlockSource const&, class BlockPos const&);

    // symbol: ?isVillagePOI@Village@@SA_NAEBVVillageManager@@AEBVBlock@@@Z
    MCAPI static bool isVillagePOI(class VillageManager const&, class Block const&);

    // symbol: ?DEBUG_DRAWING@Village@@2_NA
    MCAPI static bool DEBUG_DRAWING;

    // symbol: ?DWELLER_REMOVAL_TOLERANCE@Village@@2MB
    MCAPI static float const DWELLER_REMOVAL_TOLERANCE;

    // symbol: ?MAX_VILLAGE_STANDING@Village@@2HB
    MCAPI static int const MAX_VILLAGE_STANDING;

    // symbol: ?MIN_VILLAGE_STANDING@Village@@2HB
    MCAPI static int const MIN_VILLAGE_STANDING;

    // symbol: ?STORAGE_KEY_PREFIX@Village@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_KEY_PREFIX;

    // symbol: ?STORAGE_KEY_SEPARATOR@Village@@2DB
    MCAPI static char const STORAGE_KEY_SEPARATOR;

    // symbol: ?VILLAGE_START_XZ_BOUNDS@Village@@2HB
    MCAPI static int const VILLAGE_START_XZ_BOUNDS;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calcPOIDist@Village@@AEAAXXZ
    MCAPI void _calcPOIDist();

    // symbol: ?_claimUnclaimedPOIs@Village@@AEAAXXZ
    MCAPI void _claimUnclaimedPOIs();

    // symbol: ?_clearVillagerPOIs@Village@@AEAAXAEBUActorUniqueID@@@Z
    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const&);

    // symbol: ?_createRaid@Village@@AEAAXXZ
    MCAPI void _createRaid();

    // symbol: ?_findAvailablePOI@Village@@AEAA_N_KAEAVLevel@@AEAVRandom@@UActorUniqueID@@@Z
    MCAPI bool _findAvailablePOI(uint64, class Level&, class Random&, struct ActorUniqueID);

    // symbol: ?_findPlayerCentricSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@_N@Z
    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3&, bool) const;

    // symbol:
    // ?_findPreferredPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEBVHashedString@@UActorUniqueID@@@Z
    MCAPI void
    _findPreferredPOI(std::vector<std::weak_ptr<class POIInstance>>&, class HashedString const&, struct ActorUniqueID);

    // symbol: ?_findSpawnPointForRaid@Village@@AEBA_NAEAVVec3@@MM_N1@Z
    MCAPI bool _findSpawnPointForRaid(class Vec3&, float, float, bool, bool) const;

    // symbol: ?_findSpawnableRegion@Village@@AEBAPEAVBlockSource@@VVec3@@HAEA_N@Z
    MCAPI class BlockSource* _findSpawnableRegion(class Vec3, int, bool&) const;

    // symbol:
    // ?_findWeightedPOI@Village@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@AEAVRandom@@UActorUniqueID@@@Z
    MCAPI void _findWeightedPOI(std::vector<std::weak_ptr<class POIInstance>>&, class Random&, struct ActorUniqueID);

    // symbol: ?_helpLocateRaiders@Village@@AEAAXAEBVRaid@@@Z
    MCAPI void _helpLocateRaiders(class Raid const&);

    // symbol: ?_loadVillageData@Village@@AEAAXAEBVCompoundTag@@@Z
    MCAPI void _loadVillageData(class CompoundTag const&);

    // symbol: ?_loadVillageDwellers@Village@@AEAAXAEBVCompoundTag@@@Z
    MCAPI void _loadVillageDwellers(class CompoundTag const&);

    // symbol: ?_loadVillagePOIs@Village@@AEAAXAEBVCompoundTag@@@Z
    MCAPI void _loadVillagePOIs(class CompoundTag const&);

    // symbol: ?_playSoundFrom@Village@@AEAAXAEBVVec3@@W4LevelSoundEvent@@@Z
    MCAPI void _playSoundFrom(class Vec3 const&, ::LevelSoundEvent);

    // symbol:
    // ?_readyRaidGroup@Village@@AEAAXAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
    MCAPI void _readyRaidGroup(std::unordered_set<struct ActorUniqueID>&);

    // symbol: ?_ringBells@Village@@AEBAXAEAVBlockSource@@AEAVRandom@@@Z
    MCAPI void _ringBells(class BlockSource&, class Random&) const;

    // symbol: ?_saveVillageData@Village@@AEBAXAEAVLevelStorage@@@Z
    MCAPI void _saveVillageData(class LevelStorage&) const;

    // symbol: ?_saveVillageDwellers@Village@@AEBAXAEAVLevelStorage@@@Z
    MCAPI void _saveVillageDwellers(class LevelStorage&) const;

    // symbol: ?_saveVillagePOIs@Village@@AEBAXAEAVLevelStorage@@@Z
    MCAPI void _saveVillagePOIs(class LevelStorage&) const;

    // symbol: ?_saveVillagePlayerStanding@Village@@AEBAXAEAVLevelStorage@@@Z
    MCAPI void _saveVillagePlayerStanding(class LevelStorage&) const;

    // symbol: ?_saveVillageRaid@Village@@AEBAXAEAVLevelStorage@@@Z
    MCAPI void _saveVillageRaid(class LevelStorage&) const;

    // symbol: ?_spawnPassiveDwellers@Village@@AEAAXAEAVBlockSource@@H@Z
    MCAPI void _spawnPassiveDwellers(class BlockSource&, int);

    // symbol:
    // ?_spawnRaidGroup@Village@@AEBA_NVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z
    MCAPI bool _spawnRaidGroup(class Vec3, uchar, std::unordered_set<struct ActorUniqueID>&) const;

    // symbol: ?_tryAddPoiToVillage@Village@@AEAAXAEBUActorUniqueID@@V?$weak_ptr@VPOIInstance@@@std@@@Z
    MCAPI void _tryAddPoiToVillage(struct ActorUniqueID const&, std::weak_ptr<class POIInstance>);

    // symbol: ?_tryShiftStandingsTowardNeutral@Village@@AEAAXAEAUTick@@_K_N@Z
    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick&, uint64, bool);

    // symbol: ?_trySpawnDefenderDwellers@Village@@AEAAXAEAVBlockSource@@_K@Z
    MCAPI void _trySpawnDefenderDwellers(class BlockSource&, uint64);

    // symbol: ?_updateAndRemoveInactiveDwellers@Village@@AEAAX_KM@Z
    MCAPI void _updateAndRemoveInactiveDwellers(uint64, float);

    // symbol: ?_updateClaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _updateClaimedPOIs(class BlockSource&);

    // symbol: ?_updateUnclaimedPOIs@Village@@AEAAXAEAVBlockSource@@@Z
    MCAPI void _updateUnclaimedPOIs(class BlockSource&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE@Village@@0MB
    MCAPI static float const ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE;

    // symbol: ?CELEBRATION_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const CELEBRATION_EVENT;

    // symbol: ?RAID_BOUNDS_PADDING@Village@@0VVec3@@B
    MCAPI static class Vec3 const RAID_BOUNDS_PADDING;

    // symbol: ?RAID_EXPIRY_EVENT@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const RAID_EXPIRY_EVENT;

    // symbol: ?RAID_FINISHED_DELAY_IN_TICKS@Village@@0HB
    MCAPI static int const RAID_FINISHED_DELAY_IN_TICKS;

    // symbol: ?RAID_GROUP_COMPLETE_DELAY_IN_TICKS@Village@@0HB
    MCAPI static int const RAID_GROUP_COMPLETE_DELAY_IN_TICKS;

    // symbol: ?RAID_LOCATION_HELP_DELAY_IN_TICKS@Village@@0HB
    MCAPI static int const RAID_LOCATION_HELP_DELAY_IN_TICKS;

    // symbol: ?RAID_MAX_SPAWN_FAILURES@Village@@0EB
    MCAPI static uchar const RAID_MAX_SPAWN_FAILURES;

    // symbol: ?RAID_PREP_TIME_IN_TICKS@Village@@0HB
    MCAPI static int const RAID_PREP_TIME_IN_TICKS;

    // symbol: ?RAID_TIMEOUT_IN_TICKS@Village@@0UTick@@B
    MCAPI static struct Tick const RAID_TIMEOUT_IN_TICKS;

    // symbol: ?STANDING_DECAY_INTERVAL_BAD@Village@@0_KB
    MCAPI static uint64 const STANDING_DECAY_INTERVAL_BAD;

    // symbol: ?STANDING_DECAY_INTERVAL_GOOD@Village@@0_KB
    MCAPI static uint64 const STANDING_DECAY_INTERVAL_GOOD;

    // symbol: ?STORAGE_KEY_DWELLERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_KEY_DWELLERS;

    // symbol: ?STORAGE_KEY_PLAYERS@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_KEY_PLAYERS;

    // symbol: ?STORAGE_KEY_POI@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_KEY_POI;

    // symbol: ?STORAGE_KEY_RAID@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_KEY_RAID;

    // symbol: ?STORAGE_KEY_VILLAGE@Village@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const STORAGE_KEY_VILLAGE;

    // symbol: ?UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS@Village@@0HB
    MCAPI static int const UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS;

    // symbol: ?VILLAGER_EXPECTED_WORK_INTERVAL@Village@@0_JB
    MCAPI static int64 const VILLAGER_EXPECTED_WORK_INTERVAL;

    // symbol: ?VILLAGE_HERO_BESTOW_TIME@Village@@0HB
    MCAPI static int const VILLAGE_HERO_BESTOW_TIME;

    // symbol: ?VILLAGE_POI_PURGE_TIME@Village@@0_KB
    MCAPI static uint64 const VILLAGE_POI_PURGE_TIME;

    // symbol: ?VILLAGE_RADIUS_APPROX_SCALAR@Village@@0MB
    MCAPI static float const VILLAGE_RADIUS_APPROX_SCALAR;

    // symbol: ?VILLAGE_SAVE_TICK_DELAY@Village@@0_KB
    MCAPI static uint64 const VILLAGE_SAVE_TICK_DELAY;

    // symbol: ?VILLAGE_START_HEIGHT@Village@@0HB
    MCAPI static int const VILLAGE_START_HEIGHT;

    // symbol: ?VILLAGE_UNCLAIMED_POI_CAP@Village@@0HB
    MCAPI static int const VILLAGE_UNCLAIMED_POI_CAP;

    // symbol: ?VILLAGE_UPDATE_TICK_DELAY@Village@@0_KB
    MCAPI static uint64 const VILLAGE_UPDATE_TICK_DELAY;

    // symbol: ?VILLAGE_VERSION_CURRENT@Village@@0EB
    MCAPI static uchar const VILLAGE_VERSION_CURRENT;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE() { return ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE; }

    static auto& $CELEBRATION_EVENT() { return CELEBRATION_EVENT; }

    static auto& $RAID_BOUNDS_PADDING() { return RAID_BOUNDS_PADDING; }

    static auto& $RAID_EXPIRY_EVENT() { return RAID_EXPIRY_EVENT; }

    static auto& $RAID_FINISHED_DELAY_IN_TICKS() { return RAID_FINISHED_DELAY_IN_TICKS; }

    static auto& $RAID_GROUP_COMPLETE_DELAY_IN_TICKS() { return RAID_GROUP_COMPLETE_DELAY_IN_TICKS; }

    static auto& $RAID_LOCATION_HELP_DELAY_IN_TICKS() { return RAID_LOCATION_HELP_DELAY_IN_TICKS; }

    static auto& $RAID_MAX_SPAWN_FAILURES() { return RAID_MAX_SPAWN_FAILURES; }

    static auto& $RAID_PREP_TIME_IN_TICKS() { return RAID_PREP_TIME_IN_TICKS; }

    static auto& $RAID_TIMEOUT_IN_TICKS() { return RAID_TIMEOUT_IN_TICKS; }

    static auto& $STANDING_DECAY_INTERVAL_BAD() { return STANDING_DECAY_INTERVAL_BAD; }

    static auto& $STANDING_DECAY_INTERVAL_GOOD() { return STANDING_DECAY_INTERVAL_GOOD; }

    static auto& $STORAGE_KEY_DWELLERS() { return STORAGE_KEY_DWELLERS; }

    static auto& $STORAGE_KEY_PLAYERS() { return STORAGE_KEY_PLAYERS; }

    static auto& $STORAGE_KEY_POI() { return STORAGE_KEY_POI; }

    static auto& $STORAGE_KEY_RAID() { return STORAGE_KEY_RAID; }

    static auto& $STORAGE_KEY_VILLAGE() { return STORAGE_KEY_VILLAGE; }

    static auto& $UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS() { return UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS; }

    static auto& $VILLAGER_EXPECTED_WORK_INTERVAL() { return VILLAGER_EXPECTED_WORK_INTERVAL; }

    static auto& $VILLAGE_HERO_BESTOW_TIME() { return VILLAGE_HERO_BESTOW_TIME; }

    static auto& $VILLAGE_POI_PURGE_TIME() { return VILLAGE_POI_PURGE_TIME; }

    static auto& $VILLAGE_RADIUS_APPROX_SCALAR() { return VILLAGE_RADIUS_APPROX_SCALAR; }

    static auto& $VILLAGE_SAVE_TICK_DELAY() { return VILLAGE_SAVE_TICK_DELAY; }

    static auto& $VILLAGE_START_HEIGHT() { return VILLAGE_START_HEIGHT; }

    static auto& $VILLAGE_UNCLAIMED_POI_CAP() { return VILLAGE_UNCLAIMED_POI_CAP; }

    static auto& $VILLAGE_UPDATE_TICK_DELAY() { return VILLAGE_UPDATE_TICK_DELAY; }

    static auto& $VILLAGE_VERSION_CURRENT() { return VILLAGE_VERSION_CURRENT; }

    // NOLINTEND
};
