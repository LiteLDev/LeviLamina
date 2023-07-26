#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class VillageManager {
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
        DwellerTestVillageInfo& operator=(DwellerTestVillageInfo const&) = delete;
        DwellerTestVillageInfo(DwellerTestVillageInfo const&)            = delete;
        DwellerTestVillageInfo()                                         = delete;

    public:
        /**
         * @symbol ??1DwellerTestVillageInfo\@VillageManager\@\@QEAA\@XZ
         */
        MCAPI ~DwellerTestVillageInfo(); // NOLINT
    };

    class VillageInfo {

    public:
        // prevent constructor by default
        VillageInfo& operator=(VillageInfo const&) = delete;
        VillageInfo(VillageInfo const&)            = delete;
        VillageInfo()                              = delete;

    public:
        /**
         * @symbol ??1VillageInfo\@VillageManager\@\@QEAA\@XZ
         */
        MCAPI ~VillageInfo(); // NOLINT
    };

public:
    // prevent constructor by default
    VillageManager& operator=(VillageManager const&) = delete;
    VillageManager(VillageManager const&)            = delete;
    VillageManager()                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?fetchClosestVillage\@VillageManager\@\@UEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVBlockPos\@\@HI\@Z
     */
    virtual class std::weak_ptr<class Village>
    fetchClosestVillage(class BlockPos const&, int, unsigned int) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getVillageByID\@VillageManager\@\@UEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVUUID\@mce\@\@\@Z
     */
    virtual class std::weak_ptr<class Village> getVillageByID(class mce::UUID const&) const; // NOLINT
    /**
     * @symbol ??0VillageManager\@\@QEAA\@AEAVDimension\@\@\@Z
     */
    MCAPI VillageManager(class Dimension&); // NOLINT
    /**
     * @symbol
     * ?fetchClosestVillageMostSuitableForDweller\@VillageManager\@\@QEBA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVBlockPos\@\@HI\@Z
     */
    MCAPI class std::weak_ptr<class Village>
    fetchClosestVillageMostSuitableForDweller(class BlockPos const&, int, unsigned int) const; // NOLINT
    /**
     * @symbol ?getClosestVillageWithRaid\@VillageManager\@\@QEAA?AV?$weak_ptr\@VVillage\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getPOI\@VillageManager\@\@QEBA?AV?$weak_ptr\@VPOIInstance\@\@\@std\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> getPOI(class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?getPOIInitEventFromName\@VillageManager\@\@QEBA?AVHashedString\@\@AEBV2\@\@Z
     */
    MCAPI class HashedString getPOIInitEventFromName(class HashedString const&) const; // NOLINT
    /**
     * @symbol ?initializeWithLevelStorageManager\@VillageManager\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void initializeWithLevelStorageManager(class LevelStorageManager&); // NOLINT
    /**
     * @symbol ?insertPOI\@VillageManager\@\@QEAAX$$QEAV?$shared_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void insertPOI(class std::shared_ptr<class POIInstance>&&); // NOLINT
    /**
     * @symbol ?isValidPOIType\@VillageManager\@\@QEBA_NAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI bool isValidPOIType(class BlockPos const&, class Block const&) const; // NOLINT
    /**
     * @symbol ?isWanderingTraderManagedByScheduler\@VillageManager\@\@QEAA_NAEBVActor\@\@\@Z
     */
    MCAPI bool isWanderingTraderManagedByScheduler(class Actor const&); // NOLINT
    /**
     * @symbol ?loadAllVillages\@VillageManager\@\@QEAAXXZ
     */
    MCAPI void loadAllVillages(); // NOLINT
    /**
     * @symbol ?removePOI\@VillageManager\@\@QEAAXV?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void removePOI(class std::weak_ptr<class POIInstance>); // NOLINT
    /**
     * @symbol ?submitFindPOIQuery\@VillageManager\@\@QEAAXAEBUActorUniqueID\@\@\@Z
     */
    MCAPI void submitFindPOIQuery(struct ActorUniqueID const&); // NOLINT
    /**
     * @symbol ?tick\@VillageManager\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void tick(struct Tick const&); // NOLINT
    /**
     * @symbol ?tickVillages\@VillageManager\@\@QEAAXAEBUTick\@\@AEBVVec3\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void tickVillages(struct Tick const&, class Vec3 const&, class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?tryCreatePOI\@VillageManager\@\@QEAA?AV?$shared_ptr\@VPOIInstance\@\@\@std\@\@AEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    MCAPI class std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @symbol ?MAX_POI_TOLERANCE_DIST\@VillageManager\@\@2HB
     */
    MCAPI static int const MAX_POI_TOLERANCE_DIST; // NOLINT

    // private:
    /**
     * @symbol ?_addPOIWithinRadius\@VillageManager\@\@AEAAXAEBVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void _addPOIWithinRadius(class BlockPos const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?_assignPOIOnly\@VillageManager\@\@AEAAX$$QEAV?$shared_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void _assignPOIOnly(class std::shared_ptr<class POIInstance>&&); // NOLINT
    /**
     * @symbol ?_calculateDistanceFromPositionToEdgeOfVillage\@VillageManager\@\@AEBAMAEBVBlockPos\@\@AEBVVillage\@\@\@Z
     */
    MCAPI float
    _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const&, class Village const&) const; // NOLINT
    /**
     * @symbol
     * ?_createOrGetVillage\@VillageManager\@\@AEAA?AV?$shared_ptr\@VVillage\@\@\@std\@\@AEBVUUID\@mce\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI class std::shared_ptr<class Village>
    _createOrGetVillage(class mce::UUID const&, class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?_getVillageWithBedsAvailableMap\@VillageManager\@\@AEBA?AV?$unordered_map\@PEBVVillage\@\@W4BedAvailabilityState\@VillageManager\@\@U?$hash\@PEBVVillage\@\@\@std\@\@U?$equal_to\@PEBVVillage\@\@\@5\@V?$allocator\@U?$pair\@QEBVVillage\@\@W4BedAvailabilityState\@VillageManager\@\@\@std\@\@\@5\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        class Village const*,
        enum class VillageManager::BedAvailabilityState,
        struct std::hash<class Village const*>,
        struct std::equal_to<class Village const*>,
        class std::allocator<
            struct std::pair<class Village const* const, enum class VillageManager::BedAvailabilityState>>>
    _getVillageWithBedsAvailableMap() const; // NOLINT
    /**
     * @symbol ?_loadPOIBlueprints\@VillageManager\@\@AEAAXXZ
     */
    MCAPI void _loadPOIBlueprints(); // NOLINT
    /**
     * @symbol ?_removeVillage\@VillageManager\@\@AEAAXAEAVVillage\@\@\@Z
     */
    MCAPI void _removeVillage(class Village&); // NOLINT
    /**
     * @symbol ?_saveAllVillages\@VillageManager\@\@AEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _saveAllVillages(class LevelStorage&); // NOLINT
    /**
     * @symbol ?_tryAssignPOIOrCreateVillage\@VillageManager\@\@AEAAX$$QEAV?$shared_ptr\@VPOIInstance\@\@\@std\@\@\@Z
     */
    MCAPI void _tryAssignPOIOrCreateVillage(class std::shared_ptr<class POIInstance>&&); // NOLINT
    /**
     * @symbol
     * ?_unclusterDerelictPOIs\@VillageManager\@\@AEAAXAEAV?$vector\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@V?$allocator\@V?$weak_ptr\@VPOIInstance\@\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    MCAPI void _unclusterDerelictPOIs(std::vector<class std::weak_ptr<class POIInstance>>&); // NOLINT

private:
    /**
     * @symbol ?MAX_POI_QUERIES\@VillageManager\@\@0_KB
     */
    MCAPI static unsigned __int64 const MAX_POI_QUERIES; // NOLINT
    /**
     * @symbol ?MAX_QUERY_SCAN_ITERATIONS\@VillageManager\@\@0HB
     */
    MCAPI static int const MAX_QUERY_SCAN_ITERATIONS; // NOLINT
    /**
     * @symbol ?VILLAGE_HERO_EFFECT_DURATION\@VillageManager\@\@0HB
     */
    MCAPI static int const VILLAGE_HERO_EFFECT_DURATION; // NOLINT
};
