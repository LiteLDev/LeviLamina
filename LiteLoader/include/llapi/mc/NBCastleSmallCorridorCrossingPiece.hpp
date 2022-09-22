/**
 * @file  NBCastleSmallCorridorCrossingPiece.hpp
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
 * @brief MC class NBCastleSmallCorridorCrossingPiece.
 *
 */
class NBCastleSmallCorridorCrossingPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESMALLCORRIDORCROSSINGPIECE
public:
    class NBCastleSmallCorridorCrossingPiece& operator=(class NBCastleSmallCorridorCrossingPiece const &) = delete;
    NBCastleSmallCorridorCrossingPiece(class NBCastleSmallCorridorCrossingPiece const &) = delete;
    NBCastleSmallCorridorCrossingPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~NBCastleSmallCorridorCrossingPiece();
    /**
     * @hash   235458788
     * @vftbl  2
     * @symbol ?getType@NBCastleSmallCorridorCrossingPiece@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -552154596
     * @vftbl  3
     * @symbol ?addChildren@NBCastleSmallCorridorCrossingPiece@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -341028156
     * @vftbl  4
     * @symbol ?postProcess@NBCastleSmallCorridorCrossingPiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};