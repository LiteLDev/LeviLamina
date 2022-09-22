/**
 * @file  DesertPyramidPiece.hpp
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
 * @brief MC class DesertPyramidPiece.
 *
 */
class DesertPyramidPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DESERTPYRAMIDPIECE
public:
    class DesertPyramidPiece& operator=(class DesertPyramidPiece const &) = delete;
    DesertPyramidPiece(class DesertPyramidPiece const &) = delete;
    DesertPyramidPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DesertPyramidPiece();
    /**
     * @hash   1319493192
     * @vftbl  2
     * @symbol ?getType@DesertPyramidPiece@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   1179821408
     * @vftbl  4
     * @symbol ?postProcess@DesertPyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -670678271
     * @symbol ??0DesertPyramidPiece@@QEAA@FHH@Z
     */
    MCAPI DesertPyramidPiece(short, int, int);

};