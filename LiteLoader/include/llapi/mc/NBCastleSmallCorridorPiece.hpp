/**
 * @file  NBCastleSmallCorridorPiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBCastleSmallCorridorPiece.
 *
 */
class NBCastleSmallCorridorPiece : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBCASTLESMALLCORRIDORPIECE
public:
    class NBCastleSmallCorridorPiece& operator=(class NBCastleSmallCorridorPiece const &) = delete;
    NBCastleSmallCorridorPiece(class NBCastleSmallCorridorPiece const &) = delete;
    NBCastleSmallCorridorPiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NBCastleSmallCorridorPiece();
    /**
     * @vftbl  2
     * @symbol  ?getType\@NBCastleSmallCorridorPiece\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol  ?addChildren\@NBCastleSmallCorridorPiece\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@NBCastleSmallCorridorPiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};