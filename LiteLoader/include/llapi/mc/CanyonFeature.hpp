/**
 * @file  CanyonFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "CanyonFeatureUtils.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CanyonFeature.
 *
 */
class CanyonFeature {

#define AFTER_EXTRA
// Add Member There
public:
struct CanyonConfiguration;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANYONFEATURE
public:
    class CanyonFeature& operator=(class CanyonFeature const &) = delete;
    CanyonFeature(class CanyonFeature const &) = delete;
    CanyonFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CanyonFeature();
    /**
     * @hash   1031213809
     * @vftbl  1
     * @symbol  ?carve\@CanyonFeature\@\@MEBA_NAEAVBlockVolume\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@4HHHHHHMMV?$span\@$$CBM$0?0\@gsl\@\@AEBUWorldGenContext\@\@\@Z
     */
    virtual bool carve(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>, struct WorldGenContext const &) const;
    /**
     * @hash   1588880219
     * @vftbl  2
     * @symbol  ?addFeature\@CanyonFeature\@\@MEAAXAEAVBlockVolume\@\@AEBVBiomeSource\@\@AEBUCanyonConfiguration\@CanyonFeatureUtils\@\@AEBVChunkPos\@\@AEAVRandom\@\@HHAEBUWorldGenContext\@\@\@Z
     */
    virtual void addFeature(class BlockVolume &, class BiomeSource const &, struct CanyonFeatureUtils::CanyonConfiguration const &, class ChunkPos const &, class Random &, int, int, struct WorldGenContext const &);
    /**
     * @hash   1364205462
     * @symbol  ??0CanyonFeature\@\@QEAA\@F\@Z
     */
    MCAPI CanyonFeature(short);
    /**
     * @hash   -1018580944
     * @symbol  ?apply\@CanyonFeature\@\@QEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBUCanyonConfiguration\@CanyonFeatureUtils\@\@AEAVRandom\@\@IAEBUWorldGenContext\@\@\@Z
     */
    MCAPI void apply(class BlockVolume &, class ChunkPos const &, class BiomeSource const &, struct CanyonFeatureUtils::CanyonConfiguration const &, class Random &, unsigned int, struct WorldGenContext const &);
    /**
     * @hash   -1863365093
     * @symbol  ?isDiggable\@CanyonFeature\@\@SA_NAEBVBlock\@\@0\@Z
     */
    MCAPI static bool isDiggable(class Block const &, class Block const &);

//protected:
    /**
     * @hash   200786362
     * @symbol  ?addTunnel\@CanyonFeature\@\@IEBAXAEAVBlockVolume\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@4MMMHHMAEBUWorldGenContext\@\@\@Z
     */
    MCAPI void addTunnel(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, float, float, float, int, int, float, struct WorldGenContext const &) const;

protected:

};