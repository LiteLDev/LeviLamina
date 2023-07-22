/**
 * @file  StrongholdPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StrongholdPiece.
 *
 */
class StrongholdPiece {

#define AFTER_EXTRA
// Add Member There
public:
enum class SmallDoorType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRONGHOLDPIECE
public:
    class StrongholdPiece& operator=(class StrongholdPiece const &) = delete;
    StrongholdPiece(class StrongholdPiece const &) = delete;
    StrongholdPiece() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRONGHOLDPIECE
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~StrongholdPiece();
#endif
    /**
     * @symbol  ?findAndCreatePieceFactory\@StrongholdPiece\@\@QEAA?AV?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class StructurePiece> findAndCreatePieceFactory(std::string const &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @symbol  ?generateAndAddPiece\@StrongholdPiece\@\@QEAAPEAVStructurePiece\@\@AEAVSHStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI class StructurePiece * generateAndAddPiece(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);
    /**
     * @symbol  ?generatePieceFromSmallDoor\@StrongholdPiece\@\@QEAA?AV?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@AEAVSHStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEBVRandom\@\@HHHHH\@Z
     */
    MCAPI std::unique_ptr<class StructurePiece> generatePieceFromSmallDoor(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random const &, int, int, int, int, int);
    /**
     * @symbol  ?generateSmallDoor\@StrongholdPiece\@\@QEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@W4SmallDoorType\@1\@HHH\@Z
     */
    MCAPI void generateSmallDoor(class BlockSource &, class Random &, class BoundingBox const &, enum class StrongholdPiece::SmallDoorType, int, int, int);
    /**
     * @symbol  ?generateSmallDoorChildForward\@StrongholdPiece\@\@QEAAPEAVStructurePiece\@\@AEAVSHStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI class StructurePiece * generateSmallDoorChildForward(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int);
    /**
     * @symbol  ?generateSmallDoorChildLeft\@StrongholdPiece\@\@QEAAPEAVStructurePiece\@\@AEAVSHStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI class StructurePiece * generateSmallDoorChildLeft(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int);
    /**
     * @symbol  ?generateSmallDoorChildRight\@StrongholdPiece\@\@QEAAPEAVStructurePiece\@\@AEAVSHStartPiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI class StructurePiece * generateSmallDoorChildRight(class SHStartPiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int);

};