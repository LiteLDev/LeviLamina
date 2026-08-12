#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/entity/components_json_legacy/DwellerRole.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class Dimension;
class LevelStorage;
class POIInstance;
class Player;
class Raid;
class Vec3;
class VillageManager;
// clang-format on

class Village {
public:
    // Village inner types declare
    // clang-format off
    struct DwellerData;
    struct StandingModifiers;
    // clang-format on

    // Village inner types define
    enum class VillageVersion : uchar {
        Base                 = 0,
        WorksiteInitEventFix = 1,
        Count                = 2,
    };

    struct DwellerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Tick>      mLastTicked;
        ::ll::TypedStorage<4, 12, ::BlockPos> mLastSavedPosition;
        // NOLINTEND
    };

    struct StandingModifiers {};

    using ClaimedPOIList = ::std::unordered_map<::ActorUniqueID, ::std::array<::std::weak_ptr<::POIInstance>, 3>>;

    using DwellerMap = ::std::unordered_map<::ActorUniqueID, ::Village::DwellerData>;

    using DwellerTimestamp = ::std::pair<::ActorUniqueID, ::Tick>;

    using UnclaimedPOIList = ::std::array<::std::vector<::std::weak_ptr<::POIInstance>>, 3>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                                                    mUniqueID;
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                    mDimension;
    ::ll::TypedStorage<8, 72, ::std::array<::std::vector<::std::weak_ptr<::POIInstance>>, 3>> mUnclaimedPOIStacks;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::array<::std::weak_ptr<::POIInstance>, 3>>>
        mClaimedPOIs;
    ::ll::TypedStorage<8, 256, ::std::array<::std::unordered_map<::ActorUniqueID, ::Village::DwellerData>, 4>>
                                                                                             mDwellers;
    ::ll::TypedStorage<4, 24, ::AABB>                                                        mBounds;
    ::ll::TypedStorage<4, 24, ::AABB>                                                        mStaticRaidBounds;
    ::ll::TypedStorage<1, 1, uchar>                                                          mVillageVersion;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mGameTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mSaveTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mRingTick;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mNoBreedTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mBadStandingDecayTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mGoodStandingDecayTimer;
    ::ll::TypedStorage<8, 8, ::Tick>                                                         mPassiveDwellerSpawnTimer;
    ::ll::TypedStorage<4, 4, int>                                                            mInitializationTimer;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, int>>                    mPlayerStanding;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::Village::DwellerData>> mAggressors;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ActorUniqueID, ::Tick>>>           mVillagerWorkTimestamps;
    ::ll::TypedStorage<1, 1, bool>                                                           mVillageInitialized;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                          mNitwitFamily;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                          mVillagePrefix;
    ::ll::TypedStorage<8, 48, ::HashedString const>                                          mVillagePrefixOld;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Raid>>                                      mRaid;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::ActorUniqueID>>                         mSoundTheAlarmPlayerList;
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

    MCAPI void _clearVillagerPOIs(::ActorUniqueID const& villager);

    MCAPI void _createRaid();

    MCAPI bool _findSpawnPointForRaid(
        ::Vec3&     outSpawnPoint,
        float const distanceTolerance,
        float const boundsScaling,
        bool        snapToSurface,
        bool        outsideOfVillage
    ) const;

    MCAPI ::BlockSource*
    _findSpawnableRegion(::Vec3 spawnPosition, int xzSpreadDistance, bool& outHasSpawnAreaLoaded) const;

    MCAPI void _playSoundFrom(::Vec3 const& soundOrigin, ::SharedTypes::Legacy::LevelSoundEvent sound);

    MCAPI void _saveVillageData(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillageDwellers(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillagePOIs(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillagePlayerStanding(::LevelStorage& levelStorage) const;

    MCAPI void _saveVillageRaid(::LevelStorage& levelStorage) const;

    MCAPI void _tryAddPoiToVillage(::ActorUniqueID const& villager, ::std::weak_ptr<::POIInstance> pi);

    MCAPI void addActorToVillage(::DwellerRole role, ::ActorUniqueID const& actorID);

    MCAPI bool addPOI(::std::weak_ptr<::POIInstance> pi);

    MCAPI void addVillager(::ActorUniqueID const& villagerID);

    MCAPI bool checkNeedMoreVillagers() const;

    MCAPI ::std::weak_ptr<::POIInstance> fetchOwnedPOI(::ActorUniqueID const& id, ::POIType type);

    MCAPI void fireSoundTheAlarm();

    MCAPI ::Actor* getClosestAggressor(::Actor* from);

    MCAPI ::Player* getClosestBadStandingPlayer(::Actor& from);

    MCAPI ::std::weak_ptr<::POIInstance> getClosestPOI(::POIType type, ::BlockPos const& position);

    MCAPI bool hasInvalidRole(::ActorUniqueID const& actorId, ::DwellerRole const& role);

    MCAPI bool hasSpecificDweller(::DwellerRole role, ::ActorUniqueID const& id) const;

    MCAPI int modifyStanding(::ActorUniqueID const& playerID, int delta);

    MCAPI ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::ActorUniqueID const, ::Village::DwellerData>>>>
    removeActorFromVillage(::DwellerRole role, ::ActorUniqueID const& actor);

    MCAPI void removeAllInstancesofActorFromVillage(::ActorUniqueID const& actor);

    MCAPI ::std::_List_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::ActorUniqueID const, ::Village::DwellerData>>>>
    removeVillager(::ActorUniqueID const& villager);

    MCAPI void resetDwellerTimer(::DwellerRole role, ::ActorUniqueID const& id);

    MCAPI void setSavedDwellerPosition(::DwellerRole role, ::ActorUniqueID const& id, ::BlockPos pos);

    MCAPI void tick(::Tick tick, ::BlockSource& region);

    MCAPI void triggerRaid();

    MCAPI void trySetVillagerWorkTimestamp(::ActorUniqueID const& id);

    MCAPI void unlinkMismatchedJobsites(::Actor const& villager);

    MCAPI bool villagerLivesHere(::ActorUniqueID const& villager) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool isValidRegisteredPOI(::BlockSource& region, ::Block const& block, ::BlockPos const& position);

    MCAPI static bool isVillagePOI(::VillageManager const& villageManager, ::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& STORAGE_KEY_PREFIX();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND
};
