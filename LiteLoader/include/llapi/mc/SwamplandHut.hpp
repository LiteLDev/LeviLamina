/**
 * @file  SwamplandHut.hpp
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
 * @brief MC class SwamplandHut.
 *
 */
class SwamplandHut : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWAMPLANDHUT
public:
    class SwamplandHut& operator=(class SwamplandHut const &) = delete;
    SwamplandHut(class SwamplandHut const &) = delete;
    SwamplandHut() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SwamplandHut();
    /**
     * @hash   697898799
     * @vftbl  2
     * @symbol ?getType@SwamplandHut@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -1976822071
     * @vftbl  4
     * @symbol ?postProcess@SwamplandHut@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1932614261
     * @vftbl  5
     * @symbol ?postProcessMobsAt@SwamplandHut@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   381933753
     * @vftbl  12
     * @symbol ?addHardcodedSpawnAreas@SwamplandHut@@UEBAXAEAVLevelChunk@@@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @hash   1730747496
     * @symbol ??0SwamplandHut@@QEAA@FHH@Z
     */
    MCAPI SwamplandHut(short, int, int);

//protected:
    /**
     * @hash   -800767496
     * @symbol ?placeCauldron@SwamplandHut@@IEAAXAEAVBlockSource@@AEAVRandom@@HHHAEBVBoundingBox@@@Z
     */
    MCAPI void placeCauldron(class BlockSource &, class Random &, int, int, int, class BoundingBox const &);

protected:

};