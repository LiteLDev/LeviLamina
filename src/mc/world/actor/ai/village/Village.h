#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class Dimension;
class Level;
class LevelStorage;
class Mob;
class POIInstance;
class Player;
class Raid;
class Random;
class Vec3;
class VillageManager;
struct ActorUniqueID;
struct Tick;
namespace mce { class UUID; }
// clang-format on

class Village {
public:
    // Village inner types declare
    // clang-format off
    struct DwellerData;
    struct StandingModifiers;
    // clang-format on

    // Village inner types define
    struct StandingModifiers {
    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static int const& GOLEM_DEATH_PENALTY();

        MCAPI static int const& LARGE_PENALTY();

        MCAPI static int const& LARGE_REWARD();

        MCAPI static int const& MEDIUM_PENALTY();

        MCAPI static int const& SMALL_PENALTY();

        MCAPI static int const& SMALL_REWARD();
        // NOLINTEND
    };

    enum class VillageVersion : uchar {
        Base                 = 0,
        WorksiteInitEventFix = 1,
        Count                = 2,
    };

    struct DwellerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkc83d40;
        ::ll::UntypedStorage<4, 12> mUnk1dc9bb;
        // NOLINTEND

    public:
        // prevent constructor by default
        DwellerData& operator=(DwellerData const&);
        DwellerData(DwellerData const&);
        DwellerData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkdb91f2;
    ::ll::UntypedStorage<8, 8>   mUnkbe29e3;
    ::ll::UntypedStorage<8, 72>  mUnk6e0eaa;
    ::ll::UntypedStorage<8, 64>  mUnkff4f3d;
    ::ll::UntypedStorage<8, 256> mUnk4fd8d7;
    ::ll::UntypedStorage<4, 24>  mUnkc69480;
    ::ll::UntypedStorage<4, 24>  mUnkb24871;
    ::ll::UntypedStorage<1, 1>   mUnkff0127;
    ::ll::UntypedStorage<8, 8>   mUnke08ea4;
    ::ll::UntypedStorage<8, 8>   mUnk8a6ed6;
    ::ll::UntypedStorage<8, 8>   mUnkb71983;
    ::ll::UntypedStorage<8, 8>   mUnkc0a611;
    ::ll::UntypedStorage<8, 8>   mUnk4ba5f8;
    ::ll::UntypedStorage<8, 8>   mUnkf61631;
    ::ll::UntypedStorage<8, 8>   mUnk8a62c9;
    ::ll::UntypedStorage<4, 4>   mUnkbc5c53;
    ::ll::UntypedStorage<8, 64>  mUnk4ec3b5;
    ::ll::UntypedStorage<8, 64>  mUnk545584;
    ::ll::UntypedStorage<8, 24>  mUnk51df52;
    ::ll::UntypedStorage<1, 1>   mUnk6e6598;
    ::ll::UntypedStorage<8, 48>  mUnk54e088;
    ::ll::UntypedStorage<8, 48>  mUnk8ea9f2;
    ::ll::UntypedStorage<8, 48>  mUnk1baa4c;
    ::ll::UntypedStorage<8, 8>   mUnkfb7705;
    ::ll::UntypedStorage<8, 64>  mUnk18b263;
    // NOLINTEND

public:
    // prevent constructor by default
    Village& operator=(Village const&);
    Village(Village const&);
    Village();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Village(::Dimension& dimension, ::mce::UUID id, ::BlockPos const& origin);

    MCAPI void _calcPOIDist();

    MCAPI void _claimUnclaimedPOIs();

    MCAPI void _clearVillagerPOIs(::ActorUniqueID const& villager);

    MCAPI void _createRaid();

    MCAPI bool _findAvailablePOI(uint64 index, ::Level& level, ::Random& random, ::ActorUniqueID id);

    MCAPI bool _findPlayerCentricSpawnPointForRaid(::Vec3& outSpawnPoint, bool snapToSurface) const;

    MCAPI bool _findSpawnPointForRaid(
        ::Vec3& outSpawnPoint,
        float   distanceTolerance,
        float   boundsScaling,
        bool    snapToSurface,
        bool    outsideOfVillage
    ) const;

    MCAPI ::BlockSource*
    _findSpawnableRegion(::Vec3 spawnPosition, int xzSpreadDistance, bool& outHasSpawnAreaLoaded) const;

    MCAPI void _findWeightedPOI(
        ::std::vector<::std::weak_ptr<::POIInstance>>& unclaimedPOIStack,
        ::Random&                                      random,
        ::ActorUniqueID                                id
    );

    MCAPI void _helpLocateRaiders(::Raid const& raid);

    MCAPI void _loadVillageData(::CompoundTag const& tag);

    MCAPI void _loadVillageDwellers(::CompoundTag const& tag);

    MCAPI void _loadVillagePOIs(::CompoundTag const& tag);

    MCAPI void _readyRaidGroup(::std::unordered_set<::ActorUniqueID>& spawnedMobs);

    MCAPI void _ringBells(::BlockSource& region, ::Random& random) const;

