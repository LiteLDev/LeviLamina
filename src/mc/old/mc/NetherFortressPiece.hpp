/**
 * @file  NetherFortressPiece.hpp
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
 * @brief MC class NetherFortressPiece.
 *
 */
class NetherFortressPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETHERFORTRESSPIECE
public:
    class NetherFortressPiece& operator=(class NetherFortressPiece const &) = delete;
    NetherFortressPiece(class NetherFortressPiece const &) = delete;
    NetherFortressPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetherFortressPiece();
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@NetherFortressPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  12
     * @symbol  ?addHardcodedSpawnAreas\@NetherFortressPiece\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol  ??0NetherFortressPiece\@\@QEAA\@H\@Z
     */
    MCAPI NetherFortressPiece(int);
    /**
     * @symbol  ?findAndCreateBridgePieceFactory\@NetherFortressPiece\@\@QEAA?AV?$unique_ptr\@VNetherFortressPiece\@\@U?$default_delete\@VNetherFortressPiece\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> findAndCreateBridgePieceFactory(std::string const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @symbol  ?generateAndAddPiece\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHHH_N\@Z
     */
    MCAPI class StructurePiece * generateAndAddPiece(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int, bool);
    /**
     * @symbol  ?generateChildForward\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH_N\@Z
     */
    MCAPI class StructurePiece * generateChildForward(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @symbol  ?generateChildLeft\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH_N\@Z
     */
    MCAPI class StructurePiece * generateChildLeft(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @symbol  ?generateChildRight\@NetherFortressPiece\@\@QEAAPEAVStructurePiece\@\@AEAVNBStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH_N\@Z
     */
    MCAPI class StructurePiece * generateChildRight(class NBStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, bool);
    /**
     * @symbol  ?generatePiece\@NetherFortressPiece\@\@QEAA?AV?$unique_ptr\@VNetherFortressPiece\@\@U?$default_delete\@VNetherFortressPiece\@\@\@std\@\@\@std\@\@AEAVNBStartPiece\@\@AEAV?$vector\@VPieceWeight\@\@V?$allocator\@VPieceWeight\@\@\@std\@\@\@3\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class NetherFortressPiece> generatePiece(class NBStartPiece &, std::vector<class PieceWeight> &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};