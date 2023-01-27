/**
 * @file  CommandUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

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
     * @hash   1704503842
     * @symbol  ?CMD_INPUT_UNICODE_TRANSLATE_MAP\@CommandUtils\@\@3V?$vector\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@D\@std\@\@V?$allocator\@U?$pair\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@D\@std\@\@\@2\@\@std\@\@B
     */
    MCAPI extern std::vector<struct std::pair<std::string, char>> const CMD_INPUT_UNICODE_TRANSLATE_MAP;
    /**
     * @hash   -897243974
     * @symbol  ?addItemInstanceComponents\@CommandUtils\@\@YA_NAEAVItemInstance\@\@AEBVValue\@Json\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool addItemInstanceComponents(class ItemInstance &, class Json::Value const &, std::string &);
    /**
     * @hash   -1512721798
     * @symbol  ?addtoCSVList\@CommandUtils\@\@YAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI void addtoCSVList(std::string &, std::string const &);
    /**
     * @hash   -184262433
     * @symbol  ?alterSpawnableEntities\@CommandUtils\@\@YAXAEAVLevelData\@\@AEBUActorDefinitionIdentifier\@\@AEAU3\@\@Z
     */
    MCAPI void alterSpawnableEntities(class LevelData &, struct ActorDefinitionIdentifier const &, struct ActorDefinitionIdentifier &);
    /**
     * @hash   1989025099
     * @symbol  ?broadcastPlayerSpawnedMobEvent\@CommandUtils\@\@YAXAEBVActor\@\@AEAV2\@\@Z
     */
    MCAPI void broadcastPlayerSpawnedMobEvent(class Actor const &, class Actor &);
    /**
     * @hash   1131247361
     * @symbol  ?canBeSummoned\@CommandUtils\@\@YA_NAEBUActorDefinitionIdentifier\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI bool canBeSummoned(struct ActorDefinitionIdentifier const &, class CommandOrigin const &);
    /**
     * @hash   1372612626
     * @symbol  ?clearBlockEntityContents\@CommandUtils\@\@YAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void clearBlockEntityContents(class BlockSource &, class BlockPos const &);
    /**
     * @hash   414783056
     * @symbol  ?clearBlockEntityLootTable\@CommandUtils\@\@YAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void clearBlockEntityLootTable(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -1560376747
     * @symbol  ?convertBlockEntityTag\@CommandUtils\@\@YAXAEAVCompoundTag\@\@AEBVBlockActor\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void convertBlockEntityTag(class CompoundTag &, class BlockActor const &, class BlockPos const &);
    /**
     * @hash   987287270
     * @symbol  ?createItemStack\@CommandUtils\@\@YA?AVItemStack\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HH\@Z
     */
    MCAPI class ItemStack createItemStack(std::string const &, int, int);
    /**
     * @hash   -1237136773
     * @symbol  ?createItemStacks\@CommandUtils\@\@YA?AV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@AEBVItemInstance\@\@HAEAH\@Z
     */
    MCAPI std::vector<class ItemStack> createItemStacks(class ItemInstance const &, int, int &);
    /**
     * @hash   1966811336
     * @symbol  ?createMapData\@CommandUtils\@\@YA_NAEAVActor\@\@AEAVItemInstance\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI bool createMapData(class Actor &, class ItemInstance &, class CommandOutput &);
    /**
     * @hash   -776386802
     * @symbol  ?displayLocalizableMessage\@CommandUtils\@\@YAX_NAEAVPlayer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI void displayLocalizableMessage(bool, class Player &, std::string const &, std::vector<std::string> const &);
    /**
     * @hash   782102186
     * @symbol  ?getActorName\@CommandUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI std::string getActorName(class Actor const &);
    /**
     * @hash   1160157313
     * @symbol  ?getFeetBlockPos\@CommandUtils\@\@YA?AVBlockPos\@\@PEBVActor\@\@\@Z
     */
    MCAPI class BlockPos getFeetBlockPos(class Actor const *);
    /**
     * @hash   186324815
     * @symbol  ?getFeetPos\@CommandUtils\@\@YA?AVVec3\@\@PEBVActor\@\@\@Z
     */
    MCAPI class Vec3 getFeetPos(class Actor const *);
    /**
     * @hash   -1943662187
     * @symbol  ?getInvalidCommandEntities\@CommandUtils\@\@YA?AV?$vector\@W4ActorType\@\@V?$allocator\@W4ActorType\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<enum class ActorType> getInvalidCommandEntities();
    /**
     * @hash   342773875
     * @symbol  ?getOriginPlayer\@CommandUtils\@\@YAPEBVPlayer\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI class Player const * getOriginPlayer(class CommandOrigin const &);
    /**
     * @hash   1551831208
     * @symbol  ?getTelemetryErrorList\@CommandUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI std::string getTelemetryErrorList(class CommandOutput const &);
    /**
     * @hash   1781390685
     * @symbol  ?isActiveTickingChunk\@CommandUtils\@\@YA_NUTick\@\@0\@Z
     */
    MCAPI bool isActiveTickingChunk(struct Tick, struct Tick);
    /**
     * @hash   -1350205928
     * @symbol  ?isFunctionValid\@CommandUtils\@\@YA_NAEAVCommandOutput\@\@AEAVFunctionEntry\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isFunctionValid(class CommandOutput &, class FunctionEntry &, std::string const &);
    /**
     * @hash   -1410209734
     * @symbol  ?isPlayerSpawnedMob\@CommandUtils\@\@YA_NAEBVActor\@\@0\@Z
     */
    MCAPI bool isPlayerSpawnedMob(class Actor const &, class Actor const &);
    /**
     * @hash   -1313891437
     * @symbol  ?isValidCommandEntity\@CommandUtils\@\@YA_NAEBV?$vector\@W4ActorType\@\@V?$allocator\@W4ActorType\@\@\@std\@\@\@std\@\@W4ActorType\@\@\@Z
     */
    MCAPI bool isValidCommandEntity(std::vector<enum class ActorType> const &, enum class ActorType);
    /**
     * @hash   -247246873
     * @symbol  ?nameEntity\@CommandUtils\@\@YAXAEAVActor\@\@_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void nameEntity(class Actor &, bool, std::string const &);
    /**
     * @hash   -854648210
     * @symbol  ?setInitEvent\@CommandUtils\@\@YAXAEAUActorDefinitionIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setInitEvent(struct ActorDefinitionIdentifier &, std::string const &);
    /**
     * @hash   2086018627
     * @symbol  ?spawnEntityAt\@CommandUtils\@\@YAPEAVActor\@\@AEAVBlockSource\@\@AEBVVec3\@\@AEBUActorDefinitionIdentifier\@\@AEAUActorUniqueID\@\@PEAV2\@\@Z
     */
    MCAPI class Actor * spawnEntityAt(class BlockSource &, class Vec3 const &, struct ActorDefinitionIdentifier const &, struct ActorUniqueID &, class Actor *);
    /**
     * @hash   2129315323
     * @symbol  ?toJsonResult\@CommandUtils\@\@YA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI std::string toJsonResult(std::string const &, class Json::Value const &);
    /**
     * @hash   -2113260217
     * @symbol  ?validatePath\@CommandUtils\@\@YA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVCommandOutput\@\@AEBVCommandFilePath\@\@\@Z
     */
    MCAPI std::string const validatePath(class CommandOutput &, class CommandFilePath const &);

};