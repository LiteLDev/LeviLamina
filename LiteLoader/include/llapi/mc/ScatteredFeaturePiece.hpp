/**
 * @file  ScatteredFeaturePiece.hpp
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
 * @brief MC class ScatteredFeaturePiece.
 *
 */
class ScatteredFeaturePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCATTEREDFEATUREPIECE
public:
    class ScatteredFeaturePiece& operator=(class ScatteredFeaturePiece const &) = delete;
    ScatteredFeaturePiece(class ScatteredFeaturePiece const &) = delete;
    ScatteredFeaturePiece() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCATTEREDFEATUREPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScatteredFeaturePiece();
#endif

//protected:
    /**
     * @symbol ??0ScatteredFeaturePiece\@\@IEAA\@HHHHHH\@Z
     */
    MCAPI ScatteredFeaturePiece(int, int, int, int, int, int);
    /**
     * @symbol ?updateAverageGroundHeight\@ScatteredFeaturePiece\@\@IEAA_NAEAVBlockSource\@\@AEBVBoundingBox\@\@H\@Z
     */
    MCAPI bool updateAverageGroundHeight(class BlockSource &, class BoundingBox const &, int);

protected:

};