    MCAPI void _saveVillageData(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillageDwellers(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillagePOIs(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillagePOIsToTag(::CompoundTag& tag) const;

    MCAPI void _saveVillagePlayerStanding(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillageRaid(::LevelStorage& levelStorage) const;

    MCAPI void _spawnPassiveDwellers(::BlockSource& region, int);

    MCAPI bool
    _spawnRaidGroup(::Vec3 spawnPosition, uchar groupNumber, ::std::unordered_set<::ActorUniqueID>& spawnedMobs) const;

    MCAPI void _tryAddPoiToVillage(::ActorUniqueID const& villager, ::std::weak_ptr<::POIInstance> pi);

    MCAPI void _tryShiftStandingsTowardNeutral(::Tick& updateTick, uint64 updateInterval, bool positiveShift);

    MCAPI void _trySpawnDefenderDwellers(::BlockSource& region, uint64 bedCount);

    MCAPI void _updateAndRemoveInactiveDwellers(uint64 villagerPurgeTime, float villageBorderTolerance);

    MCAPI void _updateClaimedPOIs(::BlockSource& region);

    MCAPI void _updateUnclaimedPOIs(::BlockSource& region);

    MCAPI void addActorToVillage(::DwellerRole role, ::ActorUniqueID const& actorID);

    MCAPI void addAggressor(::Mob const& mob);

    MCAPI bool addPOI(::std::weak_ptr<::POIInstance> pi);

    MCAPI void addVillager(::ActorUniqueID const& villagerID);

    MCAPI bool checkNeedMoreVillagers() const;

    MCAPI void debugDraw();

    MCAPI ::std::weak_ptr<::POIInstance> fetchOwnedPOI(::ActorUniqueID const& id, ::POIType type);

    MCAPI void fireSoundTheAlarm();

    MCAPI uint64 getBedPOICount() const;

    MCAPI ::AABB const& getBounds() const;

    MCAPI ::Vec3 getCenter() const;

    MCAPI ::Actor* getClosestAggressor(::Actor* from);

    MCAPI ::Player* getClosestBadStandingPlayer(::Actor& from);

    MCAPI ::std::weak_ptr<::POIInstance> getClosestPOI(::POIType type, ::BlockPos const& position);

    MCAPI ::Raid const* getRaid() const;

    MCAPI ::AABB const& getRaidBounds() const;

    MCAPI ::Raid* getRaidMutable();

    MCAPI ::mce::UUID getUniqueID() const;

    MCAPI bool hasInvalidRole(::ActorUniqueID const& actorId, ::DwellerRole const& role);

    MCAPI bool hasRaid() const;

    MCAPI bool hasSpecificDweller(::DwellerRole role, ::ActorUniqueID const& id) const;

    MCAPI void loadDataByKey(::std::string const& key, ::CompoundTag const& tag);

    MCAPI int modifyStanding(::ActorUniqueID const& playerID, int delta);

    MCAPI ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::ActorUniqueID const, ::Village::DwellerData>>>>
    removeActorFromVillage(::DwellerRole role, ::ActorUniqueID const& actor);

    MCAPI void removeAllInstancesofActorFromVillage(::ActorUniqueID const& actor);

    MCAPI void removeVillageSavedData();

    MCAPI void resetDwellerTimer(::DwellerRole role, ::ActorUniqueID const& id);

    MCAPI void resetNoBreedTimer();

    MCAPI void rewardAllPlayers(int deltaAmount);

    MCAPI void setSavedDwellerPosition(::DwellerRole role, ::ActorUniqueID const& id, ::BlockPos pos);

    MCAPI void tick(::Tick tick, ::BlockSource& region);

    MCAPI void tickRaid(::Tick gameTick);

    MCAPI void triggerRaid();

    MCAPI void trySetVillagerWorkTimestamp(::ActorUniqueID const& id);

    MCAPI void unlinkMismatchedJobsites(::Actor const& villager);

    MCAPI bool villagerLivesHere(::ActorUniqueID const& villager) const;

    MCAPI bool withinVillageBounds(::Vec3 const& pos, float tolerance) const;

    MCAPI ~Village();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isVillagePOI(::VillageManager const& villageManager, ::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& ACHIEVEMENT_SOUND_THE_ALARM_TOLERANCE();

    MCAPI static ::std::string const& CELEBRATION_EVENT();

    MCAPI static bool& DEBUG_DRAWING();

    MCAPI static float const& DWELLER_REMOVAL_TOLERANCE();

    MCAPI static int const& MAX_VILLAGE_STANDING();

    MCAPI static int const& MIN_VILLAGE_STANDING();

    MCAPI static ::Vec3 const& RAID_BOUNDS_PADDING();

    MCAPI static ::std::string const& RAID_EXPIRY_EVENT();

    MCAPI static int const& RAID_FINISHED_DELAY_IN_TICKS();

    MCAPI static int const& RAID_GROUP_COMPLETE_DELAY_IN_TICKS();

    MCAPI static int const& RAID_LOCATION_HELP_DELAY_IN_TICKS();

    MCAPI static uchar const& RAID_MAX_SPAWN_FAILURES();

    MCAPI static int const& RAID_PREP_TIME_IN_TICKS();

    MCAPI static ::Tick const& RAID_TIMEOUT_IN_TICKS();

    MCAPI static uint64 const& STANDING_DECAY_INTERVAL_BAD();

    MCAPI static uint64 const& STANDING_DECAY_INTERVAL_GOOD();

    MCAPI static ::std::string const& STORAGE_KEY_DWELLERS();

    MCAPI static ::std::string const& STORAGE_KEY_PLAYERS();

    MCAPI static ::std::string const& STORAGE_KEY_POI();

    MCAPI static ::std::string const& STORAGE_KEY_PREFIX();

    MCAPI static ::std::string const& STORAGE_KEY_RAID();

    MCAPI static char const& STORAGE_KEY_SEPARATOR();

    MCAPI static ::std::string const& STORAGE_KEY_VILLAGE();

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

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, ::mce::UUID id, ::BlockPos const& origin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
