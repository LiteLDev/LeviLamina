/**
 * @file  MC/Igloo.hpp
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
     * @symbol __unk_destructor_0
     */
    virtual ~Igloo();
    /**
     * @hash   -2083579427
     * @vftbl  2
     * @symbol ?getType@Igloo@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   1737790971
     * @vftbl  4
     * @symbol ?postProcess@Igloo@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1127535449
     * @vftbl  5
     * @symbol ?postProcessMobsAt@Igloo@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -1650135626
     * @symbol ??0Igloo@@QEAA@FHH@Z
     */
    MCAPI Igloo(short, int, int);

//private:

private:
    /**
     * @hash   -1965495841
     * @symbol ?STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR;
    /**
     * @hash   -471954177
     * @symbol ?STRUCTURE_LOCATION_IGLOO_TRAPDOOR@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_IGLOO_TRAPDOOR;
    /**
     * @hash   1679394118
     * @symbol ?STRUCTURE_LOCATION_LABORATORY@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_LABORATORY;
    /**
     * @hash   -925837579
     * @symbol ?STRUCTURE_LOCATION_LADDER@Igloo@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const STRUCTURE_LOCATION_LADDER;

};