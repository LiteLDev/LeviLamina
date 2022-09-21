/**
 * @file  MC/OceanMonumentDoubleXYRoom.hpp
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
 * @brief MC class OceanMonumentDoubleXYRoom.
 *
 */
class OceanMonumentDoubleXYRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEXYROOM
public:
    class OceanMonumentDoubleXYRoom& operator=(class OceanMonumentDoubleXYRoom const &) = delete;
    OceanMonumentDoubleXYRoom(class OceanMonumentDoubleXYRoom const &) = delete;
    OceanMonumentDoubleXYRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentDoubleXYRoom();
    /**
     * @hash   1165987785
     * @vftbl  2
     * @symbol ?getType@OceanMonumentDoubleXYRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   829306895
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentDoubleXYRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};