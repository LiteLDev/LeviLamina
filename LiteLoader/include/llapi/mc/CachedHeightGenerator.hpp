/**
 * @file  CachedHeightGenerator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace CachedHeightGenerator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?cachedGenerationOfTerrainHeight\@CachedHeightGenerator\@\@YAFAEBVBlockPos\@\@AEAVDimension\@\@AEAVBlockVolume\@\@AEAV?$unordered_map\@VChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@U?$hash\@VChunkPos\@\@\@3\@U?$equal_to\@VChunkPos\@\@\@3\@V?$allocator\@U?$pair\@$$CBVChunkPos\@\@V?$unique_ptr\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@U?$default_delete\@V?$vector\@FV?$allocator\@F\@std\@\@\@std\@\@\@2\@\@std\@\@\@std\@\@\@3\@\@std\@\@\@Z
     */
    MCAPI short cachedGenerationOfTerrainHeight(class BlockPos const &, class Dimension &, class BlockVolume &, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>>>>> &);

};