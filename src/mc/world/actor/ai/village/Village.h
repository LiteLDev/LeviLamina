#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/world/actor/ai/village/POIType.h"

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
        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static int const& GOLEM_DEATH_PENALTY();

        MCAPI static int const& LARGE_PENALTY();

        MCAPI static int const& LARGE_REWARD();

        MCAPI static int const& MEDIUM_PENALTY();

        MCAPI static int const& SMALL_PENALTY();

        MCAPI static int const& SMALL_REWARD();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    Village& operator=(Village const&);
    Village(Village const&);
    Village();

public:
    // NOLINTBEGIN
    MCAPI Village(class Dimension& dimension, class mce::UUID id, class BlockPos const& origin);

    MCAPI void addActorToVillage(::DwellerRole role, struct ActorUniqueID const& actorID);

    MCAPI void addAggressor(class Mob const& mob);

    MCAPI bool addPOI(std::weak_ptr<class POIInstance> pi);

    MCAPI void addVillager(struct ActorUniqueID const& villagerID);

    MCAPI bool checkNeedMoreVillagers() const;

    MCAPI void debugDraw();

    MCAPI std::weak_ptr<class POIInstance> fetchOwnedPOI(struct ActorUniqueID const& id, ::POIType type);

    MCAPI void fireSoundTheAlarm();

    MCAPI float getApproximateRadius() const;

    MCAPI uint64 getBedPOICount() const;

    MCAPI class AABB const& getBounds() const;

    MCAPI class Vec3 getCenter() const;

    MCAPI class Actor* getClosestAggressor(class Actor* from);

    MCAPI class Player* getClosestBadStandingPlayer(class Actor& from);

    MCAPI std::weak_ptr<class POIInstance> getClosestPOI(::POIType type, class BlockPos const& position);

    MCAPI class Raid const* getRaid() const;

    MCAPI class AABB const& getRaidBounds() const;

    MCAPI class Raid* getRaidMutable();

    MCAPI int getStanding(struct ActorUniqueID const& playerID);

    MCAPI class mce::UUID getUniqueID() const;

    MCAPI bool hasInvalidRole(struct ActorUniqueID const& actorId, ::DwellerRole const& role);

    MCAPI bool hasRaid() const;

    MCAPI bool hasSpecificDweller(::DwellerRole role, struct ActorUniqueID const& id) const;

    MCAPI void loadDataByKey(std::string const& key, class CompoundTag const& tag);

    MCAPI int modifyStanding(struct ActorUniqueID const& playerID, int delta);

    MCAPI std::_List_iterator<
        std::_List_val<std::_List_simple_types<std::pair<struct ActorUniqueID const, struct Village::DwellerData>>>>
    removeActorFromVillage(::DwellerRole role, struct ActorUniqueID const& actor);

    MCAPI void removeAllInstancesofActorFromVillage(struct ActorUniqueID const& actor);

    MCAPI void removeVillageSavedData();

    MCAPI void resetDwellerTimer(::DwellerRole role, struct ActorUniqueID const& id);

    MCAPI void resetNoBreedTimer();

    MCAPI void rewardAllPlayers(int deltaAmount);

    MCAPI void setSavedDwellerPosition(::DwellerRole role, struct ActorUniqueID const& id, class BlockPos pos);

    MCAPI void tick(struct Tick tick, class BlockSource& region);

    MCAPI void tickRaid(struct Tick gameTick);

    MCAPI void triggerRaid();

    MCAPI void trySetVillagerWorkTimestamp(struct ActorUniqueID const& id);

    MCAPI void unlinkMismatchedJobsites(class Actor const& villager);

    MCAPI bool villagerLivesHere(struct ActorUniqueID const& villager) const;

    MCAPI bool withinVillageBounds(class Vec3 const& pos, float tolerance) const;

    MCAPI static bool isValidRegisteredPOI(class BlockSource& region, class BlockPos const& position);

    MCAPI static bool isVillagePOI(class BlockSource const& region, class BlockPos const& position);

    MCAPI static bool isVillagePOI(class VillageManager const& villageManager, class Block const& block);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _calcPOIDist();

    MCAPI void _claimUnclaimedPOIs();

    MCAPI void _clearVillagerPOIs(struct ActorUniqueID const& villager);

    MCAPI void _createRaid();

    MCAPI void _deleteOldDataIfNeeded(class LevelStorage& levelStorage, std::string const& key) const;

    MCAPI bool _findAvailablePOI(uint64 index, class Level& level, class Random& random, struct ActorUniqueID id);

    MCAPI bool _findPlayerCentricSpawnPointForRaid(class Vec3& outSpawnPoint, bool snapToSurface) const;

    MCAPI bool _findSpawnPointForRaid(
        class Vec3& outSpawnPoint,
        float       distanceTolerance,
        float       boundsScaling,
        bool        snapToSurface,
        bool        outsideOfVillage
    ) const;

    MCAPI class BlockSource*
    _findSpawnableRegion(class Vec3 spawnPosition, int xzSpreadDistance, bool& outHasSpawnAreaLoaded) const;

    MCAPI void _findWeightedPOI(
        std::vector<std::weak_ptr<class POIInstance>>& unclaimedPOIStack,
        class Random&                                  random,
        struct ActorUniqueID                           id
    );

    MCAPI void _helpLocateRaiders(class Raid const& raid);

    MCAPI void _loadVillageData(class CompoundTag const& tag);

    MCAPI void _loadVillageDwellers(class CompoundTag const& tag);

    MCAPI void _loadVillagePOIs(class CompoundTag const& tag);

    MCAPI void _playSoundFrom(class Vec3 const& soundOrigin, ::Puv::Legacy::LevelSoundEvent sound);

    MCAPI void _readyRaidGroup(std::unordered_set<struct ActorUniqueID>& spawnedMobs);

    MCAPI void _ringBells(class BlockSource& region, class Random& random) const;

    MCAPI void _saveVillageData(class LevelStorage& levelStorage) const;

    MCAPI void _saveVillageDwellers(class LevelStorage& levelStorage) const;

    MCAPI void _saveVillagePOIs(class LevelStorage& levelStorage) const;

    MCAPI void _saveVillagePOIsToTag(class CompoundTag& tag) const;

    MCAPI void _saveVillagePlayerStanding(class LevelStorage& levelStorage) const;

    MCAPI void _saveVillageRaid(class LevelStorage& levelStorage) const;

    MCAPI void _spawnPassiveDwellers(class BlockSource& region, int);

    MCAPI bool
    _spawnRaidGroup(class Vec3 spawnPosition, uchar groupNumber, std::unordered_set<struct ActorUniqueID>& spawnedMobs)
        const;

    MCAPI void _tryAddPoiToVillage(struct ActorUniqueID const& villager, std::weak_ptr<class POIInstance> pi);

    MCAPI void _tryShiftStandingsTowardNeutral(struct Tick& updateTick, uint64 updateInterval, bool positiveShift);

    MCAPI void _trySpawnDefenderDwellers(class BlockSource& region, uint64 bedCount);

    MCAPI void _updateAndRemoveInactiveDwellers(uint64 villagerPurgeTime, float villageBorderTolerance);

    MCAPI void _updateClaimedPOIs(class BlockSource& region);

    MCAPI void _updateUnclaimedPOIs(class BlockSource& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Dimension& dimension, class mce::UUID id, class BlockPos const& origin);

    MCAPI static float const& ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE();

    MCAPI static std::string const& CELEBRATION_EVENT();

    MCAPI static bool& DEBUG_DRAWING();

    MCAPI static float const& DWELLER_REMOVAL_TOLERANCE();

    MCAPI static int const& MAX_VILLAGE_STANDING();

    MCAPI static int const& MIN_VILLAGE_STANDING();

    MCAPI static class Vec3 const& RAID_BOUNDS_PADDING();

    MCAPI static std::string const& RAID_EXPIRY_EVENT();

    MCAPI static int const& RAID_FINISHED_DELAY_IN_TICKS();

    MCAPI static int const& RAID_GROUP_COMPLETE_DELAY_IN_TICKS();

    MCAPI static int const& RAID_LOCATION_HELP_DELAY_IN_TICKS();

    MCAPI static uchar const& RAID_MAX_SPAWN_FAILURES();

    MCAPI static int const& RAID_PREP_TIME_IN_TICKS();

    MCAPI static struct Tick const& RAID_TIMEOUT_IN_TICKS();

    MCAPI static uint64 const& STANDING_DECAY_INTERVAL_BAD();

    MCAPI static uint64 const& STANDING_DECAY_INTERVAL_GOOD();

    MCAPI static std::string const& STORAGE_KEY_DWELLERS();

    MCAPI static std::string const& STORAGE_KEY_PLAYERS();

    MCAPI static std::string const& STORAGE_KEY_POI();

    MCAPI static std::string const& STORAGE_KEY_PREFIX();

    MCAPI static std::string const& STORAGE_KEY_RAID();

    MCAPI static char const& STORAGE_KEY_SEPARATOR();

    MCAPI static std::string const& STORAGE_KEY_VILLAGE();

    MCAPI static int const& UNINITIALIZED_VILLAGE_LIFETIME_MAX_TICKS();

    MCAPI static int64 const& VILLAGER_EXPECTED_WORK_INTERVAL();

    MCAPI static int const& VILLAGE_HERO_BESTOW_TIME();

    MCAPI static uint64 const& VILLAGE_POI_PURGE_TIME();

    MCAPI static float const& VILLAGE_RADIUS_APPROX_SCALAR();

    MCAPI static uint64 const& VILLAGE_SAVE_TICK_DELAY();

    MCAPI static int const& VILLAGE_START_HEIGHT();

    MCAPI static int const& VILLAGE_START_XZ_BOUNDS();

    MCAPI static int const& VILLAGE_UNCLAIMED_POI_CAP();

    MCAPI static uint64 const& VILLAGE_UPDATE_TICK_DELAY();

    MCAPI static uchar const& VILLAGE_VERSION_CURRENT();

    // NOLINTEND
};
