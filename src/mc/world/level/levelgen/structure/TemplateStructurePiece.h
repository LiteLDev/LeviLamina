#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructurePiece.h"

class TemplateStructurePiece : public ::StructurePiece {

public:
    // prevent constructor by default
    TemplateStructurePiece& operator=(TemplateStructurePiece const&) = delete;
    TemplateStructurePiece(TemplateStructurePiece const&)            = delete;
    TemplateStructurePiece()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?moveBoundingBox\@TemplateStructurePiece\@\@UEAAXHHH\@Z
     */
    virtual void moveBoundingBox(int, int, int);
    /**
     * @vftbl 4
     * @symbol ?postProcess\@TemplateStructurePiece\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    /**
     * @vftbl 13
     * @symbol
     * ?_handleDataMarker\@EndCityPiece\@EndCityPieces\@\@MEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@AEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual void
    _handleDataMarker(std::string const&, class BlockPos const&, class BlockSource&, class Random&, class BoundingBox const&) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TEMPLATESTRUCTUREPIECE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TemplateStructurePiece();
#endif
    /**
     * @symbol ??0TemplateStructurePiece\@\@QEAA\@H\@Z
     */
    MCAPI TemplateStructurePiece(int);
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_setup\@TemplateStructurePiece\@\@IEAAXAEAVLegacyStructureTemplate\@\@AEBVLegacyStructureSettings\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI void _setup(class LegacyStructureTemplate&, class LegacyStructureSettings const&, class BlockPos const&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_setBoundingBoxFromTemplate\@TemplateStructurePiece\@\@AEAAXXZ
     */
    MCAPI void _setBoundingBoxFromTemplate();
    // NOLINTEND
};
