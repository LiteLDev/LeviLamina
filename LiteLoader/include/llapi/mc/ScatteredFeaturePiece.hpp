/**
 * @file  ScatteredFeaturePiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScatteredFeaturePiece.
 *
 */
class ScatteredFeaturePiece {

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCATTEREDFEATUREPIECE
    /**
     * @hash   966201672
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ScatteredFeaturePiece();
#endif

//protected:
    /**
     * @hash   -1314470137
     * @symbol ?updateAverageGroundHeight@ScatteredFeaturePiece@@IEAA_NAEAVBlockSource@@AEBVBoundingBox@@H@Z
     */
    MCAPI bool updateAverageGroundHeight(class BlockSource &, class BoundingBox const &, int);
    /**
     * @symbol ?updateHeightPositionToLowestGroundHeight@ScatteredFeaturePiece@@IEAA_NAEAVBlockSource@@AEBVBoundingBox@@H@Z
     */
    MCAPI bool updateHeightPositionToLowestGroundHeight(class BlockSource &, class BoundingBox const &, int);

protected:

};