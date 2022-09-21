/**
 * @file  MC/CommandUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CommandUtils.
 *
 */
namespace CommandUtils {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   600683866
     * @symbol ?CMD_INPUT_UNICODE_TRANSLATE_MAP@CommandUtils@@3V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@std@@@2@@std@@B
     */
    MCAPI extern std::vector<struct std::pair<std::string, char>> const CMD_INPUT_UNICODE_TRANSLATE_MAP;
    /**
     * @hash   -182475238
     * @symbol ?addItemInstanceComponents@CommandUtils@@YA_NAEAVItemInstance@@AEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool addItemInstanceComponents(class ItemInstance &, class Json::Value const &, std::string &);
    /**
     * @hash   -797953062
     * @symbol ?addtoCSVList@CommandUtils@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     */
    MCAPI void addtoCSVList(std::string &, std::string const &);
    /**
     * @hash   530506303
     * @symbol ?alterSpawnableEntities@CommandUtils@@YAXAEAVLevelData@@AEBUActorDefinitionIdentifier@@AEAU3@@Z
     */
    MCAPI void alterSpawnableEntities(class LevelData &, struct ActorDefinitionIdentifier const &, struct ActorDefinitionIdentifier &);
    /**
     * @hash   -1591158085
     * @symbol ?broadcastPlayerSpawnedMobEvent@CommandUtils@@YAXAEBVActor@@AEAV2@@Z
     */
    MCAPI void broadcastPlayerSpawnedMobEvent(class Actor const &, class Actor &);
    /**
     * @hash   1846077601
     * @symbol ?canBeSummoned@CommandUtils@@YA_NAEBUActorDefinitionIdentifier@@AEBVCommandOrigin@@@Z
     */
    MCAPI bool canBeSummoned(struct ActorDefinitionIdentifier const &, class CommandOrigin const &);
    /**
     * @hash   2087442866
     * @symbol ?clearBlockEntityContents@CommandUtils@@YAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void clearBlockEntityContents(class BlockSource &, class BlockPos const &);
    /**
     * @hash   1129597920
     * @symbol ?clearBlockEntityLootTable@CommandUtils@@YAXAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI void clearBlockEntityLootTable(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -845561883
     * @symbol ?convertBlockEntityTag@CommandUtils@@YAXAEAVCompoundTag@@AEBVBlockActor@@AEBVBlockPos@@@Z
     */
    MCAPI void convertBlockEntityTag(class CompoundTag &, class BlockActor const &, class BlockPos const &);
    /**
     * @hash   1702132886
     * @symbol ?createItemStack@CommandUtils@@YA?AVItemStack@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
     */
    MCAPI class ItemStack createItemStack(std::string const &, int, int);
    /**
     * @hash   -522321909
     * @symbol ?createItemStacks@CommandUtils@@YA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemInstance@@HAEAH@Z
     */
    MCAPI std::vector<class ItemStack> createItemStacks(class ItemInstance const &, int, int &);
    /**
     * @hash   -1613356472
     * @symbol ?createMapData@CommandUtils@@YA_NAEAVActor@@AEAVItemInstance@@AEAVCommandOutput@@@Z
     */
    MCAPI bool createMapData(class Actor &, class ItemInstance &, class CommandOutput &);
    /**
     * @hash   -61787202
     * @symbol ?displayLocalizableMessage@CommandUtils@@YAX_NAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     */
    MCAPI void displayLocalizableMessage(bool, class Player &, std::string const &, std::vector<std::string> const &);
    /**
     * @hash   1496701786
     * @symbol ?getActorName@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
     */
    MCAPI std::string getActorName(class Actor const &);
    /**
     * @hash   1874756913
     * @symbol ?getFeetBlockPos@CommandUtils@@YA?AVBlockPos@@PEBVActor@@@Z
     */
    MCAPI class BlockPos getFeetBlockPos(class Actor const *);
    /**
     * @hash   900924415
     * @symbol ?getFeetPos@CommandUtils@@YA?AVVec3@@PEBVActor@@@Z
     */
    MCAPI class Vec3 getFeetPos(class Actor const *);
    /**
     * @hash   -1229062587
     * @symbol ?getInvalidCommandEntities@CommandUtils@@YA?AV?$vector@W4ActorType@@V?$allocator@W4ActorType@@@std@@@std@@XZ
     */
    MCAPI std::vector<enum ActorType> getInvalidCommandEntities();
    /**
     * @hash   1057373475
     * @symbol ?getOriginPlayer@CommandUtils@@YAPEBVPlayer@@AEBVCommandOrigin@@@Z
     */
    MCAPI class Player const * getOriginPlayer(class CommandOrigin const &);
    /**
     * @hash   -2028551864
     * @symbol ?getTelemetryErrorList@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandOutput@@@Z
     */
    MCAPI std::string getTelemetryErrorList(class CommandOutput const &);
    /**
     * @hash   -1798992387
     * @symbol ?isActiveTickingChunk@CommandUtils@@YA_NUTick@@0@Z
     */
    MCAPI bool isActiveTickingChunk(struct Tick, struct Tick);
    /**
     * @hash   -635621704
     * @symbol ?isFunctionValid@CommandUtils@@YA_NAEAVCommandOutput@@AEAVFunctionEntry@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool isFunctionValid(class CommandOutput &, class FunctionEntry &, std::string const &);
    /**
     * @hash   -695717766
     * @symbol ?isPlayerSpawnedMob@CommandUtils@@YA_NAEBVActor@@0@Z
     */
    MCAPI bool isPlayerSpawnedMob(class Actor const &, class Actor const &);
    /**
     * @hash   -599414845
     * @symbol ?isValidCommandEntity@CommandUtils@@YA_NAEBV?$vector@W4ActorType@@V?$allocator@W4ActorType@@@std@@@std@@W4ActorType@@@Z
     */
    MCAPI bool isValidCommandEntity(std::vector<enum ActorType> const &, enum ActorType);
    /**
     * @hash   467229719
     * @symbol ?nameEntity@CommandUtils@@YAXAEAVActor@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void nameEntity(class Actor &, bool, std::string const &);
    /**
     * @hash   -140171618
     * @symbol ?setInitEvent@CommandUtils@@YAXAEAUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setInitEvent(struct ActorDefinitionIdentifier &, std::string const &);
    /**
     * @hash   -1494472077
     * @symbol ?spawnEntityAt@CommandUtils@@YAPEAVActor@@AEAVBlockSource@@AEBVVec3@@AEBUActorDefinitionIdentifier@@AEAUActorUniqueID@@PEAV2@@Z
     */
    MCAPI class Actor * spawnEntityAt(class BlockSource &, class Vec3 const &, struct ActorDefinitionIdentifier const &, struct ActorUniqueID &, class Actor *);
    /**
     * @hash   -1451175381
     * @symbol ?toJsonResult@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBVValue@Json@@@Z
     */
    MCAPI std::string toJsonResult(std::string const &, class Json::Value const &);
    /**
     * @hash   -1398783625
     * @symbol ?validatePath@CommandUtils@@YA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCommandOutput@@AEBVCommandFilePath@@@Z
     */
    MCAPI std::string const validatePath(class CommandOutput &, class CommandFilePath const &);

};