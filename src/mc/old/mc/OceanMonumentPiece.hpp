/**
 * @file  OceanMonumentPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentPiece.
 *
 */
class OceanMonumentPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTPIECE
public:
    class OceanMonumentPiece& operator=(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece(class OceanMonumentPiece const &) = delete;
    OceanMonumentPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanMonumentPiece();
    /**
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@OceanMonumentPiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  7
     * @symbol  ?getWorldX\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldX(int, int);
    /**
     * @vftbl  8
     * @symbol  ?getWorldZ\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldZ(int, int);
    /**
     * @vftbl  12
     * @symbol  ?addHardcodedSpawnAreas\@OceanMonumentPiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol  ??0OceanMonumentPiece\@\@QEAA\@AEAHAEAVBoundingBox\@\@\@Z
     */
    MCAPI OceanMonumentPiece(int &, class BoundingBox &);

//protected:
    /**
     * @symbol  ??0OceanMonumentPiece\@\@IEAA\@HAEAHV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@HHH\@Z
     */
    MCAPI OceanMonumentPiece(int, int &, class std::shared_ptr<class RoomDefinition>, int, int, int);
    /**
     * @symbol  ?chunkIntersects\@OceanMonumentPiece\@\@IEAA_NAEBVBoundingBox\@\@HHHH\@Z
     */
    MCAPI bool chunkIntersects(class BoundingBox const &, int, int, int, int);
    /**
     * @symbol  ?generateDefaultFloor\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HH_N\@Z
     */
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int, int, bool);
    /**
     * @symbol  ?spawnElder\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHH\@Z
     */
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int, int, int);

protected:
    /**
     * @symbol  ?mGridroomLeftWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomLeftWingConnectIndex;
    /**
     * @symbol  ?mGridroomRightWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomRightWingConnectIndex;
    /**
     * @symbol  ?mGridroomSourceIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomSourceIndex;
    /**
     * @symbol  ?mGridroomTopConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomTopConnectIndex;
    /**
     * @symbol  ?mLeftWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mLeftWingIndex;
    /**
     * @symbol  ?mPenthouseIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mPenthouseIndex;
    /**
     * @symbol  ?mRightWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mRightWingIndex;

};