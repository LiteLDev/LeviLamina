#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StrongholdPiece.h"

class SHLeftTurn : public ::StrongholdPiece {

public:
    // prevent constructor by default
    SHLeftTurn& operator=(SHLeftTurn const&) = delete;
    SHLeftTurn(SHLeftTurn const&)            = delete;
    SHLeftTurn()                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?moveBoundingBox\@TemplateStructurePiece\@\@UEAAXHHH\@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vftbl 2
     * @symbol ?getType\@SHLeftTurn\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 3
     * @symbol
     * ?addChildren\@SHLeftTurn\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /**
     * @vftbl 4
     * @symbol ?postProcess\@SHLeftTurn\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 5
     * @symbol ?postProcessMobsAt\@StructurePiece\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 6
     * @symbol ?isInInvalidLocation\@StructurePiece\@\@UEAA_NAEAVBlockSource\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool isInInvalidLocation(class BlockSource&, class BoundingBox const&);
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
     * @vftbl 9
     * @symbol ?placeBlock\@StructurePiece\@\@UEAAXAEAVBlockSource\@\@AEBVBlock\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    virtual void placeBlock(class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);
    /**
     * @vftbl 10
     * @symbol ?canBeReplaced\@StructurePiece\@\@UEAA_NAEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /**
     * @vftbl 11
     * @symbol ?generateBox\@StructurePiece\@\@UEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHHAEBVBlock\@\@2_N\@Z
     */
    virtual void generateBox(
        class BlockSource&,
        class BoundingBox const&,
        int,
        int,
        int,
        int,
        int,
        int,
        class Block const&,
        class Block const&,
        bool
    );
    /**
     * @vftbl 12
     * @symbol ?addHardcodedSpawnAreas\@StructurePiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    // NOLINTEND
};
