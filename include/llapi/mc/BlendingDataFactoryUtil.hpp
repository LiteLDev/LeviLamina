/**
 * @file  BlendingDataFactoryUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LevelChunk.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BlendingDataFactoryUtil.
 *
 */
namespace BlendingDataFactoryUtil {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?_deduceBlockTypeFromBlock\@BlendingDataFactoryUtil\@\@YA?AW4BlendingBlockType\@\@AEBVBlock\@\@0\@Z
     */
    MCAPI enum class BlendingBlockType _deduceBlockTypeFromBlock(class Block const &, class Block const &);
    /**
     * @symbol  ?_processBlockTypeFromCellEntry\@BlendingDataFactoryUtil\@\@YA?AW4BlendingBlockType\@\@AEAV?$vector\@W4BlendingBlockType\@\@V?$allocator\@W4BlendingBlockType\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI enum class BlendingBlockType _processBlockTypeFromCellEntry(std::vector<enum class BlendingBlockType> &);
    /**
     * @symbol  ?calculateSurfaceDensity\@BlendingDataFactoryUtil\@\@YAXAEAVBlendingData\@\@_K\@Z
     */
    MCAPI void calculateSurfaceDensity(class BlendingData &, unsigned __int64);
    /**
     * @symbol  ?iterateDownCellColumnUntil\@BlendingDataFactoryUtil\@\@YAXVChunkLocalHeight\@\@AEAV?$vector\@UBorderCellEntry\@BlendingDataFactoryUtil\@\@V?$allocator\@UBorderCellEntry\@BlendingDataFactoryUtil\@\@\@std\@\@\@std\@\@HV?$function\@$$A6AAEAUSubChunk\@\@H\@Z\@4\@V?$function\@$$A6A_NAEBUSubChunk\@\@AEAUBorderCellEntry\@BlendingDataFactoryUtil\@\@VChunkLocalHeight\@\@GH\@Z\@4\@\@Z
     */
    MCAPI void iterateDownCellColumnUntil(class ChunkLocalHeight, std::vector<struct BlendingDataFactoryUtil::BorderCellEntry> &, int, class std::function<struct SubChunk & (int)>, class std::function<bool (struct SubChunk const &, struct BlendingDataFactoryUtil::BorderCellEntry &, class ChunkLocalHeight, unsigned short, int)>);
    /**
     * @symbol  ?processBorderCells\@BlendingDataFactoryUtil\@\@YAXVNeighbors\@LevelChunk\@\@V?$function\@$$A6AX_KHH0\@Z\@std\@\@\@Z
     */
    MCAPI void processBorderCells(class LevelChunk::Neighbors, class std::function<void (unsigned __int64, int, int, unsigned __int64)>);
    /**
     * @symbol  ?setBiome\@BlendingDataFactoryUtil\@\@YAXAEAVBlendingData\@\@_KHE\@Z
     */
    MCAPI void setBiome(class BlendingData &, unsigned __int64, int, unsigned char);
    /**
     * @symbol  ?setDensity\@BlendingDataFactoryUtil\@\@YAXAEAVBlendingData\@\@_KHM\@Z
     */
    MCAPI void setDensity(class BlendingData &, unsigned __int64, int, float);

};