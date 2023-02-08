/**
 * @file  LegacyStructureTemplate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   611931850
     * @vftbl  0
     * @symbol  ?getMarkers\@LegacyStructureTemplate\@\@UEBA?AV?$unordered_map\@VBlockPos\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VBlockPos\@\@\@3\@U?$equal_to\@VBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@\@Z
     */
    virtual class std::unordered_map<class BlockPos, std::string, struct std::hash<class BlockPos>, struct std::equal_to<class BlockPos>, class std::allocator<struct std::pair<class BlockPos const, std::string>>> getMarkers(class BlockPos const &, class LegacyStructureSettings &) const;
    /**
     * @hash   1174770960
     * @vftbl  1
     * @symbol  ?placeInWorld\@LegacyStructureTemplate\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@AEAVRandom\@\@\@Z
     */
    virtual void placeInWorld(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &) const;
    /**
     * @hash   -231676288
     * @symbol  ??0LegacyStructureTemplate\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureTemplate();
    /**
     * @hash   -1338496462
     * @symbol  ?calculateConnectedPosition\@LegacyStructureTemplate\@\@QEBA?AVBlockPos\@\@AEBVLegacyStructureSettings\@\@AEBV2\@01\@Z
     */
    MCAPI class BlockPos calculateConnectedPosition(class LegacyStructureSettings const &, class BlockPos const &, class LegacyStructureSettings const &, class BlockPos const &) const;
    /**
     * @hash   -1036129260
     * @symbol  ?getJigsawMarkers\@LegacyStructureTemplate\@\@QEBA?AV?$vector\@VJigsawStructureBlockInfo\@\@V?$allocator\@VJigsawStructureBlockInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @hash   1644796013
     * @symbol  ?getSize\@LegacyStructureTemplate\@\@QEBA?AVBlockPos\@\@W4Rotation\@\@\@Z
     */
    MCAPI class BlockPos getSize(enum class Rotation) const;
    /**
     * @hash   493476552
     * @symbol  ?load\@LegacyStructureTemplate\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const &);
    /**
     * @hash   -245225647
     * @symbol  ?placeInWorldChunk\@LegacyStructureTemplate\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void placeInWorldChunk(class BlockSource &, class BlockPos const &, class LegacyStructureSettings &, class Random &);
    /**
     * @hash   1419271133
     * @symbol  ?AUTHOR_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AUTHOR_TAG;
    /**
     * @hash   137966045
     * @symbol  ?BLOCKS_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCKS_TAG;
    /**
     * @hash   -1859964069
     * @symbol  ?BLOCK_TAG_NBT\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_TAG_NBT;
    /**
     * @hash   1528638619
     * @symbol  ?BLOCK_TAG_POS\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_TAG_POS;
    /**
     * @hash   895835227
     * @symbol  ?BLOCK_TAG_STATE\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_TAG_STATE;
    /**
     * @hash   -2032024939
     * @symbol  ?CHUNK_SIZE\@LegacyStructureTemplate\@\@2HB
     */
    MCAPI static int const CHUNK_SIZE;
    /**
     * @hash   -1916750915
     * @symbol  ?ENTITIES_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITIES_TAG;
    /**
     * @hash   933508507
     * @symbol  ?ENTITY_TAG_BLOCKPOS\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITY_TAG_BLOCKPOS;
    /**
     * @hash   -1359491971
     * @symbol  ?ENTITY_TAG_NBT\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITY_TAG_NBT;
    /**
     * @hash   2029110717
     * @symbol  ?ENTITY_TAG_POS\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITY_TAG_POS;
    /**
     * @hash   -921828675
     * @symbol  ?MINECRAFT_PREFIX\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MINECRAFT_PREFIX;
    /**
     * @hash   1151516667
     * @symbol  ?PALETTE_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PALETTE_TAG;
    /**
     * @hash   -700234947
     * @symbol  ?SIZE_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SIZE_TAG;
    /**
     * @hash   -780827611
     * @symbol  ?STRUCTURE_VERSION\@LegacyStructureTemplate\@\@2HB
     */
    MCAPI static int const STRUCTURE_VERSION;
    /**
     * @hash   1945990971
     * @symbol  ?VERSION_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const VERSION_TAG;
    /**
     * @hash   -1840353682
     * @symbol  ?_mapPropertyToExtraBlock\@LegacyStructureTemplate\@\@SAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI static class Block const * _mapPropertyToExtraBlock(std::string const &, std::string const &);
    /**
     * @hash   -1924259082
     * @symbol  ?_mapToBlock\@LegacyStructureTemplate\@\@SAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Block const * _mapToBlock(std::string const &);
    /**
     * @hash   1556917719
     * @symbol  ?_mapToData\@LegacyStructureTemplate\@\@SAAEBVBlock\@\@AEBV2\@AEBVLegacyStructureSettings\@\@\@Z
     */
    MCAPI static class Block const & _mapToData(class Block const &, class LegacyStructureSettings const &);
    /**
     * @hash   -2033691916
     * @symbol  ?_mapToProperty\@LegacyStructureTemplate\@\@SAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBV2\@\@Z
     */
    MCAPI static class Block const * _mapToProperty(std::string const &, std::string const &, class Block const &);
    /**
     * @hash   -680207967
     * @symbol  ?defaultSettings\@LegacyStructureTemplate\@\@2VLegacyStructureSettings\@\@B
     */
    MCAPI static class LegacyStructureSettings const defaultSettings;
    /**
     * @hash   131513226
     * @symbol  ?getZeroPositionWithTransform\@LegacyStructureTemplate\@\@SA?AVBlockPos\@\@AEBV2\@W4Mirror\@\@W4Rotation\@\@HH\@Z
     */
    MCAPI static class BlockPos getZeroPositionWithTransform(class BlockPos const &, enum class Mirror, enum class Rotation, int, int);
    /**
     * @hash   -467454752
     * @symbol  ?transform\@LegacyStructureTemplate\@\@SA?AVBlockPos\@\@V2\@W4Mirror\@\@W4Rotation\@\@\@Z
     */
    MCAPI static class BlockPos transform(class BlockPos, enum class Mirror, enum class Rotation);

//private:
    /**
     * @hash   -269297683
     * @symbol  ?_mapPropertiesToTags\@LegacyStructureTemplate\@\@CAXAEAVCompoundTag\@\@AEBV2\@\@Z
     */
    MCAPI static void _mapPropertiesToTags(class CompoundTag &, class CompoundTag const &);
    /**
     * @hash   1976107656
     * @symbol  ?_mapPropertyToTag\@LegacyStructureTemplate\@\@CAXAEAVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static void _mapPropertyToTag(class CompoundTag &, std::string const &, std::string const &);
    /**
     * @hash   1245445627
     * @symbol  ?_mapTag\@LegacyStructureTemplate\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V23\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag> _mapTag(std::unique_ptr<class CompoundTag>, std::string const &);

private:

};