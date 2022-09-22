/**
 * @file  UnderwaterCanyonFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "CanyonFeatureUtils.hpp"
#include "CanyonFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class UnderwaterCanyonFeature.
 *
 */
class UnderwaterCanyonFeature : public CanyonFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNDERWATERCANYONFEATURE
public:
    class UnderwaterCanyonFeature& operator=(class UnderwaterCanyonFeature const &) = delete;
    UnderwaterCanyonFeature(class UnderwaterCanyonFeature const &) = delete;
    UnderwaterCanyonFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~UnderwaterCanyonFeature();
    /**
     * @hash   2060217792
     * @vftbl  1
     * @symbol ?carve@UnderwaterCanyonFeature@@MEBA_NAEAVBlockVolume@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVVec3@@4HHHHHHMMV?$span@$$CBM$0?0@gsl@@AEBUWorldGenContext@@@Z
     */
    virtual bool carve(class BlockVolume &, class BiomeSource const &, class Random &, class ChunkPos const &, class Vec3 const &, class Vec3 const &, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>, struct WorldGenContext const &) const;
    /**
     * @hash   457503253
     * @symbol ??0UnderwaterCanyonFeature@@QEAA@F@Z
     */
    MCAPI UnderwaterCanyonFeature(short);
    /**
     * @hash   1321852195
     * @symbol ?isDiggable@UnderwaterCanyonFeature@@SA_NAEBVBlock@@@Z
     */
    MCAPI static bool isDiggable(class Block const &);

};