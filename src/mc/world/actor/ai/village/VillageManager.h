#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/village/IVillageManager.h"
#include "mc/world/actor/ai/village/POIType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class Dimension;
class HashedString;
class ILevelStorageManagerConnector;
class LevelStorage;
class POIInstance;
class Vec3;
class Village;
struct ActorUniqueID;
struct EffectDuration;
struct POIBlueprint;
struct Tick;
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
    enum class BedAvailabilityState : int {
        Unknown       = 0,
        SomeAvailable = 1,
        NoneAvailable = 2,
    };

    struct VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkeeec1f;
        ::ll::UntypedStorage<1, 1>  mUnk18446c;
        ::ll::UntypedStorage<4, 4>  mUnk5d4766;
        // NOLINTEND

    public:
        // prevent constructor by default
        VillageInfo& operator=(VillageInfo const&);
        VillageInfo(VillageInfo const&);
        VillageInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VillageInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct DwellerTestVillageInfo : public ::VillageManager::VillageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk5a19b3;
        // NOLINTEND

    public:
        // prevent constructor by default
        DwellerTestVillageInfo& operator=(DwellerTestVillageInfo const&);
        DwellerTestVillageInfo(DwellerTestVillageInfo const&);
        DwellerTestVillageInfo();

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
    ::ll::UntypedStorage<8, 8>   mUnk23988e;
    ::ll::UntypedStorage<8, 40>  mUnk4d124c;
    ::ll::UntypedStorage<8, 24>  mUnka6dddb;
    ::ll::UntypedStorage<8, 64>  mUnk623631;
    ::ll::UntypedStorage<8, 192> mUnkf40d9a;
    ::ll::UntypedStorage<8, 64>  mUnka32962;
    ::ll::UntypedStorage<8, 8>   mUnk38de48;
    ::ll::UntypedStorage<8, 32>  mUnk9e27c3;
    ::ll::UntypedStorage<1, 1>   mUnkcf8c6e;
    ::ll::UntypedStorage<4, 4>   mUnk642676;
    ::ll::UntypedStorage<4, 4>   mUnk783cf8;
    ::ll::UntypedStorage<4, 4>   mUnk5c81c1;
    ::ll::UntypedStorage<8, 16>  mUnkca6d86;
    ::ll::UntypedStorage<8, 16>  mUnk760df9;
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

    MCAPI void initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector
    );

    MCAPI void insertPOI(::std::shared_ptr<::POIInstance>&& poi);

    MCAPI bool isValidPOIType(::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool isWanderingTraderManagedByScheduler(::Actor const& actor);

    MCAPI void loadAllVillages();

    MCAPI void removePOI(::std::weak_ptr<::POIInstance> poi);

    MCAPI void submitFindPOIQuery(::ActorUniqueID const& actorID);

    MCAPI void tick(::Tick const& tick);

    MCAPI void tickVillages(::Tick const& tick, ::Vec3 const& position, ::BlockSource& region);

    MCAPI ::std::shared_ptr<::POIInstance> tryCreatePOI(::BlockPos const& position, ::Block const& block);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& MAX_POI_QUERIES();

    MCAPI static int const& MAX_POI_TOLERANCE_DIST();

    MCAPI static int const& MAX_QUERY_SCAN_ITERATIONS();

    MCAPI static ::EffectDuration const& VILLAGE_HERO_EFFECT_DURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
