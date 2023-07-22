/**
 * @file  SwamplandHut.hpp
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
     * @symbol  __unk_destructor_0
     */
    virtual ~SwamplandHut();
    /**
     * @vftbl  2
     * @symbol  ?getType\@SwamplandHut\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@SwamplandHut\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@SwamplandHut\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  12
     * @symbol  ?addHardcodedSpawnAreas\@SwamplandHut\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @symbol  ??0SwamplandHut\@\@QEAA\@FHH\@Z
     */
    MCAPI SwamplandHut(short, int, int);

//protected:
    /**
     * @symbol  ?placeCauldron\@SwamplandHut\@\@IEAAXAEAVBlockSource\@\@AEAVRandom\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI void placeCauldron(class BlockSource &, class Random &, int, int, int, class BoundingBox const &);

protected:

};