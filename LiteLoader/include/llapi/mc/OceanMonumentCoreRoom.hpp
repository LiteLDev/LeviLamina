/**
 * @file  OceanMonumentCoreRoom.hpp
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
 * @brief MC class OceanMonumentCoreRoom.
 *
 */
class OceanMonumentCoreRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTCOREROOM
public:
    class OceanMonumentCoreRoom& operator=(class OceanMonumentCoreRoom const &) = delete;
    OceanMonumentCoreRoom(class OceanMonumentCoreRoom const &) = delete;
    OceanMonumentCoreRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentCoreRoom();
    /**
     * @hash   -1947048868
     * @vftbl  2
     * @symbol ?getType@OceanMonumentCoreRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @hash   1222304588
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentCoreRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};