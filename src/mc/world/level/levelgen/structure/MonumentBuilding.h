#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/OceanMonumentPiece.h"

class MonumentBuilding : public ::OceanMonumentPiece {

public:
    // prevent constructor by default
    MonumentBuilding& operator=(MonumentBuilding const&) = delete;
    MonumentBuilding(MonumentBuilding const&)            = delete;
    MonumentBuilding()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getType\@MonumentBuilding\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?postProcess\@MonumentBuilding\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?postProcessMobsAt\@MonumentBuilding\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ??0MonumentBuilding\@\@QEAA\@AEAVRandom\@\@FHHAEAH\@Z
     */
    MCAPI MonumentBuilding(class Random&, short, int, int, int&); // NOLINT

    // private:
    /**
     * @symbol ?generateEntranceArchs\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateEntranceArchs(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ?generateEntranceWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateEntranceWall(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ?generateLowerWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateLowerWall(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ?generateMiddleWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateMiddleWall(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ?generateRoofPiece\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateRoofPiece(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol
     * ?generateRoomGraph\@MonumentBuilding\@\@AEAA?AV?$vector\@V?$shared_ptr\@VRoomDefinition\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VRoomDefinition\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    MCAPI std::vector<class std::shared_ptr<class RoomDefinition>> generateRoomGraph(class Random&); // NOLINT
    /**
     * @symbol ?generateUpperWall\@MonumentBuilding\@\@AEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateUpperWall(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @symbol ?generateWing\@MonumentBuilding\@\@AEAAX_NHAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    MCAPI void generateWing(bool, int, class BlockSource&, class Random&, class BoundingBox const&); // NOLINT

private:
};
