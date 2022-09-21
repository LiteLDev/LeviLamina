/**
 * @file  MC/TemplateStructurePiece.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TemplateStructurePiece.
 *
 */
class TemplateStructurePiece : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TEMPLATESTRUCTUREPIECE
public:
    class TemplateStructurePiece& operator=(class TemplateStructurePiece const &) = delete;
    TemplateStructurePiece(class TemplateStructurePiece const &) = delete;
    TemplateStructurePiece() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TemplateStructurePiece();
    /**
     * @hash   -1615251849
     * @vftbl  1
     * @symbol ?moveBoundingBox@TemplateStructurePiece@@UEAAXHHH@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @hash   -1650780398
     * @vftbl  4
     * @symbol ?postProcess@TemplateStructurePiece@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @hash   1389712810
     * @symbol ??0TemplateStructurePiece@@QEAA@H@Z
     */
    MCAPI TemplateStructurePiece(int);

//protected:
    /**
     * @hash   -1087482926
     * @symbol ?_setup@TemplateStructurePiece@@IEAAXAEAVLegacyStructureTemplate@@AEBVLegacyStructureSettings@@AEBVBlockPos@@@Z
     */
    MCAPI void _setup(class LegacyStructureTemplate &, class LegacyStructureSettings const &, class BlockPos const &);

//private:
    /**
     * @hash   -1671761201
     * @symbol ?_setBoundingBoxFromTemplate@TemplateStructurePiece@@AEAAXXZ
     */
    MCAPI void _setBoundingBoxFromTemplate();

protected:

private:

};