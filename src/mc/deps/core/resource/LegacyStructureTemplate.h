#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureTemplate {

public:
    // prevent constructor by default
    LegacyStructureTemplate& operator=(LegacyStructureTemplate const&) = delete;
    LegacyStructureTemplate(LegacyStructureTemplate const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol
     * ?getMarkers\@LegacyStructureTemplate\@\@UEBA?AV?$unordered_map\@VBlockPos\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@U?$hash\@VBlockPos\@\@\@3\@U?$equal_to\@VBlockPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVBlockPos\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@\@Z
     */
    virtual class std::unordered_map<
        class BlockPos,
        std::string,
        struct std::hash<class BlockPos>,
        struct std::equal_to<class BlockPos>,
        class std::allocator<struct std::pair<class BlockPos const, std::string>>>
    getMarkers(class BlockPos const&, class LegacyStructureSettings&) const; // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?placeInWorld\@LegacyStructureTemplate\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@AEAVRandom\@\@\@Z
     */
    virtual void placeInWorld(class BlockSource&, class BlockPos const&, class LegacyStructureSettings&, class Random&)
        const; // NOLINT
    /**
     * @symbol ??0LegacyStructureTemplate\@\@QEAA\@XZ
     */
    MCAPI LegacyStructureTemplate(); // NOLINT
    /**
     * @symbol
     * ?calculateConnectedPosition\@LegacyStructureTemplate\@\@QEBA?AVBlockPos\@\@AEBVLegacyStructureSettings\@\@AEBV2\@01\@Z
     */
    MCAPI class BlockPos
    calculateConnectedPosition(class LegacyStructureSettings const&, class BlockPos const&, class LegacyStructureSettings const&, class BlockPos const&)
        const; // NOLINT
    /**
     * @symbol
     * ?finalizeBlockRules\@LegacyStructureTemplate\@\@QEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void
    finalizeBlockRules(class BlockSource&, class BlockPos const&, class LegacyStructureSettings&, class Random&)
        const; // NOLINT
    /**
     * @symbol
     * ?getJigsawMarkers\@LegacyStructureTemplate\@\@QEBA?AV?$vector\@VJigsawStructureBlockInfo\@\@V?$allocator\@VJigsawStructureBlockInfo\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const; // NOLINT
    /**
     * @symbol ?getSize\@LegacyStructureTemplate\@\@QEBA?AVBlockPos\@\@W4Rotation\@\@\@Z
     */
    MCAPI class BlockPos getSize(enum class Rotation) const; // NOLINT
    /**
     * @symbol ?load\@LegacyStructureTemplate\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void load(class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?placeInWorldChunk\@LegacyStructureTemplate\@\@QEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVLegacyStructureSettings\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void
    placeInWorldChunk(class BlockSource&, class BlockPos const&, class LegacyStructureSettings&, class Random&); // NOLINT
    /**
     * @symbol
     * ?_mapPropertyToExtraBlock\@LegacyStructureTemplate\@\@SAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI static class Block const* _mapPropertyToExtraBlock(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_mapToBlock\@LegacyStructureTemplate\@\@SAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Block const* _mapToBlock(std::string const&); // NOLINT
    /**
     * @symbol ?_mapToData\@LegacyStructureTemplate\@\@SAAEBVBlock\@\@AEBV2\@AEBVLegacyStructureSettings\@\@\@Z
     */
    MCAPI static class Block const& _mapToData(class Block const&, class LegacyStructureSettings const&); // NOLINT
    /**
     * @symbol
     * ?_mapToProperty\@LegacyStructureTemplate\@\@SAPEBVBlock\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBV2\@\@Z
     */
    MCAPI static class Block const*
    _mapToProperty(std::string const&, std::string const&, class Block const&); // NOLINT
    /**
     * @symbol
     * ?getZeroPositionWithTransform\@LegacyStructureTemplate\@\@SA?AVBlockPos\@\@AEBV2\@W4Mirror\@\@W4Rotation\@\@HH\@Z
     */
    MCAPI static class BlockPos
    getZeroPositionWithTransform(class BlockPos const&, enum class Mirror, enum class Rotation, int, int); // NOLINT
    /**
     * @symbol ?transform\@LegacyStructureTemplate\@\@SA?AVBlockPos\@\@V2\@W4Mirror\@\@W4Rotation\@\@\@Z
     */
    MCAPI static class BlockPos transform(class BlockPos, enum class Mirror, enum class Rotation); // NOLINT
    /**
     * @symbol
     * ?AUTHOR_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const AUTHOR_TAG; // NOLINT
    /**
     * @symbol
     * ?BLOCKS_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCKS_TAG; // NOLINT
    /**
     * @symbol
     * ?BLOCK_TAG_NBT\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_TAG_NBT; // NOLINT
    /**
     * @symbol
     * ?BLOCK_TAG_POS\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_TAG_POS; // NOLINT
    /**
     * @symbol
     * ?BLOCK_TAG_STATE\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BLOCK_TAG_STATE; // NOLINT
    /**
     * @symbol ?CHUNK_SIZE\@LegacyStructureTemplate\@\@2HB
     */
    MCAPI static int const CHUNK_SIZE; // NOLINT
    /**
     * @symbol
     * ?ENTITIES_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITIES_TAG; // NOLINT
    /**
     * @symbol
     * ?ENTITY_TAG_BLOCKPOS\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITY_TAG_BLOCKPOS; // NOLINT
    /**
     * @symbol
     * ?ENTITY_TAG_NBT\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITY_TAG_NBT; // NOLINT
    /**
     * @symbol
     * ?ENTITY_TAG_POS\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const ENTITY_TAG_POS; // NOLINT
    /**
     * @symbol
     * ?MINECRAFT_PREFIX\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MINECRAFT_PREFIX; // NOLINT
    /**
     * @symbol
     * ?PALETTE_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const PALETTE_TAG; // NOLINT
    /**
     * @symbol
     * ?SIZE_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const SIZE_TAG; // NOLINT
    /**
     * @symbol ?STRUCTURE_VERSION\@LegacyStructureTemplate\@\@2HB
     */
    MCAPI static int const STRUCTURE_VERSION; // NOLINT
    /**
     * @symbol
     * ?VERSION_TAG\@LegacyStructureTemplate\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const VERSION_TAG; // NOLINT
    /**
     * @symbol ?defaultSettings\@LegacyStructureTemplate\@\@2VLegacyStructureSettings\@\@B
     */
    MCAPI static class LegacyStructureSettings const defaultSettings; // NOLINT

    // private:
    /**
     * @symbol ?_mapPropertiesToTags\@LegacyStructureTemplate\@\@CAXAEAVCompoundTag\@\@AEBV2\@\@Z
     */
    MCAPI static void _mapPropertiesToTags(class CompoundTag&, class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?_mapPropertyToTag\@LegacyStructureTemplate\@\@CAXAEAVCompoundTag\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI static void _mapPropertyToTag(class CompoundTag&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_mapTag\@LegacyStructureTemplate\@\@CA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@V23\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class CompoundTag>
    _mapTag(std::unique_ptr<class CompoundTag>, std::string const&); // NOLINT

private:
};
