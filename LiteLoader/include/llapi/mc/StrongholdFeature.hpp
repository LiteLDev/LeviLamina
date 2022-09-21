/**
 * @file  MC/StrongholdFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrongholdFeature.
 *
 */
class StrongholdFeature : public StructureFeature {

#define AFTER_EXTRA
// Add Member There
public:
struct StrongholdResult {
    StrongholdResult() = delete;
    StrongholdResult(StrongholdResult const&) = delete;
    StrongholdResult(StrongholdResult const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDFEATURE
public:
    class StrongholdFeature& operator=(class StrongholdFeature const &) = delete;
    StrongholdFeature(class StrongholdFeature const &) = delete;
    StrongholdFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~StrongholdFeature();
    /**
     * @hash   694899399
     * @vftbl  3
     * @symbol ?getNearestGeneratedFeature@StrongholdFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_N@Z
     */
    virtual bool getNearestGeneratedFeature(class Dimension &, class BiomeSource const &, class BlockPos const &, class BlockPos &, class IPreliminarySurfaceProvider const &, bool);
    /**
     * @hash   1465710936
     * @vftbl  5
     * @symbol ?isFeatureChunk@StrongholdFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    virtual bool isFeatureChunk(class BiomeSource const &, class Random &, class ChunkPos const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);
    /**
     * @hash   -1119487447
     * @vftbl  6
     * @symbol ?createStructureStart@StrongholdFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
     */
    virtual std::unique_ptr<class StructureStart> createStructureStart(class Dimension &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);
    /**
     * @hash   -862298205
     * @symbol ??0StrongholdFeature@@QEAA@PEAVVillageFeature@@I@Z
     */
    MCAPI StrongholdFeature(class VillageFeature *, unsigned int);
    /**
     * @hash   390726097
     * @symbol ?START_OFFSET@StrongholdFeature@@2VBlockPos@@B
     */
    MCAPI static class BlockPos const START_OFFSET;

//protected:
    /**
     * @hash   -766850968
     * @symbol ?generatePositions@StrongholdFeature@@IEAAXAEAVRandom@@AEBVBiomeSource@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
     */
    MCAPI void generatePositions(class Random &, class BiomeSource const &, unsigned int, class IPreliminarySurfaceProvider const &, class Dimension const &);

//private:
    /**
     * @hash   -545401164
     * @symbol ?_generateStronghold@StrongholdFeature@@AEAA?BUStrongholdResult@1@IAEBVChunkPos@@@Z
     */
    MCAPI struct StrongholdFeature::StrongholdResult const _generateStronghold(unsigned int, class ChunkPos const &);
    /**
     * @hash   1199401879
     * @symbol ?_getNearestStronghold@StrongholdFeature@@AEAA_NAEBVDimension@@IAEBVBlockPos@@AEAV3@_N@Z
     */
    MCAPI bool _getNearestStronghold(class Dimension const &, unsigned int, class BlockPos const &, class BlockPos &, bool);

protected:

private:

};