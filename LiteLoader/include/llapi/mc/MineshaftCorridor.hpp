/**
 * @file  MineshaftCorridor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MineshaftPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MineshaftCorridor.
 *
 */
class MineshaftCorridor : public MineshaftPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTCORRIDOR
public:
    class MineshaftCorridor& operator=(class MineshaftCorridor const &) = delete;
    MineshaftCorridor(class MineshaftCorridor const &) = delete;
    MineshaftCorridor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MineshaftCorridor();
    /**
     * @vftbl  2
     * @symbol  ?getType\@MineshaftCorridor\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol  ?addChildren\@MineshaftCorridor\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@MineshaftCorridor\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@MineshaftCorridor\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol  ?_placeCobWeb\@MineshaftCorridor\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@MHHH\@Z
     */
    MCAPI void _placeCobWeb(class BlockSource &, class BoundingBox const &, class Random &, float, int, int, int);
    /**
     * @symbol  ?_placeSupport\@MineshaftCorridor\@\@QEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHHHHAEAVRandom\@\@\@Z
     */
    MCAPI void _placeSupport(class BlockSource &, class BoundingBox const &, int, int, int, int, int, class Random &);

//private:
    /**
     * @symbol  ?_fillPillarDownOrChainUp\@MineshaftCorridor\@\@AEAAXAEAVBlockSource\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI void _fillPillarDownOrChainUp(class BlockSource &, int, int, int, class BoundingBox const &);
    /**
     * @symbol  ?_placeDoubleLowerOrUpperSupport\@MineshaftCorridor\@\@AEAAXAEAVBlockSource\@\@AEBVBoundingBox\@\@HHH\@Z
     */
    MCAPI void _placeDoubleLowerOrUpperSupport(class BlockSource &, class BoundingBox const &, int, int, int);

private:

};