/**
 * @file  MC/LegacyStructureTemplate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyStructureTemplate.
 *
 */
class LegacyStructureTemplate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURETEMPLATE
public:
    class LegacyStructureTemplate& operator=(class LegacyStructureTemplate const &) = delete;
    LegacyStructureTemplate(class LegacyStructureTemplate const &) = delete;
#endif

public:
    /**
     * @hash   -252368486
     * @vftbl  0
     * @symbol ?getMarkers@LegacyStructureTemplate@@UEBA?AV?$unordered_map@VBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@AEBVBlockPos@@AEAVLegacyStructureSettings@@@Z
     */
    virtual class std::unordered_map<class BlockPos, std::string, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, std::string>>> getMarkers(class BlockPos const &, class LegacyStructureSettings &) const;
    /**
     * @hash   310578256
     * @vftbl  1
     * @symbol ?placeInWorld@LegacyStructureTemplate@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
     */
    virtual void placeInWorld(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &) const;
    /**
     * @hash   -1095730608
     * @symbol ??0LegacyStructureTemplate@@QEAA@XZ
     */
    MCAPI LegacyStructureTemplate();
    /**
     * @hash   2092339634
     * @symbol ?calculateConnectedPosition@LegacyStructureTemplate@@QEBA?AVBlockPos@@AEBVLegacyStructureSettings@@AEBV2@01@Z
     */
    MCAPI class BlockPos calculateConnectedPosition(class LegacyStructureSettings const &, class BlockPos const &, class LegacyStructureSettings const &, class BlockPos const &) const;
    /**
     * @hash   -1900321964
     * @symbol ?getJigsawMarkers@LegacyStructureTemplate@@QEBA?AV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@std@@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @hash   780495677
     * @symbol ?getSize@LegacyStructureTemplate@@QEBA?AVBlockPos@@W4Rotation@@@Z
     */
    MCAPI class BlockPos getSize(enum Rotation) const;
    /**
     * @hash   -370823784
     * @symbol ?load@LegacyStructureTemplate@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   -1109664367
     * @symbol ?placeInWorldChunk@LegacyStructureTemplate@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEAVLegacyStructureSettings@@AEAVRandom@@@Z
     */
    MCAPI void placeInWorldChunk(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &);
    /**
     * @hash   -516636459
     * @symbol ?AUTHOR_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const AUTHOR_TAG;
    /**
     * @hash   -1797941547
     * @symbol ?BLOCKS_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BLOCKS_TAG;
    /**
     * @hash   499095635
     * @symbol ?BLOCK_TAG_NBT@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BLOCK_TAG_NBT;
    /**
     * @hash   -407268973
     * @symbol ?BLOCK_TAG_POS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BLOCK_TAG_POS;
    /**
     * @hash   -1040072365
     * @symbol ?BLOCK_TAG_STATE@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const BLOCK_TAG_STATE;
    /**
     * @hash   1220537969
     * @symbol ?CHUNK_SIZE@LegacyStructureTemplate@@2HB
     */
    MCAPI static int const CHUNK_SIZE;
    /**
     * @hash   442308789
     * @symbol ?ENTITIES_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ENTITIES_TAG;
    /**
     * @hash   -1002399085
     * @symbol ?ENTITY_TAG_BLOCKPOS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ENTITY_TAG_BLOCKPOS;
    /**
     * @hash   999567733
     * @symbol ?ENTITY_TAG_NBT@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ENTITY_TAG_NBT;
    /**
     * @hash   93203125
     * @symbol ?ENTITY_TAG_POS@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const ENTITY_TAG_POS;
    /**
     * @hash   1437231029
     * @symbol ?MINECRAFT_PREFIX@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const MINECRAFT_PREFIX;
    /**
     * @hash   -784390925
     * @symbol ?PALETTE_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const PALETTE_TAG;
    /**
     * @hash   1658824757
     * @symbol ?SIZE_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const SIZE_TAG;
    /**
     * @hash   -1823231999
     * @symbol ?STRUCTURE_VERSION@LegacyStructureTemplate@@2HB
     */
    MCAPI static int const STRUCTURE_VERSION;
    /**
     * @hash   10083379
     * @symbol ?VERSION_TAG@LegacyStructureTemplate@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const VERSION_TAG;
    /**
     * @hash   1764185086
     * @symbol ?_mapPropertyToExtraBlock@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI static class Block const * _mapPropertyToExtraBlock(std::string const &, std::string const &);
    /**
     * @hash   1678803590
     * @symbol ?_mapToBlock@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class Block const * _mapToBlock(std::string const &);
    /**
     * @hash   866596823
     * @symbol ?_mapToData@LegacyStructureTemplate@@SAAEBVBlock@@AEBV2@AEBVLegacyStructureSettings@@@Z
     */
    MCAPI static class Block const & _mapToData(class Block const &, class LegacyStructureSettings const &);
    /**
     * @hash   1570723844
     * @symbol ?_mapToProperty@LegacyStructureTemplate@@SAPEBVBlock@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBV2@@Z
     */
    MCAPI static class Block const * _mapToProperty(std::string const &, std::string const &, class Block const &);
    /**
     * @hash   -1578458511
     * @symbol ?defaultSettings@LegacyStructureTemplate@@2VLegacyStructureSettings@@B
     */
    MCAPI static class LegacyStructureSettings const defaultSettings;
    /**
     * @hash   -732787110
     * @symbol ?getZeroPositionWithTransform@LegacyStructureTemplate@@SA?AVBlockPos@@AEBV2@W4Mirror@@W4Rotation@@HH@Z
     */
    MCAPI static class BlockPos getZeroPositionWithTransform(class BlockPos const &, enum Mirror, enum Rotation, int, int);
    /**
     * @hash   -1331908848
     * @symbol ?transform@LegacyStructureTemplate@@SA?AVBlockPos@@V2@W4Mirror@@W4Rotation@@@Z
     */
    MCAPI static class BlockPos transform(class BlockPos, enum Mirror, enum Rotation);

//private:
    /**
     * @hash   -959726211
     * @symbol ?_mapPropertiesToTags@LegacyStructureTemplate@@CAXAEAVCompoundTag@@AEBV2@@Z
     */
    MCAPI static void _mapPropertiesToTags(class CompoundTag &, class CompoundTag const &);
    /**
     * @hash   1285679128
     * @symbol ?_mapPropertyToTag@LegacyStructureTemplate@@CAXAEAVCompoundTag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCAPI static void _mapPropertyToTag(class CompoundTag &, std::string const &, std::string const &);
    /**
     * @hash   555032475
     * @symbol ?_mapTag@LegacyStructureTemplate@@CA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V23@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _mapTag(std::unique_ptr<class CompoundTag>, std::string const &);

private:

};