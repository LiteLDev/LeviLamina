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
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 5
     * @symbol ?postProcessMobsAt\@OceanMonumentPiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 7
     * @symbol ?getWorldX\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldX(int, int);
    /**
     * @vftbl 8
     * @symbol ?getWorldZ\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldZ(int, int);
    /**
     * @vftbl 12
     * @symbol ?addHardcodedSpawnAreas\@OceanMonumentPiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OCEANMONUMENTPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~OceanMonumentPiece();
#endif
    /**
     * @symbol ??0OceanMonumentPiece\@\@QEAA\@AEAHAEAVBoundingBox\@\@\@Z
     */
    MCAPI OceanMonumentPiece(int&, class BoundingBox&);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ??0OceanMonumentPiece\@\@IEAA\@HAEAHV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@HHH\@Z
     */
    MCAPI OceanMonumentPiece(int, int&, std::shared_ptr<class RoomDefinition>, int, int, int);
    /**
     * @symbol ?chunkIntersects\@OceanMonumentPiece\@\@IEAA_NAEBVBoundingBox\@\@HHHH\@Z
     */
    MCAPI bool chunkIntersects(class BoundingBox const&, int, int, int, int);
    /**
     * @symbol ?generateDefaultFloor\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HH_N\@Z
     */
    MCAPI void generateDefaultFloor(class BlockSource&, class BoundingBox const&, int, int, bool);
    /**
     * @symbol ?spawnElder\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHH\@Z
     */
    MCAPI void spawnElder(class BlockSource&, class BoundingBox const&, int, int, int);
    // NOLINTEND

protected:
    // NOLINTBEGIN
    /**
     * @symbol ?mGridroomLeftWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomLeftWingConnectIndex;
    /**
     * @symbol ?mGridroomRightWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomRightWingConnectIndex;
    /**
     * @symbol ?mGridroomSourceIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomSourceIndex;
    /**
     * @symbol ?mGridroomTopConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomTopConnectIndex;
    /**
     * @symbol ?mLeftWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mLeftWingIndex;
    /**
     * @symbol ?mPenthouseIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mPenthouseIndex;
    /**
     * @symbol ?mRightWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mRightWingIndex;
    // NOLINTEND
};
