/**
 * @file  MC/MonumentBuilding.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MonumentBuilding.
 *
 */
class MonumentBuilding : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONUMENTBUILDING
public:
    class MonumentBuilding& operator=(class MonumentBuilding const &) = delete;
    MonumentBuilding(class MonumentBuilding const &) = delete;
    MonumentBuilding() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MonumentBuilding();
    /**
     * @hash   2066256976
     * @vftbl  2
     * @symbol ?getType@MonumentBuilding@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   1840536152
     * @vftbl  4
     * @symbol ?postProcess@MonumentBuilding@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -910164668
     * @vftbl  5
     * @symbol ?postProcessMobsAt@MonumentBuilding@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   938408388
     * @symbol ??0MonumentBuilding@@QEAA@AEAVRandom@@FHHAEAH@Z
     */
    MCAPI MonumentBuilding(class Random &, short, int, int, int &);

//private:
    /**
     * @hash   -1895084342
     * @symbol ?generateEntranceArchs@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateEntranceArchs(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   68115415
     * @symbol ?generateEntranceWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateEntranceWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1992614934
     * @symbol ?generateLowerWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateLowerWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1427649576
     * @symbol ?generateMiddleWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateMiddleWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1551718823
     * @symbol ?generateRoofPiece@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateRoofPiece(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1365346119
     * @symbol ?generateRoomGraph@MonumentBuilding@@AEAA?AV?$vector@V?$shared_ptr@VRoomDefinition@@@std@@V?$allocator@V?$shared_ptr@VRoomDefinition@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random &);
    /**
     * @hash   -1787766619
     * @symbol ?generateUpperWall@MonumentBuilding@@AEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateUpperWall(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1671236159
     * @symbol ?generateWing@MonumentBuilding@@AEAAX_NHAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    MCAPI void generateWing(bool, int, class BlockSource &, class Random &, class BoundingBox const &);

private:

};