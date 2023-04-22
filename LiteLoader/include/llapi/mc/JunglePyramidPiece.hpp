/**
 * @file  JunglePyramidPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?getType\@JunglePyramidPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl 4
     * @symbol ?postProcess\@JunglePyramidPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ??0JunglePyramidPiece\@\@QEAA\@FHH\@Z
     */
    MCAPI JunglePyramidPiece(short, int, int);

};
