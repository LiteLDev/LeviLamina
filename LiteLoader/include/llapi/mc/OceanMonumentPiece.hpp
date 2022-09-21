/**
 * @file  MC/OceanMonumentPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentPiece();
    /**
     * @hash   -2131770510
     * @vftbl  5
     * @symbol ?postProcessMobsAt@OceanMonumentPiece@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -240493857
     * @vftbl  7
     * @symbol ?getWorldX@OceanMonumentPiece@@UEAAHHH@Z
     */
    virtual int getWorldX(int, int);
    /**
     * @hash   -1784032799
     * @vftbl  8
     * @symbol ?getWorldZ@OceanMonumentPiece@@UEAAHHH@Z
     */
    virtual int getWorldZ(int, int);
    /**
     * @hash   -201985722
     * @vftbl  12
     * @symbol ?addHardcodedSpawnAreas@OceanMonumentPiece@@UEBAXAEAVLevelChunk@@@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol ??0OceanMonumentPiece@@QEAA@AEAHAEAVBoundingBox@@@Z
     */
    MCAPI OceanMonumentPiece(int &, class BoundingBox &);

//protected:
    /**
     * @hash   -1828455176
     * @symbol ??0OceanMonumentPiece@@IEAA@HAEAHV?$shared_ptr@VRoomDefinition@@@std@@HHH@Z
     */
    MCAPI OceanMonumentPiece(int, int &, class std::shared_ptr<class RoomDefinition>, int, int, int);
    /**
     * @hash   979855725
     * @symbol ?chunkIntersects@OceanMonumentPiece@@IEAA_NAEBVBoundingBox@@HHHH@Z
     */
    MCAPI bool chunkIntersects(class BoundingBox const &, int, int, int, int);
    /**
     * @hash   -897515476
     * @symbol ?generateDefaultFloor@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HH_N@Z
     */
    MCAPI void generateDefaultFloor(class BlockSource &, class BoundingBox const &, int, int, bool);
    /**
     * @hash   1515190312
     * @symbol ?spawnElder@OceanMonumentPiece@@IEAAXAEAVBlockSource@@AEBVBoundingBox@@HHH@Z
     */
    MCAPI void spawnElder(class BlockSource &, class BoundingBox const &, int, int, int);

protected:
    /**
     * @hash   -159925352
     * @symbol ?mGridroomLeftWingConnectIndex@OceanMonumentPiece@@1HA
     */
    MCAPI static int mGridroomLeftWingConnectIndex;
    /**
     * @hash   1214633781
     * @symbol ?mGridroomRightWingConnectIndex@OceanMonumentPiece@@1HA
     */
    MCAPI static int mGridroomRightWingConnectIndex;
    /**
     * @hash   -1382255823
     * @symbol ?mGridroomSourceIndex@OceanMonumentPiece@@1HA
     */
    MCAPI static int mGridroomSourceIndex;
    /**
     * @hash   2042109307
     * @symbol ?mGridroomTopConnectIndex@OceanMonumentPiece@@1HA
     */
    MCAPI static int mGridroomTopConnectIndex;
    /**
     * @hash   2048113036
     * @symbol ?mLeftWingIndex@OceanMonumentPiece@@1HB
     */
    MCAPI static int const mLeftWingIndex;
    /**
     * @hash   -588362373
     * @symbol ?mPenthouseIndex@OceanMonumentPiece@@1HB
     */
    MCAPI static int const mPenthouseIndex;
    /**
     * @hash   1261959605
     * @symbol ?mRightWingIndex@OceanMonumentPiece@@1HB
     */
    MCAPI static int const mRightWingIndex;

};