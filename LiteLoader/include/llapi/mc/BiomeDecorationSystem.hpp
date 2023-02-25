/**
 * @file  BiomeDecorationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace BiomeDecorationSystem.
 *
 */
namespace BiomeDecorationSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?consolidateDecorationFeatures\@BiomeDecorationSystem\@\@YAXAEAVBiomeRegistry\@\@\@Z
     */
    MCAPI void consolidateDecorationFeatures(class BiomeRegistry &);
    /**
     * @symbol  ?decorate\@BiomeDecorationSystem\@\@YAXAEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEAV?$vector\@PEBVBiome\@\@V?$allocator\@PEBVBiome\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@6\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI void decorate(class LevelChunk &, class BlockSource &, class Random &, std::vector<class Biome const *> &, std::string const &, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol  ?decorateBiome\@BiomeDecorationSystem\@\@YA_NAEAVLevelChunk\@\@AEAVBlockSource\@\@AEAVRandom\@\@V?$span\@UBiomeDecorationFeature\@\@$0?0\@gsl\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVBiome\@\@AEBVIPreliminarySurfaceProvider\@\@\@Z
     */
    MCAPI bool decorateBiome(class LevelChunk &, class BlockSource &, class Random &, class gsl::span<struct BiomeDecorationFeature, -1>, std::string const &, class Biome const *, class IPreliminarySurfaceProvider const &);
    /**
     * @symbol  ?decorateLargeFeature\@BiomeDecorationSystem\@\@YAXAEAVBiome\@\@AEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void decorateLargeFeature(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &, std::string const &);
    /**
     * @symbol  ?decorateLargeFeature\@BiomeDecorationSystem\@\@YA_NAEAVLevelChunk\@\@AEAVBlockVolumeTarget\@\@AEAVRandom\@\@V?$span\@UBiomeDecorationFeature\@\@$0?0\@gsl\@\@AEBVChunkPos\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool decorateLargeFeature(class LevelChunk &, class BlockVolumeTarget &, class Random &, class gsl::span<struct BiomeDecorationFeature, -1>, class ChunkPos const &, std::string const &);

};