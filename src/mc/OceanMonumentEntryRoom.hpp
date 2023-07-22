/**
 * @file  OceanMonumentEntryRoom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentEntryRoom.
 *
 */
class OceanMonumentEntryRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTENTRYROOM
public:
    class OceanMonumentEntryRoom& operator=(class OceanMonumentEntryRoom const &) = delete;
    OceanMonumentEntryRoom(class OceanMonumentEntryRoom const &) = delete;
    OceanMonumentEntryRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~OceanMonumentEntryRoom();
    /**
     * @vftbl  2
     * @symbol  ?getType\@OceanMonumentEntryRoom\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@OceanMonumentEntryRoom\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};