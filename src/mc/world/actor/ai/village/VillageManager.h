#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/IVillageManager.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class VillageManager : public ::IVillageManager {
public:
    // VillageManager inner types declare
    // clang-format off
    class DwellerTestVillageInfo;
    class VillageInfo;
    // clang-format on

    // VillageManager inner types define
    enum class BedAvailabilityState {};

    class DwellerTestVillageInfo {
    public:
        // prevent constructor by default
        DwellerTestVillageInfo& operator=(DwellerTestVillageInfo const&);
        DwellerTestVillageInfo(DwellerTestVillageInfo const&);
        DwellerTestVillageInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~DwellerTestVillageInfo();

        // NOLINTEND
    };

    class VillageInfo {
    public:
        // prevent constructor by default
        VillageInfo& operator=(VillageInfo const&);
        VillageInfo(VillageInfo const&);
        VillageInfo();

    public:
        // NOLINTBEGIN
        MCAPI ~VillageInfo();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VillageManager& operator=(VillageManager const&);
    VillageManager(VillageManager const&);
    VillageManager();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VillageManager() = default;

    // vIndex: 1
    virtual std::weak_ptr<class Village>
    fetchClosestVillage(class BlockPos const& position, int, uint searchRadius) const;

    // vIndex: 2
    virtual std::weak_ptr<class Village> getVillageByID(class mce::UUID const& villageID) const;

    MCAPI explicit VillageManager(class Dimension& dimension);

    MCAPI std::weak_ptr<class Village>
          fetchClosestVillageMostSuitableForDweller(class BlockPos const& position, int, uint searchRadius) const;

    MCAPI std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const& pos);

    MCAPI std::weak_ptr<class POIInstance> getPOI(class BlockPos const& position) const;

    MCAPI class HashedString getPOIInitEventFromName(class HashedString const& name) const;

    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    MCAPI void insertPOI(std::shared_ptr<class POIInstance>&& poi);

    MCAPI bool isValidPOIType(class BlockPos const& pos, class Block const& block) const;

    MCAPI bool isWanderingTraderManagedByScheduler(class Actor const& actor);

    MCAPI void loadAllVillages();

    MCAPI void removePOI(std::weak_ptr<class POIInstance> poi);

    MCAPI void submitFindPOIQuery(struct ActorUniqueID const& actorID);

    MCAPI void tick(struct Tick const& tick);

    MCAPI void tickVillages(struct Tick const& tick, class Vec3 const& position, class BlockSource& region);

    MCAPI std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const& position, class Block const& block);

    MCAPI static int const MAX_POI_TOLERANCE_DIST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addPOIWithinRadius(class BlockPos const& pos, class BlockSource& region);

    MCAPI void _assignPOIOnly(std::shared_ptr<class POIInstance>&& pi);

    MCAPI float
    _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const& position, class Village const& village) const;

    MCAPI std::shared_ptr<class Village>
          _createOrGetVillage(class mce::UUID const& id, class BlockPos const& newVillagePos);

    MCAPI std::unordered_map<class Village const*, ::VillageManager::BedAvailabilityState>
          _getVillageWithBedsAvailableMap() const;

    MCAPI void _loadPOIBlueprints();

    MCAPI void _removeVillage(class Village& village);

    MCAPI void _saveAllVillages(class LevelStorage&);

    MCAPI void _tryAssignPOIOrCreateVillage(std::shared_ptr<class POIInstance>&& pi);

    MCAPI void _unclusterDerelictPOIs(std::vector<std::weak_ptr<class POIInstance>>& pois);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static uint64 const MAX_POI_QUERIES;

    MCAPI static int const MAX_QUERY_SCAN_ITERATIONS;

    MCAPI static int const VILLAGE_HERO_EFFECT_DURATION;

    // NOLINTEND
};
