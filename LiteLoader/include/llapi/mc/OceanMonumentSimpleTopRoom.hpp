/**
 * @file  OceanMonumentSimpleTopRoom.hpp
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
 * @brief MC class OceanMonumentSimpleTopRoom.
 *
 */
class OceanMonumentSimpleTopRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSIMPLETOPROOM
public:
    class OceanMonumentSimpleTopRoom& operator=(class OceanMonumentSimpleTopRoom const &) = delete;
    OceanMonumentSimpleTopRoom(class OceanMonumentSimpleTopRoom const &) = delete;
    OceanMonumentSimpleTopRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~OceanMonumentSimpleTopRoom();
    /**
     * @hash   -302999502
     * @vftbl  2
     * @symbol ?getType@OceanMonumentSimpleTopRoom@@UEBA?AW4StructurePieceType@@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   1307386742
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentSimpleTopRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};