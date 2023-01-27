/**
 * @file  SHRoomCrossing.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHRoomCrossing.
 *
 */
class SHRoomCrossing : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHROOMCROSSING
public:
    class SHRoomCrossing& operator=(class SHRoomCrossing const &) = delete;
    SHRoomCrossing(class SHRoomCrossing const &) = delete;
    SHRoomCrossing() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SHRoomCrossing();
    /**
     * @hash   632354105
     * @vftbl  2
     * @symbol  ?getType\@SHRoomCrossing\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @hash   -344980585
     * @vftbl  3
     * @symbol  ?addChildren\@SHRoomCrossing\@\@UEAAXAEAVStructurePiece\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@\@Z
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @hash   -1615689441
     * @vftbl  4
     * @symbol  ?postProcess\@SHRoomCrossing\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   879854774
     * @symbol  ?createPiece\@SHRoomCrossing\@\@SA?AV?$unique_ptr\@VStrongholdPiece\@\@U?$default_delete\@VStrongholdPiece\@\@\@std\@\@\@std\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@3\@AEAVRandom\@\@HHHHH\@Z
     */
    MCAPI static std::unique_ptr<class StrongholdPiece> createPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};