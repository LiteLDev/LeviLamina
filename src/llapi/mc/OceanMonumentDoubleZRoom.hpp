/**
 * @file  OceanMonumentDoubleZRoom.hpp
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
 * @brief MC class OceanMonumentDoubleZRoom.
 *
 */
class OceanMonumentDoubleZRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEZROOM
public:
    class OceanMonumentDoubleZRoom& operator=(class OceanMonumentDoubleZRoom const &) = delete;
    OceanMonumentDoubleZRoom(class OceanMonumentDoubleZRoom const &) = delete;
    OceanMonumentDoubleZRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanMonumentDoubleZRoom();
    /**
     * @vftbl  2
     * @symbol  ?getType\@OceanMonumentDoubleZRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@OceanMonumentDoubleZRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};