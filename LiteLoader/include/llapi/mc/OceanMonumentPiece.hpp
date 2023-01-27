/**
 * @file  OceanMonumentPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../StructurePiece.hpp"

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
     * @hash   -2039883534
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@OceanMonumentPiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   10980623
     * @vftbl  7
     * @symbol  ?getWorldX\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldX(int, int);
    /**
     * @hash   -1532558319
     * @vftbl  8
     * @symbol  ?getWorldZ\@OceanMonumentPiece\@\@UEAAHHH\@Z
     */
    virtual int getWorldZ(int, int);
    /**
     * @hash   47428374
     * @vftbl  12
     * @symbol  ?addHardcodedSpawnAreas\@OceanMonumentPiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @hash   265388512
     * @symbol  ??0OceanMonumentPiece\@\@QEAA\@AEAHAEAVBoundingBox\@\@\@Z
     */
    MCAPI OceanMonumentPiece(int &, class BoundingBox &);

//protected:
    /**
     * @hash   -1579025704
     * @symbol  ??0OceanMonumentPiece\@\@IEAA\@HAEAHV?$shared_ptr\@VRoomDefinition\@\@\@std\@\@HHH\@Z
     */
    MCAPI OceanMonumentPiece(int, int &, class std::shared_ptr<class RoomDefinition>, int, int, int);
    /**
     * @hash   1229269821
     * @symbol  ?chunkIntersects\@OceanMonumentPiece\@\@IEAA_NAEBVBoundingBox\@\@HHHH\@Z
     */
    MCAPI bool chunkIntersects(class BoundingBox const &, int, int, int, int);
    /**
     * @hash   -647916868
     * @symbol  ?generateDefaultFloor\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HH_N\@Z
     */
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int, int, bool);
    /**
     * @hash   1770032136
     * @symbol  ?spawnElder\@OceanMonumentPiece\@\@IEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHH\@Z
     */
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int, int, int);

protected:
    /**
     * @hash   902448616
     * @symbol  ?mGridroomLeftWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomLeftWingConnectIndex;
    /**
     * @hash   -2017959547
     * @symbol  ?mGridroomRightWingConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomRightWingConnectIndex;
    /**
     * @hash   -319881855
     * @symbol  ?mGridroomSourceIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomSourceIndex;
    /**
     * @hash   -1190484021
     * @symbol  ?mGridroomTopConnectIndex\@OceanMonumentPiece\@\@1HA
     */
    MCAPI static int mGridroomTopConnectIndex;
    /**
     * @hash   -1286576932
     * @symbol  ?mLeftWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mLeftWingIndex;
    /**
     * @hash   371914955
     * @symbol  ?mPenthouseIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mPenthouseIndex;
    /**
     * @hash   -2072730363
     * @symbol  ?mRightWingIndex\@OceanMonumentPiece\@\@1HB
     */
    MCAPI static int const mRightWingIndex;

};