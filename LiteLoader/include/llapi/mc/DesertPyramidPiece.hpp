/**
 * @file  DesertPyramidPiece.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~DesertPyramidPiece();
    /**
     * @hash   1574227384
     * @vftbl  2
     * @symbol  ?getType\@DesertPyramidPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   1434586352
     * @vftbl  4
     * @symbol  ?postProcess\@DesertPyramidPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -415867199
     * @symbol  ??0DesertPyramidPiece\@\@QEAA\@FHH\@Z
     */
    MCAPI DesertPyramidPiece(short, int, int);

};