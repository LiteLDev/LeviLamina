/**
 * @file  Igloo.hpp
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
 * @brief MC class Igloo.
 *
 */
class Igloo : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IGLOO
public:
    class Igloo& operator=(class Igloo const &) = delete;
    Igloo(class Igloo const &) = delete;
    Igloo() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Igloo();
    /**
     * @hash   -1828845235
     * @vftbl  2
     * @symbol  ?getType\@Igloo\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   1993862875
     * @vftbl  4
     * @symbol  ?postProcess\@Igloo\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -870279593
     * @vftbl  5
     * @symbol  ?postProcessMobsAt\@Igloo\@\@UEAAXAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1395324554
     * @symbol  ??0Igloo\@\@QEAA\@FHH\@Z
     */
    MCAPI Igloo(short, int, int);

//private:

private:
    /**
     * @hash   -321463169
     * @symbol  ?STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR\@Igloo\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    /**
     * @hash   1172078495
     * @symbol  ?STRUCTURE_LOCATION_IGLOO_TRAPDOOR\@Igloo\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    /**
     * @hash   -971540506
     * @symbol  ?STRUCTURE_LOCATION_LABORATORY\@Igloo\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_LABORATORY;
    /**
     * @hash   718195093
     * @symbol  ?STRUCTURE_LOCATION_LADDER\@Igloo\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_LADDER;

};