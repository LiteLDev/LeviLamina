/**
 * @file  MC/VillageManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VillageManager.
 *
 */
class VillageManager {

#define AFTER_EXTRA
// Add Member There
public:
enum class BedAvailabilityState;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VILLAGEMANAGER
public:
    class VillageManager& operator=(class VillageManager const &) = delete;
    VillageManager(class VillageManager const &) = delete;
    VillageManager() = delete;
#endif

public:
    /**
     * @hash   -124668880
     * @symbol ??0VillageManager@@QEAA@AEAVDimension@@@Z
     */
    MCAPI VillageManager(class Dimension &);
    /**
     * @hash   469601212
     * @symbol ?applyHeroOfTheVillageEffect@VillageManager@@QEAAXAEAVActor@@@Z
     */
    MCAPI void applyHeroOfTheVillageEffect(class Actor &);
    /**
     * @hash   -987260320
     * @symbol ?fetchClosestVillage@VillageManager@@QEBA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@HI@Z
     */
    MCAPI class std::weak_ptr<class Village> fetchClosestVillage(class BlockPos const &, int, unsigned int) const;
    /**
     * @hash   -1606908176
     * @symbol ?fetchClosestVillageMostSuitableForDweller@VillageManager@@QEBA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@HI@Z
     */
    MCAPI class std::weak_ptr<class Village> fetchClosestVillageMostSuitableForDweller(class BlockPos const &, int, unsigned int) const;
    /**
     * @hash   -1602562218
     * @symbol ?getClosestVillageWithRaid@VillageManager@@QEAA?AV?$weak_ptr@VVillage@@@std@@AEBVBlockPos@@@Z
     */
    MCAPI class std::weak_ptr<class Village> getClosestVillageWithRaid(class BlockPos const &);
    /**
     * @hash   1725199534
     * @symbol ?getPOI@VillageManager@@QEBA?AV?$weak_ptr@VPOIInstance@@@std@@AEBVBlockPos@@@Z
     */
    MCAPI class std::weak_ptr<class POIInstance> getPOI(class BlockPos const &) const;
    /**
     * @hash   1871121425
     * @symbol ?getPOIInitEventFromName@VillageManager@@QEBA?AVHashedString@@AEBV2@@Z
     */
    MCAPI class HashedString getPOIInitEventFromName(class HashedString const &) const;
    /**
     * @hash   1335758238
     * @symbol ?getVillageByID@VillageManager@@QEBA?AV?$weak_ptr@VVillage@@@std@@AEBVUUID@mce@@@Z
     */
    MCAPI class std::weak_ptr<class Village> getVillageByID(class mce::UUID const &) const;
    /**
     * @hash   -1319230808
     * @symbol ?hasPOI@VillageManager@@QEBA_NAEBVBlockPos@@W4POIType@@@Z
     */
    MCAPI bool hasPOI(class BlockPos const &, enum POIType) const;
    /**
     * @hash   250411829
     * @symbol ?insertPOI@VillageManager@@QEAAX$$QEAV?$shared_ptr@VPOIInstance@@@std@@@Z
     */
    MCAPI void insertPOI(class std::shared_ptr<class POIInstance> &&);
    /**
     * @hash   -1538714721
     * @symbol ?isRegisteredPOI@VillageManager@@QEBA_NAEBVBlock@@@Z
     */
    MCAPI bool isRegisteredPOI(class Block const &) const;
    /**
     * @hash   1719611648
     * @symbol ?isValidPOIType@VillageManager@@QEBA_NAEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI bool isValidPOIType(class BlockPos const &, class Block const &) const;
    /**
     * @hash   -1428244335
     * @symbol ?isWanderingTraderManagedByScheduler@VillageManager@@QEAA_NAEBVActor@@@Z
     */
    MCAPI bool isWanderingTraderManagedByScheduler(class Actor const &);
    /**
     * @hash   1419127763
     * @symbol ?loadAllVillages@VillageManager@@QEAAXXZ
     */
    MCAPI void loadAllVillages();
    /**
     * @symbol ?readGossipData@VillageManager@@QEBAXXZ
     */
    MCAPI void readGossipData() const;
    /**
     * @hash   519100493
     * @symbol ?removePOI@VillageManager@@QEAAXV?$weak_ptr@VPOIInstance@@@std@@@Z
     */
    MCAPI void removePOI(class std::weak_ptr<class POIInstance>);
    /**
     * @hash   654529123
     * @symbol ?saveAllVillages@VillageManager@@QEAAXXZ
     */
    MCAPI void saveAllVillages();
    /**
     * @hash   -1631981248
     * @symbol ?submitFindPOIQuery@VillageManager@@QEAAXAEBUActorUniqueID@@@Z
     */
    MCAPI void submitFindPOIQuery(struct ActorUniqueID const &);
    /**
     * @hash   -698837370
     * @symbol ?tick@VillageManager@@QEAAXAEBUTick@@@Z
     */
    MCAPI void tick(struct Tick const &);
    /**
     * @hash   -1694907826
     * @symbol ?tickVillages@VillageManager@@QEAAXAEBUTick@@AEBVVec3@@AEAVBlockSource@@@Z
     */
    MCAPI void tickVillages(struct Tick const &, class Vec3 const &, class BlockSource &);
    /**
     * @hash   -2005114267
     * @symbol ?tryCreatePOI@VillageManager@@QEAA?AV?$shared_ptr@VPOIInstance@@@std@@AEBVBlockPos@@AEBVBlock@@@Z
     */
    MCAPI class std::shared_ptr<class POIInstance> tryCreatePOI(class BlockPos const &, class Block const &);
    /**
     * @hash   430373883
     * @symbol ??1VillageManager@@QEAA@XZ
     */
    MCAPI ~VillageManager();
    /**
     * @hash   97727985
     * @symbol ?MAX_POI_TOLERANCE_DIST@VillageManager@@2HB
     */
    MCAPI static int const MAX_POI_TOLERANCE_DIST;

//private:
    /**
     * @hash   -411961262
     * @symbol ?_addPOIWithinRadius@VillageManager@@AEAAXAEBVBlockPos@@AEAVBlockSource@@@Z
     */
    MCAPI void _addPOIWithinRadius(class BlockPos const &, class BlockSource &);
    /**
     * @hash   -960744725
     * @symbol ?_assignPOIOnly@VillageManager@@AEAAX$$QEAV?$shared_ptr@VPOIInstance@@@std@@@Z
     */
    MCAPI void _assignPOIOnly(class std::shared_ptr<class POIInstance> &&);
    /**
     * @hash   1554749291
     * @symbol ?_calculateDistanceFromPositionToEdgeOfVillage@VillageManager@@AEBAMAEBVBlockPos@@AEBVVillage@@@Z
     */
    MCAPI float _calculateDistanceFromPositionToEdgeOfVillage(class BlockPos const &, class Village const &) const;
    /**
     * @hash   1517188396
     * @symbol ?_createOrGetVillage@VillageManager@@AEAA?AV?$shared_ptr@VVillage@@@std@@AEBVUUID@mce@@AEBVBlockPos@@@Z
     */
    MCAPI class std::shared_ptr<class Village> _createOrGetVillage(class mce::UUID const &, class BlockPos const &);
    /**
     * @hash   1203723404
     * @symbol ?_getVillageWithBedsAvailableMap@VillageManager@@AEBA?AV?$unordered_map@PEBVVillage@@W4BedAvailabilityState@VillageManager@@U?$hash@PEBVVillage@@@std@@U?$equal_to@PEBVVillage@@@5@V?$allocator@U?$pair@QEBVVillage@@W4BedAvailabilityState@VillageManager@@@std@@@5@@std@@XZ
     */
    MCAPI class std::unordered_map<class Village const *, enum VillageManager::BedAvailabilityState, struct std::hash<class Village const *>, struct std::equal_to<class Village const *>, class std::allocator<struct std::pair<class Village const *const, enum VillageManager::BedAvailabilityState>>> _getVillageWithBedsAvailableMap() const;
    /**
     * @hash   374505024
     * @symbol ?_loadPOIBlueprints@VillageManager@@AEAAXXZ
     */
    MCAPI void _loadPOIBlueprints();
    /**
     * @hash   501602332
     * @symbol ?_removeEligibleVillages@VillageManager@@AEAAXXZ
     */
    MCAPI void _removeEligibleVillages();
    /**
     * @hash   2140097701
     * @symbol ?_tryAssignPOIOrCreateVillage@VillageManager@@AEAAX$$QEAV?$shared_ptr@VPOIInstance@@@std@@@Z
     */
    MCAPI void _tryAssignPOIOrCreateVillage(class std::shared_ptr<class POIInstance> &&);
    /**
     * @hash   -859728030
     * @symbol ?_unclusterDerelictPOIs@VillageManager@@AEAAXAEAV?$vector@V?$weak_ptr@VPOIInstance@@@std@@V?$allocator@V?$weak_ptr@VPOIInstance@@@std@@@2@@std@@@Z
     */
    MCAPI void _unclusterDerelictPOIs(std::vector<class std::weak_ptr<class POIInstance>> &);

private:
    /**
     * @hash   1718708758
     * @symbol ?MAX_POI_QUERIES@VillageManager@@0_KB
     */
    MCAPI static unsigned __int64 const MAX_POI_QUERIES;
    /**
     * @hash   108970773
     * @symbol ?MAX_QUERY_SCAN_ITERATIONS@VillageManager@@0HB
     */
    MCAPI static int const MAX_QUERY_SCAN_ITERATIONS;
    /**
     * @hash   975026243
     * @symbol ?VILLAGE_HERO_EFFECT_DURATION@VillageManager@@0HB
     */
    MCAPI static int const VILLAGE_HERO_EFFECT_DURATION;

};