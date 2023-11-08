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
        // symbol: ??1DwellerTestVillageInfo@VillageManager@@QEAA@XZ
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
        // symbol: ??1VillageInfo@VillageManager@@QEAA@XZ
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
    // vIndex: 0, symbol: __gen_??1VillageManager@@UEAA@XZ
    virtual ~VillageManager() = default;

    // vIndex: 1, symbol: ?fetchClosestVillage@VillageManager@@UEBA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@HI@Z
    virtual std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const&, int, uint) const;

    // vIndex: 2, symbol: ?getVillageByID@VillageManager@@UEBA?AV?$weak_ptr@VVillage@@@std@@AEBVUUID@mce@@@Z
    virtual std::weak_ptr<class Village> getVillageByID(class mce::UUID const&) const;

    // symbol: ??0VillageManager@@QEAA@AEAVDimension@@@Z
    MCAPI explicit VillageManager(class Dimension&);

    // symbol:
    // ?fetchClosestVillageMostSuitableForDweller@VillageManager@@QEBA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@HI@Z
    MCAPI std::weak_ptr<class Village>
          fetchClosestVillageMostSuitableForDweller(class BlockPos const&, int, uint) const;

    // symbol: ?getClosestVillageWithRaid@VillageManager@@QEAA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@@Z
    MCAPI std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const&);

    // symbol: ?getPOI@VillageManager@@QEBA?AV?$weak_ptr@VPOIInstance@@@std@@AEBVBlockPos@@@Z
    MCAPI std::weak_ptr<class POIInstance> getPOI(class BlockPos const&) const;

    // symbol: ?getPOIInitEventFromName@VillageManager@@QEBA?AVHashedString@@AEBV2@@Z
    MCAPI class HashedString getPOIInitEventFromName(class HashedString const&) const;

    // symbol: ?initializeWithLevelStorageManager@VillageManager@@QEAAXAEAVLevelStorageManager@@@Z
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&);

    // symbol: ?insertPOI@VillageManager@@QEAAX$$QEAV?$shared_ptr@VPOIInstance@@@std@@@Z
    MCAPI void insertPOI(std::shared_ptr<class POIInstance>&&);

    // symbol: ?isValidPOIType@VillageManager@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    MCAPI bool isValidPOIType(class BlockPos const&, class Block const&) const;

    // symbol: ?isWanderingTraderManagedByScheduler@VillageManager@@QEAA_NAEBVActor@@@Z
    MCAPI bool isWanderingTraderManagedByScheduler(class Actor const&);

    // symbol: ?loadAllVillages@VillageManager@@QEAAXXZ
    MCAPI void loadAllVillages();

    // symbol: ?removePOI@VillageManager@@QEAAXV?$weak_ptr@VPOIInstance@@@std@@@Z
    MCAPI void removePOI(std::weak_ptr<class POIInstance>);

    // symbol: ?submitFindPOIQuery@VillageManager@@QEAAXAEBUActorUniqueID@@@Z
    MCAPI void submitFindPOIQuery(struct ActorUniqueID const&);

    // symbol: ?tick@VillageManager@@QEAAXAEBUTick@@@Z
    MCAPI void tick(struct Tick const&);

    // symbol: ?tickVillages@VillageManager@@QEAAXAEBUTick@@AEBVVec3@@AEAVBlockSource@@@Z
    MCAPI void tickVillages(struct Tick const&, class Vec3 const&, class BlockSource&);

    // symbol: ?tryCreatePOI@VillageManager@@QEAA?AV?$shared_ptr@VPOIInstance@@@std@@AEBVBlockPos@@AEBVBlock@@@Z
    MCAPI std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const&, class Block const&);

    // symbol: ?MAX_POI_TOLERANCE_DIST@VillageManager@@2HB
    MCAPI static int const MAX_POI_TOLERANCE_DIST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_addPOIWithinRadius@VillageManager@@AEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
    MCAPI void _addPOIWithinRadius(class BlockPos const&, class BlockSource&);

    // symbol: ?_assignPOIOnly@VillageManager@@AEAAX$$QEAV?$shared_ptr@VPOIInstance@@@std@@@Z
    MCAPI void _assignPOIOnly(std::shared_ptr<class POIInstance>&&);

    // symbol: ?_calculateDistanceFromPositionToEdgeOfVillage@VillageManager@@AEBAMAEBVBlockPos@@AEBVVillage@@@Z
    MCAPI float _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const&, class Village const&) const;

    // symbol: ?_createOrGetVillage@VillageManager@@AEAA?AV?$shared_ptr@VVillage@@@std@@AEBVUUID@mce@@AEBVBlockPos@@@Z
    MCAPI std::shared_ptr<class Village> _createOrGetVillage(class mce::UUID const&, class BlockPos const&);

    // symbol:
    // ?_getVillageWithBedsAvailableMap@VillageManager@@AEBA?AV?$unordered_map@PEBVVillage@@W4BedAvailabilityState@VillageManager@@U?$hash@PEBVVillage@@@std@@U?$equal_to@PEBVVillage@@@5@V?$allocator@U?$pair@QEBVVillage@@W4BedAvailabilityState@VillageManager@@@std@@@5@@std@@XZ
    MCAPI std::unordered_map<class Village const*, ::VillageManager::BedAvailabilityState>
          _getVillageWithBedsAvailableMap() const;

    // symbol: ?_loadPOIBlueprints@VillageManager@@AEAAXXZ
    MCAPI void _loadPOIBlueprints();

    // symbol: ?_removeVillage@VillageManager@@AEAAXAEAVVillage@@@Z
    MCAPI void _removeVillage(class Village&);

    // symbol: ?_saveAllVillages@VillageManager@@AEAAXAEAVLevelStorage@@@Z
    MCAPI void _saveAllVillages(class LevelStorage&);

    // symbol: ?_tryAssignPOIOrCreateVillage@VillageManager@@AEAAX$$QEAV?$shared_ptr@VPOIInstance@@@std@@@Z
    MCAPI void _tryAssignPOIOrCreateVillage(std::shared_ptr<class POIInstance>&&);

    // symbol:
    // ?_unclusterDerelictPOIs@VillageManager@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@@Z
    MCAPI void _unclusterDerelictPOIs(std::vector<std::weak_ptr<class POIInstance>>&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?MAX_POI_QUERIES@VillageManager@@0_KB
    MCAPI static uint64 const MAX_POI_QUERIES;

    // symbol: ?MAX_QUERY_SCAN_ITERATIONS@VillageManager@@0HB
    MCAPI static int const MAX_QUERY_SCAN_ITERATIONS;

    // symbol: ?VILLAGE_HERO_EFFECT_DURATION@VillageManager@@0HB
    MCAPI static int const VILLAGE_HERO_EFFECT_DURATION;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $MAX_POI_QUERIES() { return MAX_POI_QUERIES; }

    static auto& $MAX_QUERY_SCAN_ITERATIONS() { return MAX_QUERY_SCAN_ITERATIONS; }

    static auto& $VILLAGE_HERO_EFFECT_DURATION() { return VILLAGE_HERO_EFFECT_DURATION; }

    // NOLINTEND
};
