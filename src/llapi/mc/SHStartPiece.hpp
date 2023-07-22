/**
 * @file  SHStartPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "SHStairsDown.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHStartPiece.
 *
 */
class SHStartPiece : public SHStairsDown {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHSTARTPIECE
public:
    class SHStartPiece& operator=(class SHStartPiece const &) = delete;
    SHStartPiece(class SHStartPiece const &) = delete;
    SHStartPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SHStartPiece();
    /**
     * @vftbl  2
     * @symbol  ?getType\@SHStartPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @symbol  ??0SHStartPiece\@\@QEAA\@HAEAVRandom\@\@HH\@Z
     */
    MCAPI SHStartPiece(int, class Random &, int, int);

};