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
     * @hash   952632991
     * @vftbl  2
     * @symbol  ?getType\@SwamplandHut\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   -1719735351
     * @vftbl  4
     * @symbol  ?postProcess\@SwamplandHut\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -2105066427
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@SwamplandHut\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   636667945
     * @vftbl  12
     * @symbol  ?addHardcodedSpawnAreas\@SwamplandHut\@\@UEBAXAEAVLevelChunk\@\@\@Z
     */
    virtual void addHardcodedSpawnAreas(class LevelChunk &) const;
    /**
     * @hash   1985558568
     * @symbol  ??0SwamplandHut\@\@QEAA\@FHH\@Z
     */
    MCAPI SwamplandHut(short, int, int);

//protected:
    /**
     * @hash   -546033304
     * @symbol  ?placeCauldron\@SwamplandHut\@\@IEAAXAEAVBlockSource\@\@AEAVRandom\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI void placeCauldron(class BlockSource &, class Random &, int, int, int, class BoundingBox const &);

protected:

};