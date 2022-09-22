/**
 * @file  JunglePyramidPiece.hpp
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
 * @brief MC class JunglePyramidPiece.
 *
 */
class JunglePyramidPiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JUNGLEPYRAMIDPIECE
public:
    class JunglePyramidPiece& operator=(class JunglePyramidPiece const &) = delete;
    JunglePyramidPiece(class JunglePyramidPiece const &) = delete;
    JunglePyramidPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~JunglePyramidPiece();
    /**
     * @hash   958792640
     * @vftbl  2
     * @symbol ?getType@JunglePyramidPiece@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -2123871832
     * @vftbl  4
     * @symbol ?postProcess@JunglePyramidPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1487439943
     * @symbol ??0JunglePyramidPiece@@QEAA@FHH@Z
     */
    MCAPI JunglePyramidPiece(short, int, int);

};