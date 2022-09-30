/**
 * @file  BlendingDataFactoryUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   1935905460
     * @symbol ?_deduceBlockTypeFromBlock@BlendingDataFactoryUtil@@YA?AW4BlendingBlockType@@AEBVBlock@@0@Z
     */
    MCAPI enum class BlendingBlockType _deduceBlockTypeFromBlock(class Block const &, class Block const &);
    /**
     * @hash   516879236
     * @symbol ?_processBlockTypeFromCellEntry@BlendingDataFactoryUtil@@YA?AW4BlendingBlockType@@AEAV?$vector@W4BlendingBlockType@@V?$allocator@W4BlendingBlockType@@@std@@@std@@@Z
     */
    MCAPI enum class BlendingBlockType _processBlockTypeFromCellEntry(std::vector<enum class BlendingBlockType> &);
    /**
     * @hash   1666436483
     * @symbol ?calculateSurfaceDensity@BlendingDataFactoryUtil@@YAXAEAVBlendingData@@_K@Z
     */
    MCAPI void calculateSurfaceDensity(class BlendingData &, unsigned __int64);
    /**
     * @hash   -1590611163
     * @symbol ?iterateDownCellColumnUntil@BlendingDataFactoryUtil@@YAXVChunkLocalHeight@@AEAV?$vector@UBorderCellEntry@BlendingDataFactoryUtil@@V?$allocator@UBorderCellEntry@BlendingDataFactoryUtil@@@std@@@std@@HV?$function@$$A6AAEAUSubChunk@@H@Z@4@V?$function@$$A6A_NAEBUSubChunk@@AEAUBorderCellEntry@BlendingDataFactoryUtil@@VChunkLocalHeight@@GH@Z@4@@Z
     */
    MCAPI void iterateDownCellColumnUntil(class ChunkLocalHeight, std::vector<struct BlendingDataFactoryUtil::BorderCellEntry> &, int, class std::function<struct SubChunk & (int)>, class std::function<bool (struct SubChunk const &, struct BlendingDataFactoryUtil::BorderCellEntry &, class ChunkLocalHeight, unsigned short, int)>);
    /**
     * @hash   -1767739852
     * @symbol ?processBorderCells@BlendingDataFactoryUtil@@YAXVNeighbors@LevelChunk@@V?$function@$$A6AX_KHH0@Z@std@@@Z
     */
    MCAPI void processBorderCells(class LevelChunk::Neighbors, class std::function<void (unsigned __int64, int, int, unsigned __int64)>);
    /**
     * @hash   1870049740
     * @symbol ?setBiome@BlendingDataFactoryUtil@@YAXAEAVBlendingData@@_KHE@Z
     */
    MCAPI void setBiome(class BlendingData &, unsigned __int64, int, unsigned char);
    /**
     * @hash   1387309673
     * @symbol ?setDensity@BlendingDataFactoryUtil@@YAXAEAVBlendingData@@_KHM@Z
     */
    MCAPI void setDensity(class BlendingData &, unsigned __int64, int, float);

};