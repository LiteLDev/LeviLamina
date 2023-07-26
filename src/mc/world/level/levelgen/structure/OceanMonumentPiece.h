#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class OceanMonumentPiece : public ::StructurePiece {

public:
    // prevent constructor by default
    OceanMonumentPiece& operator=(OceanMonumentPiece const&) = delete;
    OceanMonumentPiece(OceanMonumentPiece const&)            = delete;
    OceanMonumentPiece()                                     = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?postProcessMobsAt\@OceanMonumentPiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getWorldX\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldX(int, int); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getWorldZ\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldZ(int, int); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?addHardcodedSpawnAreas\@OceanMonumentPiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OceanMonumentPiece(); // NOLINT
#endif
    /**
     * @symbol ??0OceanMonumentPiece\@\@QEAA\@AEAHAEAVBoundingBox\@\@\@Z
     */
    MCAPI OceanMonumentPiece(int&, class BoundingBox&); // NOLINT

    // protected:
    /**
     * @symbol ??0OceanMonumentPiece\@\@IEAA\@HAEAHV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@HHH\@Z
     */
    MCAPI OceanMonumentPiece(int, int&, class std::shared_ptr<class RoomDefinition>, int, int, int); // NOLINT
    /**
     * @symbol ?chunkIntersects\@OceanMonumentPiece\@\@IEAA_NAEBVBoundingBox\@\@HHHH\@Z
     */
    MCAPI bool chunkIntersects(class BoundingBox const&, int, int, int, int); // NOLINT
    /**
     * @symbol ?generateDefaultFloor\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HH_N\@Z
     */
    MCAPI void generateDefaultFloor(class BlockSource&, class BoundingBox const&, int, int, bool); // NOLINT
    /**
     * @symbol ?spawnElder\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHH\@Z
     */
    MCAPI void spawnElder(class BlockSource&, class BoundingBox const&, int, int, int); // NOLINT

protected:
    /**
     * @symbol ?mGridroomLeftWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomLeftWingConnectIndex; // NOLINT
    /**
     * @symbol ?mGridroomRightWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomRightWingConnectIndex; // NOLINT
    /**
     * @symbol ?mGridroomSourceIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomSourceIndex; // NOLINT
    /**
     * @symbol ?mGridroomTopConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomTopConnectIndex; // NOLINT
    /**
     * @symbol ?mLeftWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mLeftWingIndex; // NOLINT
    /**
     * @symbol ?mPenthouseIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mPenthouseIndex; // NOLINT
    /**
     * @symbol ?mRightWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mRightWingIndex; // NOLINT
};
