#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureHelpers {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREHELPERS
public:
    StructureHelpers& operator=(StructureHelpers const&) = delete;
    StructureHelpers(StructureHelpers const&)            = delete;
    StructureHelpers()                                   = delete;
#endif

public:
    /**
     * @symbol
     * ?createChest\@StructureHelpers\@\@SA_NAEAVStructurePiece\@\@AEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@HHHEAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool
    createChest(class StructurePiece&, class BlockSource&, class BoundingBox const&, class Random&, int, int, int, unsigned char, std::string const&);
    /**
     * @symbol
     * ?createDispenser\@StructureHelpers\@\@SA_NAEAVStructurePiece\@\@AEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@HHHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool
    createDispenser(class StructurePiece&, class BlockSource&, class BoundingBox const&, class Random&, int, int, int, int, std::string const&);
    /**
     * @symbol
     * ?createMinecartChest\@StructureHelpers\@\@SA_NAEAVStructurePiece\@\@AEAVBlockSource\@\@AEBVBoundingBox\@\@AEAVRandom\@\@HHHHAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool
    createMinecartChest(class StructurePiece&, class BlockSource&, class BoundingBox const&, class Random&, int, int, int, int, std::string const&);
    /**
     * @symbol
     * ?fillColumnDown\@StructureHelpers\@\@SAXAEAVStructurePiece\@\@AEAVBlockSource\@\@AEBVBlock\@\@HHHAEBVBoundingBox\@\@\@Z
     */
    MCAPI static void
    fillColumnDown(class StructurePiece&, class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);
    /**
     * @symbol ?getTorchRotation\@StructureHelpers\@\@SAHHG\@Z
     */
    MCAPI static int getTorchRotation(int, unsigned short);
};
