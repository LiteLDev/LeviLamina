/**
 * @file  OceanMonumentDoubleYZRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentDoubleYZRoom.
 *
 */
class OceanMonumentDoubleYZRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEYZROOM
public:
    class OceanMonumentDoubleYZRoom& operator=(class OceanMonumentDoubleYZRoom const &) = delete;
    OceanMonumentDoubleYZRoom(class OceanMonumentDoubleYZRoom const &) = delete;
    OceanMonumentDoubleYZRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanMonumentDoubleYZRoom();
    /**
     * @vftbl  2
     * @symbol  ?getType\@OceanMonumentDoubleYZRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@OceanMonumentDoubleYZRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};