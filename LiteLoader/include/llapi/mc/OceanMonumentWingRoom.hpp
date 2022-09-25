/**
 * @file  OceanMonumentWingRoom.hpp
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
 * @brief MC class OceanMonumentWingRoom.
 *
 */
class OceanMonumentWingRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTWINGROOM
public:
    class OceanMonumentWingRoom& operator=(class OceanMonumentWingRoom const &) = delete;
    OceanMonumentWingRoom(class OceanMonumentWingRoom const &) = delete;
    OceanMonumentWingRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentWingRoom();
    /**
     * @hash   -540097648
     * @vftbl  2
     * @symbol ?getType@OceanMonumentWingRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   -371619320
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentWingRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   -194170988
     * @vftbl  5
     * @symbol ?postProcessMobsAt@OceanMonumentWingRoom@@UEAAXAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual void postProcessMobsAt(class BlockSource &, class Random &, class BoundingBox const &);

};