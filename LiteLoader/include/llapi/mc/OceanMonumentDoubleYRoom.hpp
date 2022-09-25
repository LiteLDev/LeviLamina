/**
 * @file  OceanMonumentDoubleYRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentDoubleYRoom.
 *
 */
class OceanMonumentDoubleYRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEYROOM
public:
    class OceanMonumentDoubleYRoom& operator=(class OceanMonumentDoubleYRoom const &) = delete;
    OceanMonumentDoubleYRoom(class OceanMonumentDoubleYRoom const &) = delete;
    OceanMonumentDoubleYRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentDoubleYRoom();
    /**
     * @hash   372205293
     * @vftbl  2
     * @symbol ?getType@OceanMonumentDoubleYRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -890182117
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentDoubleYRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};