/**
 * @file  NBMonsterThrone.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBMonsterThrone.
 *
 */
class NBMonsterThrone : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBMONSTERTHRONE
public:
    class NBMonsterThrone& operator=(class NBMonsterThrone const &) = delete;
    NBMonsterThrone(class NBMonsterThrone const &) = delete;
    NBMonsterThrone() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBMonsterThrone();
    /**
     * @hash   -1756363987
     * @vftbl  2
     * @symbol ?getType@NBMonsterThrone@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   2140914539
     * @vftbl  4
     * @symbol ?postProcess@NBMonsterThrone@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};