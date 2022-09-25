/**
 * @file  FixedBiomeSource.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FixedBiomeSource.
 *
 */
class FixedBiomeSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIXEDBIOMESOURCE
public:
    class FixedBiomeSource& operator=(class FixedBiomeSource const &) = delete;
    FixedBiomeSource(class FixedBiomeSource const &) = delete;
    FixedBiomeSource() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FixedBiomeSource();
    /**
     * @hash   1045950581
     * @vftbl  1
     * @symbol ?fillBiomes@FixedBiomeSource@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
     */
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;
    /**
     * @hash   842786002
     * @vftbl  2
     * @symbol ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @hash   1907227284
     * @vftbl  3
     * @symbol ?getBiomeArea@FixedBiomeSource@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int, struct GetBiomeOptions const &) const;
    /**
     * @vftbl  4
     * @symbol ?containsOnly@FixedBiomeSource@@UEBA_NHHHHV?$span@$$CB_K$0?0@gsl@@@Z
     */
    virtual bool containsOnly(int, int, int, int, class gsl::span<unsigned __int64 const, -1>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FIXEDBIOMESOURCE
    /**
     * @hash   -1797524092
     * @symbol ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     */
    MCVAPI class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @hash   1569001970
     * @symbol ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
     */
    MCVAPI class Biome const * getBiome(struct GetBiomeOptions const &) const;
    /**
     * @hash   1391248457
     * @symbol ?getBiome@FixedBiomeSource@@UEBAPEBVBiome@@HHH@Z
     */
    MCVAPI class Biome const * getBiome(int, int, int) const;
#endif
    /**
     * @hash   -2111881294
     * @symbol ??0FixedBiomeSource@@QEAA@AEBVBiome@@@Z
     */
    MCAPI FixedBiomeSource(class Biome const &);

};