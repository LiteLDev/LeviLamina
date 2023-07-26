#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CanyonFeatureUtils { struct CanyonConfiguration; }
// clang-format on

class CanyonFeature {

public:
    // prevent constructor by default
    CanyonFeature& operator=(CanyonFeature const&) = delete;
    CanyonFeature(CanyonFeature const&)            = delete;
    CanyonFeature()                                = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?carve\@CanyonFeature\@\@MEBA_NAEAVBlockVolume\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@4HHHHHHMMV?$span\@$$CBM$0?0\@gsl\@\@AEBUWorldGenContext\@\@\@Z
     */
    virtual bool
    carve(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>, struct WorldGenContext const&)
        const; // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?addFeature\@CanyonFeature\@\@MEAAXAEAVBlockVolume\@\@AEBVBiomeSource\@\@AEBUCanyonConfiguration\@CanyonFeatureUtils\@\@AEBVChunkPos\@\@AEAVRandom\@\@HHAEBUWorldGenContext\@\@\@Z
     */
    virtual void
    addFeature(class BlockVolume&, class BiomeSource const&, struct CanyonFeatureUtils::CanyonConfiguration const&, class ChunkPos const&, class Random&, int, int, struct WorldGenContext const&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CANYONFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~CanyonFeature(); // NOLINT
#endif
    /**
     * @symbol ??0CanyonFeature\@\@QEAA\@F\@Z
     */
    MCAPI CanyonFeature(short); // NOLINT
    /**
     * @symbol
     * ?apply\@CanyonFeature\@\@QEAAXAEAVBlockVolume\@\@AEBVChunkPos\@\@AEBVBiomeSource\@\@AEBUCanyonConfiguration\@CanyonFeatureUtils\@\@AEAVRandom\@\@IAEBUWorldGenContext\@\@\@Z
     */
    MCAPI void
    apply(class BlockVolume&, class ChunkPos const&, class BiomeSource const&, struct CanyonFeatureUtils::CanyonConfiguration const&, class Random&, unsigned int, struct WorldGenContext const&); // NOLINT
    /**
     * @symbol ?isDiggable\@CanyonFeature\@\@SA_NAEBVBlock\@\@0\@Z
     */
    MCAPI static bool isDiggable(class Block const&, class Block const&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?addTunnel\@CanyonFeature\@\@IEBAXAEAVBlockVolume\@\@AEBVBiomeSource\@\@AEAVRandom\@\@AEBVChunkPos\@\@AEBVVec3\@\@4MMMHHMAEBUWorldGenContext\@\@\@Z
     */
    MCAPI void
    addTunnel(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, float, float, float, int, int, float, struct WorldGenContext const&)
        const; // NOLINT

protected:
};
