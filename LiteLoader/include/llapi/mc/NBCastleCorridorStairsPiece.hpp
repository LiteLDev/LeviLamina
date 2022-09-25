/**
 * @file  NBCastleCorridorStairsPiece.hpp
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
 * @brief MC class NBCastleCorridorStairsPiece.
 *
 */
class NBCastleCorridorStairsPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLECORRIDORSTAIRSPIECE
public:
    class NBCastleCorridorStairsPiece& operator=(class NBCastleCorridorStairsPiece const &) = delete;
    NBCastleCorridorStairsPiece(class NBCastleCorridorStairsPiece const &) = delete;
    NBCastleCorridorStairsPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBCastleCorridorStairsPiece();
    /**
     * @hash   -235882515
     * @vftbl  2
     * @symbol ?getType@NBCastleCorridorStairsPiece@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -1373775517
     * @vftbl  3
     * @symbol ?addChildren@NBCastleCorridorStairsPiece@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1150404613
     * @vftbl  4
     * @symbol ?postProcess@NBCastleCorridorStairsPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};