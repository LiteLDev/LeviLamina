#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/ai/village/IVillageManager.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/actor/ai/village/WanderingTraderScheduler.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class BlockType;
class Dimension;
class HashedString;
class LevelStorage;
class POIInstance;
class Village;
struct EffectDuration;
struct ILevelStorageManagerConnector;
struct POIBlueprint;
namespace mce { class UUID; }
// clang-format on

class VillageManager : public ::IVillageManager {
public:
    // VillageManager inner types declare
    // clang-format off
    struct DwellerTestVillageInfo;
    struct VillageInfo;
    // clang-format on

    // VillageManager inner types define
    using POIBlueprintMap = ::std::unordered_map<::BlockType const*, ::std::unique_ptr<::POIBlueprint>>;

    using VillageMap = ::std::unordered_map<::mce::UUID, ::std::shared_ptr<::Village>>;

    using POIMap = ::std::unordered_map<::BlockPos, ::std::shared_ptr<::POIInstance>>;

    enum class BedAvailabilityState : int {
        Unknown       = 0,
        SomeAvailable = 1,
        NoneAvailable = 2,
    };

    struct VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Village>> village;
        ::ll::TypedStorage<1, 1, bool>                          positionIsWithinVillageBounds;
        ::ll::TypedStorage<4, 4, float>                         distanceToClosestEdgeOfVillage;
        // NOLINTEND
    };

    struct DwellerTestVillageInfo : public ::VillageManager::VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::VillageManager::BedAvailabilityState> bedAvailability;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~DwellerTestVillageInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&>                                                     mDimension;
    ::ll::TypedStorage<8, 40, ::std::deque<::ActorUniqueID>>                                   mFindPOIQueries;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::POIInstance>>>                 mUnclusteredPOIs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::mce::UUID, ::std::shared_ptr<::Village>>> mVillages;
    ::ll::TypedStorage<8, 192, ::std::array<::std::unordered_map<::BlockPos, ::std::shared_ptr<::POIInstance>>, 3>>
        mClusteredPOIs;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockType const*, ::std::unique_ptr<::POIBlueprint>>>
                                                               mPOIBlueprints;
    ::ll::TypedStorage<8, 8, ::Tick>                           mTickCount;
    ::ll::TypedStorage<8, 32, ::WanderingTraderScheduler>      mWanderingTraderScheduler;
    ::ll::TypedStorage<1, 1, bool>                             mFinishedQueryScan;
    ::ll::TypedStorage<4, 4, int>                              mCurrentXScan;
    ::ll::TypedStorage<4, 4, int>                              mCurrentYScan;
    ::ll::TypedStorage<4, 4, int>                              mCurrentZScan;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnLevelStorageManagerStartLeaveGameSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    VillageManager& operator=(VillageManager const&);
    VillageManager(VillageManager const&);
    VillageManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillageManager() /*override*/ = default;

    // vIndex: 1
    virtual ::std::weak_ptr<::Village>
    fetchClosestVillage(::BlockPos const& position, int maxDistFromVillageBounds, uint searchRadius) const /*override*/;

    // vIndex: 2
    virtual ::std::weak_ptr<::Village> getVillageByID(::mce::UUID const& villageID) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VillageManager(::Dimension& dimension);

    MCAPI void _addPOIWithinRadius(::BlockPos const& pos, ::BlockSource& region);

    MCAPI void _assignPOIOnly(::std::shared_ptr<::POIInstance>&& pi);

    MCAPI float
    _calculateDistanceFromPositionToEdgeOfVillage(::BlockPos const& position, ::Village const& village) const;

    MCAPI ::std::shared_ptr<::Village> _createOrGetVillage(::mce::UUID const& id, ::BlockPos const& newVillagePos);

    MCAPI ::std::unordered_map<::Village const*, ::VillageManager::BedAvailabilityState>
    _getVillageWithBedsAvailableMap() const;

    MCAPI void _loadPOIBlueprints();

    MCAPI void _removeEligibleVillages();

    MCAPI void _removeVillage(::Village& village);

    MCAPI void _saveAllVillages(::LevelStorage& levelStorage);

    MCAPI void _tryAssignPOIOrCreateVillage(::std::shared_ptr<::POIInstance>&& pi);

    MCAPI void _unclusterDerelictPOIs(::std::vector<::std::weak_ptr<::POIInstance>>& pois);

    MCAPI ::std::weak_ptr<::Village> fetchClosestVillageMostSuitableForDweller(
        ::BlockPos const& position,
        int               maxDistFromVillageBounds,
        uint              searchRadius
    ) const;

    MCAPI ::std::weak_ptr<::Village> getClosestVillageWithRaid(::BlockPos const& pos);

    MCAPI ::std::weak_ptr<::POIInstance> getPOI(::BlockPos const& position) const;

    MCAPI ::HashedString getPOIInitEventFromName(::HashedString const& name) const;

    MCAPI bool hasPOI(::BlockPos const& position, ::POIType type) const;

    MCAPI void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void insertPOI(::std::shared_ptr<::POIInstance>&& poi);

    MCAPI bool isValidPOIType(::BlockPos const& pos, ::Block const& block) const;

    MCAPI void removePOI(::std::weak_ptr<::POIInstance> poi);

    MCAPI void submitFindPOIQuery(::ActorUniqueID const& actorID);

    MCAPI void tick(::Tick const& tick);

    MCAPI ::std::shared_ptr<::POIInstance> tryCreatePOI(::BlockPos const& position, ::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_POI_TOLERANCE_DIST();

    MCAPI static ::EffectDuration const& VILLAGE_HERO_EFFECT_DURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::weak_ptr<::Village>
    $fetchClosestVillage(::BlockPos const& position, int maxDistFromVillageBounds, uint searchRadius) const;

    MCAPI ::std::weak_ptr<::Village> $getVillageByID(::mce::UUID const& villageID) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
