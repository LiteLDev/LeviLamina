/**
 * @file  SHFillerCorridor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHFillerCorridor.
 *
 */
class SHFillerCorridor : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHFILLERCORRIDOR
public:
    class SHFillerCorridor& operator=(class SHFillerCorridor const &) = delete;
    SHFillerCorridor(class SHFillerCorridor const &) = delete;
    SHFillerCorridor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SHFillerCorridor();
    /**
     * @vftbl  2
     * @symbol  ?getType\@SHFillerCorridor\@\@UEBA?AW4StructurePieceType\@\@XZ
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol  ?postProcess\@SHFillerCorridor\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol  ?findPieceBox\@SHFillerCorridor\@\@SA?AVBoundingBox\@\@AEAV?$vector\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VStructurePiece\@\@U?$default_delete\@VStructurePiece\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@AEAVRandom\@\@HHHH\@Z
     */
    MCAPI static class BoundingBox findPieceBox(std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int);

};